#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=JoyLibraryRuntime -ObjectName=Manager -FallbackName=Manager
#include "AudioManager.generated.h"

UCLASS(Abstract)
class HK_PROJECT_API AAudioManager : public AManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_maxAudioHolderTicksPerFrame;
    
    AAudioManager();
};

