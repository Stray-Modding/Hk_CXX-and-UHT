#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimClassInterface.h"
#include "BakedAnimationStateMachine.h"
#include "AnimNotifyEvent.h"
#include "GraphAssetPlayerInformation.h"
#include "CachedPoseIndices.h"
#include "AnimBlueprintFunction.h"
#include "AnimBlueprintFunctionData.h"
#include "ExposedValueHandler.h"
#include "AnimGraphBlendOptions.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyAccess -ObjectName=PropertyAccessLibrary -FallbackName=PropertyAccessLibrary
#include "AnimClassData.generated.h"

class USkeleton;

UCLASS()
class ENGINE_API UAnimClassData : public UObject, public IAnimClassInterface {
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
    TArray<FAnimBlueprintFunction> AnimBlueprintFunctions;
    
    UPROPERTY()
    TArray<FAnimBlueprintFunctionData> AnimBlueprintFunctionData;
    
    UPROPERTY()
    TArray<TFieldPath<FStructProperty>> AnimNodeProperties;
    
    UPROPERTY()
    TArray<TFieldPath<FStructProperty>> LinkedAnimGraphNodeProperties;
    
    UPROPERTY()
    TArray<TFieldPath<FStructProperty>> LinkedAnimLayerNodeProperties;
    
    UPROPERTY()
    TArray<TFieldPath<FStructProperty>> PreUpdateNodeProperties;
    
    UPROPERTY()
    TArray<TFieldPath<FStructProperty>> DynamicResetNodeProperties;
    
    UPROPERTY()
    TArray<TFieldPath<FStructProperty>> StateMachineNodeProperties;
    
    UPROPERTY()
    TArray<TFieldPath<FStructProperty>> InitializationNodeProperties;
    
    UPROPERTY()
    TMap<FName, FGraphAssetPlayerInformation> GraphNameAssetPlayers;
    
    UPROPERTY()
    TArray<FName> SyncGroupNames;
    
    UPROPERTY()
    TArray<FExposedValueHandler> EvaluateGraphExposedInputs;
    
    UPROPERTY()
    TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions;
    
    UPROPERTY()
    FPropertyAccessLibrary PropertyAccessLibrary;
    
    UAnimClassData();
    
    // Fix for true pure virtual functions not being implemented
};

