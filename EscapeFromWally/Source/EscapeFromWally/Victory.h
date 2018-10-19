// Thomas Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Victory.generated.h"

UCLASS()
class ESCAPEFROMWALLY_API AVictory : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = Box)
	class UBoxComponent* VictoryBox;

public:	
	// Sets default values for this actor's properties
	AVictory();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* LockedMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* OpenMesh;

	UFUNCTION(BlueprintNativeEvent, Category = Win)
	void Win();

	UPROPERTY(EditAnywhere)
	int Required;

protected:
	
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
};
