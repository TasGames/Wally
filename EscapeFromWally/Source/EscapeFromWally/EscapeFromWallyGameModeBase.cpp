// Thomas Simon

#include "EscapeFromWallyGameModeBase.h"
#include "Blueprint/UserWidget.h"

AEscapeFromWallyGameModeBase::AEscapeFromWallyGameModeBase()
	: Super()
{
}

void AEscapeFromWallyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (PlayerHUDClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHUDClass);

		if (CurrentWidget != nullptr)
			CurrentWidget->AddToViewport();
	}
}
