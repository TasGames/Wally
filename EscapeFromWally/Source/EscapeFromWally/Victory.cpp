// Thomas Simon

#include "Victory.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"

// Sets default values
AVictory::AVictory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VictoryBox = CreateDefaultSubobject<UBoxComponent>(TEXT("VictoryBox"));
	RootComponent = VictoryBox;
	VictoryBox->InitBoxExtent(FVector(150, 100, 100));
	VictoryBox->SetCollisionProfileName("Trigger");
	VictoryBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	VictoryBox->OnComponentBeginOverlap.AddDynamic(this, &AVictory::OnBeginOverlap);

	LockedMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LockedMesh"));

	OpenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OpenMesh"));
	OpenMesh->SetVisibility(false);

	Required = 0;
}

// Called every frame
void AVictory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVictory::Win_Implementation()
{
}

void AVictory::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor != this)
	{
		APlayerCharacter* P = Cast<APlayerCharacter>(OtherActor);
		if (P != NULL)
		{
			if (P->HowMany == Required)
			{
				Win();
			}
			else
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Locked");
		}
	}
}

