#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameterMultiParm.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "HoudiniParameterRampColor.generated.h"

class UHoudiniParameterRampColorPoint;
class UHoudiniParameterRampModificationEvent;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampColor : public UHoudiniParameterMultiParm {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<UHoudiniParameterRampColorPoint*> Points;
    
    UPROPERTY()
    bool bCaching;
    
    UPROPERTY(Export)
    TArray<UHoudiniParameterRampColorPoint*> CachedPoints;
    
    UPROPERTY()
    TArray<float> DefaultPositions;
    
    UPROPERTY()
    TArray<FLinearColor> DefaultValues;
    
    UPROPERTY()
    TArray<int32> DefaultChoices;
    
    UPROPERTY()
    int32 NumDefaultPoints;
    
    UPROPERTY(Export)
    TArray<UHoudiniParameterRampModificationEvent*> ModificationEvents;
    
    UHoudiniParameterRampColor();
};

