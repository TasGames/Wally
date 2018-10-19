// Thomas Simon

#include "PlayerCharacter.h"
#include "Engine.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SpotLightComponent.h"
#include "Door.h"
#include "GameFramework/InputSettings.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	//Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	//Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); 
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	//Create a mesh component 
	FP_Torch = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TorchMesh"));
	FP_Torch->SetupAttachment(FirstPersonCameraComponent);
	FP_Torch->bCastDynamicShadow = false;
	FP_Torch->CastShadow = false;
	FP_Torch->RelativeRotation = FRotator(0.0f, 90.0f, 0.0f);
	FP_Torch->RelativeLocation = FVector(105.0f, 40.0f, -45.0f);

	//Create a spotlight component
	SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
	SpotLight->SetupAttachment(FP_Torch);
	SpotLight->RelativeRotation = FRotator(0.0f, 270.0f, 0.0f);
	SpotLight->RelativeLocation = FVector(0.0f, -10.0f, 0.0f);

	//Create a trigger capsule
	TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Trigger Capsule"));
	TriggerCapsule->InitCapsuleSize(55.f, 96.0f);;
	TriggerCapsule->SetCollisionProfileName(TEXT("Trigger"));
	TriggerCapsule->SetupAttachment(RootComponent);

	//Bind trigger events
	TriggerCapsule->OnComponentBeginOverlap.AddDynamic(this, &APlayerCharacter::OnOverlapBegin);
	TriggerCapsule->OnComponentEndOverlap.AddDynamic(this, &APlayerCharacter::OnOverlapEnd);

	//Initialize variables
	HowMany = 0;
	TimeLimit = 0.0f;
	TorchOn = true;
	IsPaused = false;
	CurrentDoor = NULL;
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeLimit -= 1;

	if (TimeLimit <= 0)
		Lose();
}

void APlayerCharacter::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp && OtherActor->GetClass()->IsChildOf(ADoor::StaticClass()))
		CurrentDoor = Cast<ADoor>(OtherActor);
}

void APlayerCharacter::OnOverlapEnd(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
		CurrentDoor = NULL;
}

void APlayerCharacter::MoveVer(float Val)
{
	if(Val != 0.0f)
		AddMovementInput(GetActorForwardVector(), Val);
}

void APlayerCharacter::MoveHor(float Val)
{
	if (Val != 0.0f)
		AddMovementInput(GetActorRightVector(), Val);
}

void APlayerCharacter::UseTorch()
{
	if (TorchOn == true)
	{
		SpotLight->SetVisibility(false);
		TorchOn = false;
	}
	else
	{
		SpotLight->SetVisibility(true);
		TorchOn = true;
	}
}

void APlayerCharacter::OnAction()
{
	if (CurrentDoor != NULL)
	{
		FVector ForwardVector = FirstPersonCameraComponent->GetForwardVector();
		CurrentDoor->ToggleDoor(ForwardVector);
	}
}

void APlayerCharacter::PauseIt()
{
}

void APlayerCharacter::Lose_Implementation()
{
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Set up gameplay key bindings
	check(PlayerInputComponent);

	//Bind Jump
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//Bind Torch
	PlayerInputComponent->BindAction("UseTorch", IE_Pressed, this, &APlayerCharacter::UseTorch);

	//Bind Action
	PlayerInputComponent->BindAction("Action", IE_Pressed, this, &APlayerCharacter::OnAction);

	//Bind Pause
	PlayerInputComponent->BindAction("Pause", IE_Pressed, this, &APlayerCharacter::PauseIt);

	//Bind Movement
	PlayerInputComponent->BindAxis("MoveVer", this, &APlayerCharacter::MoveVer);
	PlayerInputComponent->BindAxis("MoveHor", this, &APlayerCharacter::MoveHor);

	//Bind Rotation
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
}

