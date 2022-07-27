#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActorComponent.h"
#include "CachedKeyToActionInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EControllerAnalogStick.h"
#include "InputComponent.generated.h"

UCLASS(BlueprintType, Transient, ClassGroup=Custom, Config=Input, meta=(BlueprintSpawnableComponent))
class ENGINE_API UInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(DuplicateTransient, Transient)
    TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo;
    
public:
    UInputComponent();
private:
    UFUNCTION(BlueprintPure)
    bool WasControllerKeyJustReleased(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    bool WasControllerKeyJustPressed(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    bool IsControllerKeyDown(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    void GetTouchState(int32 FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetControllerVectorKeyState(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    void GetControllerMouseDelta(float& DeltaX, float& DeltaY) const;
    
    UFUNCTION(BlueprintPure)
    float GetControllerKeyTimeDown(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    void GetControllerAnalogStickState(TEnumAsByte<EControllerAnalogStick::Type> WhichStick, float& StickX, float& StickY) const;
    
    UFUNCTION(BlueprintPure)
    float GetControllerAnalogKeyState(FKey Key) const;
    
};

