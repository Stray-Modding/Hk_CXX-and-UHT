#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GroundProbeData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ProbeDirectionData.h"
#include "GroundProbeTools.generated.h"

UCLASS(BlueprintType)
class HK_PROJECT_API UGroundProbeTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGroundProbeTools();
    UFUNCTION(BlueprintCallable)
    static bool GetClosestDirectionData(UPARAM(Ref) FGroundProbeData& _probeData, FVector _origin, FVector _direction, FProbeDirectionData& _outProbeDirectionData, bool _debug);
    
};

