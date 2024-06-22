#include "MyPrimaryGameLayout.h"

#include <GameplayTagContainer.h>

void UMyPrimaryGameLayout::NativeConstruct()
{
	Super::NativeConstruct();

	RegisterLayer(FGameplayTag::RequestGameplayTag("UI.Layer.Game"), GameLayerWidget);
	RegisterLayer(FGameplayTag::RequestGameplayTag("UI.Layer.GameMenu"), GameMenuLayerWidget);
	RegisterLayer(FGameplayTag::RequestGameplayTag("UI.Layer.Menu"), MenuLayerWidget);
}
