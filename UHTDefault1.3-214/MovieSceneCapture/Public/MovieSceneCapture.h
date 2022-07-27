#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneCaptureInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "MovieSceneCaptureSettings.h"
#include "MovieSceneCapture.generated.h"

class UMovieSceneAudioCaptureProtocolBase;
class UMovieSceneImageCaptureProtocolBase;
class UMovieSceneCaptureProtocolBase;

UCLASS(BlueprintType, PerObjectConfig, Config=EditorPerProjectUserSettings)
class MOVIESCENECAPTURE_API UMovieSceneCapture : public UObject, public IMovieSceneCaptureInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, NoClear)
    FSoftClassPath ImageCaptureProtocolType;
    
    UPROPERTY(Config, EditAnywhere, NoClear)
    FSoftClassPath AudioCaptureProtocolType;
    
    UPROPERTY(Instanced, Transient, VisibleAnywhere)
    UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol;
    
    UPROPERTY(Instanced, Transient, VisibleAnywhere)
    UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FMovieSceneCaptureSettings Settings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    bool bUseSeparateProcess;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    bool bCloseEditorWhenCaptureStarts;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    FString AdditionalCommandLineArguments;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient)
    FString InheritedCommandLineArguments;
    
    UMovieSceneCapture();
    UFUNCTION(BlueprintCallable)
    void SetImageCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType);
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
    
    
    // Fix for true pure virtual functions not being implemented
};

