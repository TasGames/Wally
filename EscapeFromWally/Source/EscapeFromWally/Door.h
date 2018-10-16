// Thomas Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UCLASS()
class ESCAPEFROMWALLY_API ADoor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* Door;

	UPROPERTY(VisibleAnywhere, Category = Box)
	class UBoxComponent* BoxComponent;


public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void ToggleDoor(FVector ForwardVector);

protected:

	UFUNCTION()
	void CloseDoor(float DeltaTime);

	UFUNCTION()
	void OpenDoor(float DeltaTime);

	bool Opening;
	bool Closing;
	bool ItClosed;

	UPROPERTY(EditAnywhere)
	float DoorSpeed;

	float DotProd;
	float MaxDegree;
	float AddRot;
	float PosOrNeg;
	float CurrentRot;
	
};
