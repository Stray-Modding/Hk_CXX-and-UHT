#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MagicLeapRaycastQueryParams.h"
#include "MagicLeapRaycastFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class MAGICLEAP_API UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapRaycastFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static FMagicLeapRaycastQueryParams MakeRaycastQueryParams(FVector Position, FVector Direction, FVector UpVector, int32 Width, int32 Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32 UserData);
    
};

