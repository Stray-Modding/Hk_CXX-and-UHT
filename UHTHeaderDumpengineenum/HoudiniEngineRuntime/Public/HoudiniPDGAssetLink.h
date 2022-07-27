#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPDGLinkState.h"
#include "AggregatedWorkItemTally.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "HoudiniPDGAssetLink.generated.h"

class UTOPNetwork;
class AActor;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniPDGAssetLink : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(DuplicateTransient, NonTransactional)
    FString AssetName;
    
    UPROPERTY(DuplicateTransient, NonTransactional)
    FString AssetNodePath;
    
    UPROPERTY(DuplicateTransient, NonTransactional)
    int32 AssetId;
    
    UPROPERTY()
    TArray<UTOPNetwork*> AllTOPNetworks;
    
    UPROPERTY()
    int32 SelectedTOPNetworkIndex;
    
    UPROPERTY(NonTransactional, Transient)
    EPDGLinkState LinkState;
    
    UPROPERTY()
    bool bAutoCook;
    
    UPROPERTY()
    bool bUseTOPNodeFilter;
    
    UPROPERTY()
    bool bUseTOPOutputFilter;
    
    UPROPERTY()
    FString TOPNodeFilter;
    
    UPROPERTY()
    FString TOPOutputFilter;
    
    UPROPERTY(NonTransactional)
    int32 NumWorkitems;
    
    UPROPERTY(NonTransactional, Transient)
    FAggregatedWorkItemTally WorkItemTally;
    
    UPROPERTY()
    FString OutputCachePath;
    
    UPROPERTY(Transient)
    bool bNeedsUIRefresh;
    
    UPROPERTY(EditAnywhere)
    AActor* OutputParentActor;
    
    UPROPERTY()
    FDirectoryPath BakeFolder;
    
    UHoudiniPDGAssetLink();
};

