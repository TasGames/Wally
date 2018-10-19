// Thomas Simon

#include "Collectable.h"
#include "PlayerCharacter.h"
#include "Victory.h"

// Sets default values
ACollectable::ACollectable()
{
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
	RootComponent = CollisionComponent;
	CollisionComponent->SetCollisionProfileName(TEXT("OverlapAll"));
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ACollectable::OnBeginOverlap);

	//Create a mesh component 
	CollectMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollectMesh"));
}

void ACollectable::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != this)
	{
		APlayerCharacter *P = Cast<APlayerCharacter>(OtherActor);
		if (P != NULL)
		{
			Destroy();	
			P->HowMany += 1;

			if (V != NULL)
			{
				if (V->Required == P->HowMany)
				{
					V->LockedMesh->SetVisibility(false);
					V->OpenMesh->SetVisibility(true);
				}
			}
		}
	}
}