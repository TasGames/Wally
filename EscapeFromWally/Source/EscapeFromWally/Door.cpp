// Thomas Simon

#include "Door.h"
#include "Components/BoxComponent.h"
#include "ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->InitBoxExtent(FVector(150, 100, 100));
	BoxComponent->SetCollisionProfileName("Trigger");
	RootComponent = BoxComponent;

	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	Door->SetupAttachment(RootComponent);

	ItClosed = true;
	Opening = false;
	Closing = false;

	DoorSpeed = 80.0f;

	DotProd = 0.0f;
	MaxDegree = 0.0f;
	AddRot = 0.0f;
	PosOrNeg = 0.0f;
	CurrentRot = 0.0f;
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Checking if it is opening
	if (Opening == true)
		OpenDoor(DeltaTime);

	// Checking if it is closing
	if (Closing == true)
		CloseDoor(DeltaTime);
}

void ADoor::OpenDoor(float DeltaTime)
{
	CurrentRot = Door->RelativeRotation.Yaw;

	AddRot = PosOrNeg * DeltaTime * DoorSpeed;

	if (FMath::IsNearlyEqual(CurrentRot, MaxDegree, 1.5f))
	{
		Closing = false;
		Opening = false;
	}
	else if (Opening == true)
	{
		FRotator NewRotation = FRotator(0.0f, AddRot, 0.0f);
		Door->AddRelativeRotation(FQuat(NewRotation), false, 0, ETeleportType::None);
	}
}

void ADoor::CloseDoor(float DeltaTime)
{
	CurrentRot = Door->RelativeRotation.Yaw;

	if (CurrentRot > 0)
		AddRot = -1 * DeltaTime * DoorSpeed;
	else
		AddRot = DeltaTime * DoorSpeed;

	if (FMath::IsNearlyEqual(CurrentRot, 0.0f, 1.5f))
	{
		Closing = false;
		Opening = false;
	}
	else if (Closing == true)
	{
		FRotator NewRotation = FRotator(0.0f, AddRot, 0.0f);
		Door->AddRelativeRotation(FQuat(NewRotation), false, 0, ETeleportType::None);
	}
}

void ADoor::ToggleDoor(FVector ForwardVector)
{
	// Is the chacter in front or behind the door
	DotProd = FVector::DotProduct(BoxComponent->GetForwardVector(), ForwardVector);

	// Get 1 or -1 from the the dot product
	PosOrNeg = FMath::Sign(DotProd);

	// Degree to clamp at
	MaxDegree = PosOrNeg * 90.0f;

	// Toggle bools
	if (ItClosed == true)
	{
		ItClosed = false;
		Closing = false;
		Opening = true;
	}
	else 
	{
		Opening = false;
		ItClosed = true;
		Closing = true;
	}
}