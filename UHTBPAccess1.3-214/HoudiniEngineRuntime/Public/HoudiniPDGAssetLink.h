#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPDGLinkState.h"
#include "AggregatedWorkItemTally.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "HoudiniPDGAssetLink.generated.h"

class UTOPNetwork;
class AActor;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniPDGAssetLink : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FString AssetName;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FString AssetNodePath;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    int32 AssetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTOPNetwork*> AllTOPNetworks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedTOPNetworkIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    EPDGLinkState LinkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTOPNodeFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTOPOutputFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TOPNodeFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TOPOutputFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    int32 NumWorkitems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    FAggregatedWorkItemTally WorkItemTally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OutputCachePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedsUIRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OutputParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath BakeFolder;
    
    UHoudiniPDGAssetLink();
};

