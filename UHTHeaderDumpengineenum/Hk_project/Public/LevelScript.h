#pragma once
#include "CoreMinimal.h"
#include "EChapter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LevelScript.generated.h"

class USaveComponent;
class UStreamingGroup;

UCLASS()
class HK_PROJECT_API ALevelScript : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    USaveComponent* m_saveComponent;
    
public:
    ALevelScript();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitialise(EChapter _chapter);
    
private:
    UFUNCTION()
    void _OnStreamingGroupSaveLoaded(UStreamingGroup* _streamingGroup);
    
};

