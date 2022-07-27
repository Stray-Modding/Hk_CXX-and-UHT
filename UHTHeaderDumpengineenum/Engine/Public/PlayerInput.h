#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "KeyBind.h"
#include "PlayerInput.generated.h"

UCLASS(Transient, Config=Input, Within=PlayerController)
class ENGINE_API UPlayerInput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TArray<FKeyBind> DebugExecBindings;
    
    UPROPERTY(Config)
    TArray<FName> InvertedAxis;
    
    UPlayerInput();
    UFUNCTION(Exec)
    void SetMouseSensitivity(const float Sensitivity);
    
    UFUNCTION(Exec)
    void SetBind(FName BindName, const FString& Command);
    
    UFUNCTION(Exec)
    void InvertAxisKey(const FKey AxisKey);
    
    UFUNCTION(Exec)
    void InvertAxis(const FName AxisName);
    
    UFUNCTION(Exec)
    void ClearSmoothing();
    
};

