// Thomas Simon

#include "Collectable.h"
#include "PlayerCharacter.h"

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
		APlayerCharacter *p = Cast<APlayerCharacter>(OtherActor);
		if (p != NULL)
		{
			Destroy();	
			p->HowMany += 1;
		}
	}
}