#pragma once
#include "CoreMinimal.h"
#include "InputActionKeyMapping.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputAxisConfigEntry.h"
#include "InputActionSpeechMapping.h"
#include "EMouseCaptureMode.h"
#include "EMouseLockMode.h"
#include "InputAxisKeyMapping.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "InputSettings.generated.h"

class UPlayerInput;
class UInputComponent;
class UInputSettings;

UCLASS(BlueprintType, DefaultConfig, Config=Input)
class ENGINE_API UInputSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere, EditFixedSize)
    TArray<FInputAxisConfigEntry> AxisConfig;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bAltEnterTogglesFullscreen: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bF11TogglesFullscreen: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bUseMouseForTouch: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bEnableMouseSmoothing: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bEnableFOVScaling: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bCaptureMouseOnLaunch: 1;
    
    UPROPERTY(Config)
    uint8 bDefaultViewportMouseLock: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bAlwaysShowTouchInterface: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bShowConsoleOnFourFingerTap: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bEnableGestureRecognizer: 1;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseAutocorrect;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FString> ExcludedAutocorrectOS;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FString> ExcludedAutocorrectCultures;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FString> ExcludedAutocorrectDeviceModels;
    
    UPROPERTY(Config, EditAnywhere)
    EMouseCaptureMode DefaultViewportMouseCaptureMode;
    
    UPROPERTY(Config, EditAnywhere)
    EMouseLockMode DefaultViewportMouseLockMode;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float FOVScale;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float DoubleClickTime;
    
private:
    UPROPERTY(Config, EditAnywhere)
    TArray<FInputActionKeyMapping> ActionMappings;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FInputAxisKeyMapping> AxisMappings;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FInputActionSpeechMapping> SpeechMappings;
    
    UPROPERTY(Config, EditAnywhere, NoClear)
    TSoftClassPtr<UPlayerInput> DefaultPlayerInputClass;
    
    UPROPERTY(Config, EditAnywhere, NoClear)
    TSoftClassPtr<UInputComponent> DefaultInputComponentClass;
    
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultTouchInterface;
    
    UPROPERTY(Config)
    FKey ConsoleKey;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FKey> ConsoleKeys;
    
    UInputSettings();
    UFUNCTION(BlueprintCallable)
    void SaveKeyMappings();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAxisMapping(const FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActionMapping(const FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    
    UFUNCTION(BlueprintPure)
    static UInputSettings* GetInputSettings();
    
    UFUNCTION(BlueprintPure)
    void GetAxisNames(TArray<FName>& AxisNames) const;
    
    UFUNCTION(BlueprintPure)
    void GetAxisMappingByName(const FName InAxisName, TArray<FInputAxisKeyMapping>& OutMappings) const;
    
    UFUNCTION(BlueprintPure)
    void GetActionNames(TArray<FName>& ActionNames) const;
    
    UFUNCTION(BlueprintPure)
    void GetActionMappingByName(const FName InActionName, TArray<FInputActionKeyMapping>& OutMappings) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceRebuildKeymaps();
    
    UFUNCTION(BlueprintCallable)
    void AddAxisMapping(const FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    
    UFUNCTION(BlueprintCallable)
    void AddActionMapping(const FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    
};

