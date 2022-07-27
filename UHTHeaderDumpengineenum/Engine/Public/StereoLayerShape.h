#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StereoLayerShape.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class ENGINE_API UStereoLayerShape : public UObject {
    GENERATED_BODY()
public:
    UStereoLayerShape();
};

