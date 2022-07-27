#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "OnGameUserSettingsUINeedsUpdateDelegate.h"
#include "EWindowMode.h"
#include "GameUserSettings.generated.h"

class UGameUserSettings;

UCLASS(BlueprintType, ConfigDoNotCheckDefaults, Config=GameUserSettings)
class ENGINE_API UGameUserSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    bool bUseVSync;
    
    UPROPERTY(Config)
    bool bUseDynamicResolution;
    
protected:
    UPROPERTY(Config)
    uint32 ResolutionSizeX;
    
    UPROPERTY(Config)
    uint32 ResolutionSizeY;
    
    UPROPERTY(Config)
    uint32 LastUserConfirmedResolutionSizeX;
    
    UPROPERTY(Config)
    uint32 LastUserConfirmedResolutionSizeY;
    
    UPROPERTY(Config)
    int32 WindowPosX;
    
    UPROPERTY(Config)
    int32 WindowPosY;
    
    UPROPERTY(Config)
    int32 FullscreenMode;
    
    UPROPERTY(Config)
    int32 LastConfirmedFullscreenMode;
    
    UPROPERTY(Config)
    int32 PreferredFullscreenMode;
    
    UPROPERTY(Config)
    uint32 Version;
    
    UPROPERTY(Config)
    int32 AudioQualityLevel;
    
    UPROPERTY(Config)
    int32 LastConfirmedAudioQualityLevel;
    
    UPROPERTY(Config)
    float FrameRateLimit;
    
    UPROPERTY(Config)
    int32 DesiredScreenWidth;
    
    UPROPERTY(GlobalConfig)
    bool bUseDesiredScreenHeight;
    
    UPROPERTY(Config)
    int32 DesiredScreenHeight;
    
    UPROPERTY(Config)
    int32 LastUserConfirmedDesiredScreenWidth;
    
    UPROPERTY(Config)
    int32 LastUserConfirmedDesiredScreenHeight;
    
    UPROPERTY(Config)
    float LastRecommendedScreenWidth;
    
    UPROPERTY(Config)
    float LastRecommendedScreenHeight;
    
    UPROPERTY(Config)
    float LastCPUBenchmarkResult;
    
    UPROPERTY(Config)
    float LastGPUBenchmarkResult;
    
    UPROPERTY(Config)
    TArray<float> LastCPUBenchmarkSteps;
    
    UPROPERTY(Config)
    TArray<float> LastGPUBenchmarkSteps;
    
    UPROPERTY(Config)
    float LastGPUBenchmarkMultiplier;
    
    UPROPERTY(Config)
    bool bUseHDRDisplayOutput;
    
    UPROPERTY(Config)
    int32 HDRDisplayOutputNits;
    
private:
    UPROPERTY(BlueprintAssignable)
    FOnGameUserSettingsUINeedsUpdate OnGameUserSettingsUINeedsUpdate;
    
public:
    UGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void ValidateSettings();
    
    UFUNCTION(BlueprintPure)
    bool SupportsHDRDisplayOutput() const;
    
    UFUNCTION(BlueprintCallable)
    void SetVSyncEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetVisualEffectQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetViewDistanceQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetTextureQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShadingQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenResolution(FIntPoint Resolution);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionScaleValueEx(float NewScaleValue);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionScaleValue(int32 NewScaleValue);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionScaleNormalized(float NewScaleNormalized);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessingQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOverallScalabilityLevel(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFullscreenMode(TEnumAsByte<EWindowMode::Type> InFullscreenMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRateLimit(float NewLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetFoliageQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicResolutionEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBenchmarkFallbackValues();
    
    UFUNCTION(BlueprintCallable)
    void SetAudioQualityLevel(int32 QualityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void RunHardwareBenchmark(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void RevertVideoMode();
    
    UFUNCTION(BlueprintCallable)
    void ResetToCurrentSettings();
    
    UFUNCTION(BlueprintCallable)
    void LoadSettings(bool bForceReload);
    
    UFUNCTION(BlueprintPure)
    bool IsVSyncEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsVSyncDirty() const;
    
    UFUNCTION(BlueprintPure)
    bool IsScreenResolutionDirty() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHDREnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFullscreenModeDirty() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDynamicResolutionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDynamicResolutionDirty() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDirty() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetVisualEffectQuality() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetViewDistanceQuality() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTextureQuality() const;
    
    UFUNCTION(BlueprintPure)
    static int32 GetSyncInterval();
    
    UFUNCTION(BlueprintPure)
    int32 GetShadowQuality() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetShadingQuality() const;
    
    UFUNCTION(BlueprintPure)
    FIntPoint GetScreenResolution() const;
    
    UFUNCTION(BlueprintPure)
    float GetResolutionScaleNormalized() const;
    
    UFUNCTION(BlueprintPure)
    void GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue) const;
    
    UFUNCTION(BlueprintPure)
    void GetResolutionScaleInformation(float& CurrentScaleNormalized, int32& CurrentScaleValue, int32& MinScaleValue, int32& MaxScaleValue) const;
    
    UFUNCTION(BlueprintCallable)
    float GetRecommendedResolutionScale();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EWindowMode::Type> GetPreferredFullscreenMode() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPostProcessingQuality() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOverallScalabilityLevel() const;
    
    UFUNCTION(BlueprintPure)
    FIntPoint GetLastConfirmedScreenResolution() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EWindowMode::Type> GetLastConfirmedFullscreenMode() const;
    
    UFUNCTION(BlueprintCallable)
    static UGameUserSettings* GetGameUserSettings();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EWindowMode::Type> GetFullscreenMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetFrameRateLimit() const;
    
    UFUNCTION(BlueprintPure)
    static int32 GetFramePace();
    
    UFUNCTION(BlueprintPure)
    int32 GetFoliageQuality() const;
    
    UFUNCTION(BlueprintPure)
    FIntPoint GetDesktopResolution() const;
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetDefaultWindowPosition();
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EWindowMode::Type> GetDefaultWindowMode();
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultResolutionScale();
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetDefaultResolution();
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentHDRDisplayNits() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAudioQualityLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAntiAliasingQuality() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableHDRDisplayOutput(bool bEnable, int32 DisplayNits);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmVideoMode();
    
    UFUNCTION(BlueprintCallable)
    void ApplySettings(bool bCheckForCommandLineOverrides);
    
    UFUNCTION(BlueprintCallable)
    void ApplyResolutionSettings(bool bCheckForCommandLineOverrides);
    
    UFUNCTION(BlueprintCallable)
    void ApplyNonResolutionSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyHardwareBenchmarkResults();
    
};

