#pragma once
#include "CoreMinimal.h"
#include "CameraFilmbackSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
#include "NamedLensPreset.h"
#include "CameraLensSettings.h"
#include "CameraFocusSettings.h"
#include "NamedFilmbackPreset.h"
#include "CineCameraComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CINEMATICCAMERA_API UCineCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCameraFilmbackSettings FilmbackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FCameraFilmbackSettings Filmback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraLensSettings LensSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraFocusSettings FocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CurrentFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CurrentAperture;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentFocusDistance;
    
protected:
    UPROPERTY(Config)
    TArray<FNamedFilmbackPreset> FilmbackPresets;
    
    UPROPERTY(Config)
    TArray<FNamedLensPreset> LensPresets;
    
    UPROPERTY(Config)
    FString DefaultFilmbackPresetName;
    
    UPROPERTY(Config)
    FString DefaultFilmbackPreset;
    
    UPROPERTY(Config)
    FString DefaultLensPresetName;
    
    UPROPERTY(Config)
    float DefaultLensFocalLength;
    
    UPROPERTY(Config)
    float DefaultLensFStop;
    
public:
    UCineCameraComponent();
    UFUNCTION(BlueprintCallable)
    void SetLensPresetByName(const FString& InPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetFilmbackPresetByName(const FString& InPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFocalLength(float InFocalLength);
    
    UFUNCTION(BlueprintPure)
    float GetVerticalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FNamedLensPreset> GetLensPresetsCopy();
    
    UFUNCTION(BlueprintPure)
    FString GetLensPresetName() const;
    
    UFUNCTION(BlueprintPure)
    float GetHorizontalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();
    
    UFUNCTION(BlueprintPure)
    FString GetFilmbackPresetName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDefaultFilmbackPresetName() const;
    
};

