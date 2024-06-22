#pragma once

#include <CoreMinimal.h>

#include "PrimaryGameLayout.h"
#include "MyPrimaryGameLayout.generated.h"

UCLASS(Abstract)
class UE5ENHANCEDINPUTEX_API UMyPrimaryGameLayout : public UPrimaryGameLayout
{
	GENERATED_BODY()

public:
	void NativeConstruct() override;

protected:
	UPROPERTY( meta = (BindWidget))
	class UCommonActivatableWidgetContainerBase* GameLayerWidget;

	UPROPERTY( meta=(BindWidget))
	class UCommonActivatableWidgetContainerBase* GameMenuLayerWidget;

	UPROPERTY(meta = (BindWidget))
	class UCommonActivatableWidgetContainerBase* MenuLayerWidget;
};