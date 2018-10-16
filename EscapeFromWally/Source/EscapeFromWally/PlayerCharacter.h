// Thomas Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class ESCAPEFROMWALLY_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()
	
	//First Person Camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	//Torch Mesh
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* FP_Torch;

	//Spot Light
	UPROPERTY(VisibleDefaultsOnly, Category = Light)
	class USpotLightComponent* SpotLight;


public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	//How fast player turns horizontally
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;

	//How fast the player looks vertically
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;

protected:

	void MoveVer(float Val);
	void MoveHor(float Val);

	void UseTorch();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	//Returns FP_Torch subobject
	FORCEINLINE class UStaticMeshComponent* GetTorchMesh() const { return FP_Torch; }
	//Returns FirstPersonCameraComponent subobject 
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int ValueCollected;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool TorchOn;
	
};
