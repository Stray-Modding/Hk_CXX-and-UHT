#pragma once
#include "CoreMinimal.h"
#include "JoyAsyncTraceAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDrawDebugTrace -FallbackName=EDrawDebugTrace
#include "JoyAsyncTraceSingleDoneDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "JoyAsyncTraceSingleAction.generated.h"

class UJoyAsyncTraceSingleAction;
class UObject;
class AActor;

UCLASS()
class JOYLIBRARYRUNTIME_API UJoyAsyncTraceSingleAction : public UJoyAsyncTraceAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FJoyAsyncTraceSingleDone TraceDone;
    
    UJoyAsyncTraceSingleAction();
    UFUNCTION(BlueprintCallable)
    static UJoyAsyncTraceSingleAction* AsyncSphereTraceSingleByChannel(UObject* _worldContextObject, FVector _start, FVector _end, float _radius, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    
    UFUNCTION(BlueprintCallable)
    static UJoyAsyncTraceSingleAction* AsyncLineTraceSingleByChannel(UObject* _worldContextObject, FVector _start, FVector _end, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    
    UFUNCTION(BlueprintCallable)
    static UJoyAsyncTraceSingleAction* AsyncCapsuleTraceSingleByChannel(UObject* _worldContextObject, FVector _start, FVector _end, float _radius, float _halfHeight, FRotator _orientation, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    
    UFUNCTION(BlueprintCallable)
    static UJoyAsyncTraceSingleAction* AsyncBoxTraceSingleByChannel(UObject* _worldContextObject, FVector _start, FVector _end, FVector _halfSize, FRotator _orientation, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    
};

