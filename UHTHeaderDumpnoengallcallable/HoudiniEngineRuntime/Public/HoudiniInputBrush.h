#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBrushType -FallbackName=EBrushType
#include "HoudiniBrushInfo.h"
#include "HoudiniInputBrush.generated.h"

class UModel;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputBrush : public UHoudiniInputActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHoudiniBrushInfo> BrushesInfo;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UModel* CombinedModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreInputObject;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBrushType> CachedInputBrushType;
    
public:
    UHoudiniInputBrush();
};
