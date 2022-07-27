#pragma once
#include "CoreMinimal.h"
#include "BlueprintGeneratedClass.h"
#include "AnimClassInterface.h"
#include "BakedAnimationStateMachine.h"
#include "AnimNotifyEvent.h"
#include "CachedPoseIndices.h"
#include "GraphAssetPlayerInformation.h"
#include "ExposedValueHandler.h"
#include "AnimGraphBlendOptions.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyAccess -ObjectName=PropertyAccessLibrary -FallbackName=PropertyAccessLibrary
#include "AnimBlueprintGeneratedClass.generated.h"

class USkeleton;

UCLASS()
class ENGINE_API UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass, public IAnimClassInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBakedAnimationStateMachine> BakedStateMachines;
    
    UPROPERTY()
    USkeleton* TargetSkeleton;
    
    UPROPERTY()
    TArray<FAnimNotifyEvent> AnimNotifies;
    
    UPROPERTY()
    TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap;
    
    UPROPERTY()
    TArray<FName> SyncGroupNames;
    
    UPROPERTY()
    TArray<FExposedValueHandler> EvaluateGraphExposedInputs;
    
    UPROPERTY()
    TMap<FName, FGraphAssetPlayerInformation> GraphAssetPlayerInformation;
    
    UPROPERTY()
    TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions;
    
private:
    UPROPERTY()
    FPropertyAccessLibrary PropertyAccessLibrary;
    
public:
    UAnimBlueprintGeneratedClass();
    
    // Fix for true pure virtual functions not being implemented
};

