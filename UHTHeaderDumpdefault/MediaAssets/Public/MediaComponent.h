#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MediaComponent.generated.h"

class UMediaTexture;
class UMediaPlayer;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MEDIAASSETS_API UMediaComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, Interp, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
public:
    UMediaComponent();
    UFUNCTION(BlueprintPure)
    UMediaTexture* GetMediaTexture() const;
    
    UFUNCTION(BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
};

