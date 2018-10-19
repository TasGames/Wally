// Thomas Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "Collectable.generated.h"

UCLASS()
class ESCAPEFROMWALLY_API ACollectable : public AActor
{
	GENERATED_BODY()

	//Trigger Component
	UPROPERTY(EditAnywhere)
	UBoxComponent* CollisionComponent;

	//Collectable Mesh
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* CollectMesh;

	UPROPERTY(EditAnywhere)
	class AVictory* V;

public:	
	//Sets default values for this actor's properties
	ACollectable();

protected:

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
};
