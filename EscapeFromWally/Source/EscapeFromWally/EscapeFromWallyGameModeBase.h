// Thomas Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EscapeFromWallyGameModeBase.generated.h"

UCLASS()
class ESCAPEFROMWALLY_API AEscapeFromWallyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AEscapeFromWallyGameModeBase();

protected:

	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Totems, Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> PlayerHUDClass;

	UPROPERTY()
	class UUserWidget* CurrentWidget;
};
