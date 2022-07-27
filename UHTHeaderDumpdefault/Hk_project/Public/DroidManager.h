#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=JoyLibraryRuntime -ObjectName=Manager -FallbackName=Manager
#include "DroidTick.h"
#include "DroidManager.generated.h"

class ACharacterDroid;

UCLASS()
class HK_PROJECT_API ADroidManager : public AManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_maxDroidTicksPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_droidSignificanceDistanceThreshold;
    
private:
    UPROPERTY()
    TArray<ACharacterDroid*> m_droids;
    
    UPROPERTY()
    TArray<FDroidTick> m_droidTickList;
    
public:
    ADroidManager();
};
