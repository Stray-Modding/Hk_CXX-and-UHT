#pragma once
#include "CoreMinimal.h"
#include "FloatPIDController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "VectorPIDController.h"
#include "PIDTools.generated.h"

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UPIDTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPIDTools();
    UFUNCTION(BlueprintCallable)
    static FVector UpdateVectorPIDController(UPARAM(Ref) FVectorPIDController& _PID, FVector _current, FVector _target, float _dt);
    
    UFUNCTION(BlueprintCallable)
    static float UpdateFloatPIDController(UPARAM(Ref) FFloatPIDController& _PID, float _current, float _target, float _dt);
    
    UFUNCTION(BlueprintCallable)
    static void ResetVectorPIDController(UPARAM(Ref) FVectorPIDController& _PID);
    
    UFUNCTION(BlueprintCallable)
    static void ResetFloatPIDController(UPARAM(Ref) FFloatPIDController& _PID);
    
};

