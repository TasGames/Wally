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
	//Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	ValueCollected = 0;
	TorchOn = true;

	//Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); 
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	//Create a mesh component that will be used when being viewed from a 1st person view
	FP_Torch = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TorchMesh"));
	FP_Torch->SetOnlyOwnerSee(true);
	FP_Torch->SetupAttachment(FirstPersonCameraComponent);
	FP_Torch->bCastDynamicShadow = false;
	FP_Torch->CastShadow = false;
	FP_Torch->RelativeRotation = FRotator(0.0f, 90.0f, 0.0f);
	FP_Torch->RelativeLocation = FVector(105.0f, 40.0f, -45.0f);

	SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
	SpotLight->SetupAttachment(FP_Torch);

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
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

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Set up gameplay key bindings
	check(PlayerInputComponent);

	//Jump
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//Use Torch
	PlayerInputComponent->BindAction("UseTorch", IE_Pressed, this, &APlayerCharacter::UseTorch);

	//Move
	PlayerInputComponent->BindAxis("MoveVer", this, &APlayerCharacter::MoveVer);
	PlayerInputComponent->BindAxis("MoveHor", this, &APlayerCharacter::MoveHor);

	//Rotate
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

}

