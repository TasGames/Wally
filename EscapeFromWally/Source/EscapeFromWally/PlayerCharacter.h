// Thomas Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class ESCAPEFROMWALLY_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()
	
	//Create Trigger Capsule
	UPROPERTY(VisibleAnywhere, Category = TriggerCapsule)
	class UCapsuleComponent* TriggerCapsule;

	//First Person Camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	//Torch Mesh
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* FP_Torch;

	//Spot Light
	UPROPERTY(VisibleDefaultsOnly, Category = Light)
	class USpotLightComponent* SpotLight;

	//Which Door
	class ADoor* CurrentDoor;

	bool TorchOn;

public:
	//Sets default values for this character's properties
	APlayerCharacter();

	//Declare overlap begin function
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//Declare overlap end function
	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int HowMany;

protected:

	void MoveVer(float Val);
	void MoveHor(float Val);

	void UseTorch();
	void OnAction();

	//Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
