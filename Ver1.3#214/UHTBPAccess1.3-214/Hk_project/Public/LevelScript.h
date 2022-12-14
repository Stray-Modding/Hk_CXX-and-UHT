#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EChapter.h"
#include "LevelScript.generated.h"

class USaveComponent;
class UStreamingGroup;

UCLASS(Blueprintable)
class HK_PROJECT_API ALevelScript : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveComponent* m_saveComponent;
    
public:
    ALevelScript();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialise(EChapter _chapter);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnStreamingGroupSaveLoaded(UStreamingGroup* _streamingGroup);
    
};

