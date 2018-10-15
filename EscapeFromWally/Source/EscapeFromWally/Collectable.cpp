// Thomas Simon

#include "Collectable.h"
#include "PlayerCharacter.h"


// Sets default values
ACollectable::ACollectable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("collisionComponent"));
	RootComponent = collisionComponent;
	collisionComponent->SetCollisionProfileName(TEXT("OverlapAll"));
	collisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	collisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ACollectable::OnBeginOverlap);
	value = 1;
}

// Called when the game starts or when spawned
void ACollectable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACollectable::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != this)
	{
		APlayerCharacter *p = Cast<APlayerCharacter>(OtherActor);
		if (p)
		{
			Destroy();	//kill this collectable
			p->ValueCollected += value;
		}
	}
}