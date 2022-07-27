#pragma once
#include "CoreMinimal.h"
#include "Blueprint.h"
#include "Interface_PreviewMeshProvider.h"
#include "AnimGroupInfo.h"
#include "AnimBlueprint.generated.h"

class USkeleton;

UCLASS()
class ENGINE_API UAnimBlueprint : public UBlueprint, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, EditAnywhere)
    USkeleton* TargetSkeleton;
    
    UPROPERTY()
    TArray<FAnimGroupInfo> Groups;
    
    UPROPERTY(EditAnywhere)
    bool bUseMultiThreadedAnimationUpdate;
    
    UPROPERTY(EditAnywhere)
    bool bWarnAboutBlueprintUsage;
    
    UAnimBlueprint();
    
    // Fix for true pure virtual functions not being implemented
};

