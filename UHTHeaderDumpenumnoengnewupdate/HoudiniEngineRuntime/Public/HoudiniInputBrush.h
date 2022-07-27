#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputActor.h"
#include "HoudiniBrushInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBrushType -FallbackName=EBrushType
#include "HoudiniInputBrush.generated.h"

class UModel;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputBrush : public UHoudiniInputActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FHoudiniBrushInfo> BrushesInfo;
    
    UPROPERTY(DuplicateTransient, Transient)
    UModel* CombinedModel;
    
    UPROPERTY()
    bool bIgnoreInputObject;
    
    UPROPERTY()
    TEnumAsByte<EBrushType> CachedInputBrushType;
    
public:
    UHoudiniInputBrush();
};

