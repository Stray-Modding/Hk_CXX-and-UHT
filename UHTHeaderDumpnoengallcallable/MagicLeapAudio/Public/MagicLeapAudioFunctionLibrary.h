#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MagicLeapAudioJackUnpluggedDelegateDelegate.h"
#include "MagicLeapAudioJackPluggedDelegateDelegate.h"
#include "MagicLeapAudioFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPAUDIO_API UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapAudioFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SetOnAudioJackUnpluggedDelegate(const FMagicLeapAudioJackUnpluggedDelegate& ResultDelegate);
    
    UFUNCTION(BlueprintCallable)
    static bool SetOnAudioJackPluggedDelegate(const FMagicLeapAudioJackPluggedDelegate& ResultDelegate);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMicMute(bool IsMuted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMicMuted();
    
};

