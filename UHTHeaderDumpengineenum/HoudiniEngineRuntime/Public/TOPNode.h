#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TOPWorkResult.h"
#include "OutputActorOwner.h"
#include "EPDGNodeState.h"
#include "HoudiniPDGWorkResultObjectBakedOutput.h"
#include "WorkItemTally.h"
#include "AggregatedWorkItemTally.h"
#include "TOPNode.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UTOPNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(NonTransactional, Transient)
    int32 NodeId;
    
    UPROPERTY(NonTransactional)
    FString NodeName;
    
    UPROPERTY(NonTransactional)
    FString NodePath;
    
    UPROPERTY(NonTransactional)
    FString ParentName;
    
    UPROPERTY()
    UObject* WorkResultParent;
    
    UPROPERTY(NonTransactional)
    TArray<FTOPWorkResult> WorkResult;
    
    UPROPERTY()
    bool bHidden;
    
    UPROPERTY()
    bool bAutoLoad;
    
    UPROPERTY(NonTransactional, Transient)
    EPDGNodeState NodeState;
    
    UPROPERTY(NonTransactional)
    bool bCachedHaveNotLoadedWorkResults;
    
    UPROPERTY(NonTransactional)
    bool bCachedHaveLoadedWorkResults;
    
    UPROPERTY(NonTransactional)
    bool bHasChildNodes;
    
    UPROPERTY()
    TSet<FString> ClearedLandscapeLayers;
    
protected:
    UPROPERTY()
    bool bShow;
    
    UPROPERTY()
    TMap<FString, FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;
    
    UPROPERTY(NonTransactional, Transient)
    FWorkItemTally WorkItemTally;
    
    UPROPERTY(NonTransactional, Transient)
    FAggregatedWorkItemTally AggregatedWorkItemTally;
    
    UPROPERTY(NonTransactional, Transient)
    bool bHasReceivedCookCompleteEvent;
    
private:
    UPROPERTY()
    FOutputActorOwner OutputActorOwner;
    
public:
    UTOPNode();
};

