// Thomas Simon

#include "PlayerCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
	//Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	//Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); 
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	//Create a mesh component that will be used when being viewed from a 1st person view
	MeshP = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMeshP"));
	MeshP->SetOnlyOwnerSee(true);
	MeshP->SetupAttachment(FirstPersonCameraComponent);
	MeshP->bCastDynamicShadow = false;
	MeshP->CastShadow = false;
	MeshP->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	MeshP->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);
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

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Set up gameplay key bindings
	check(PlayerInputComponent);

	//Jump
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//Move
	PlayerInputComponent->BindAxis("MoveVer", this, &APlayerCharacter::MoveVer);
	PlayerInputComponent->BindAxis("MoveHor", this, &APlayerCharacter::MoveHor);

	//Rotate
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

}

