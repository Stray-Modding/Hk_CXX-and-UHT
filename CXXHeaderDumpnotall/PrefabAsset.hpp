#ifndef UE4SS_SDK_PrefabAsset_HPP
#define UE4SS_SDK_PrefabAsset_HPP

#include "PrefabAsset_enums.hpp"

class APrefabActor : public AActor
{
    class UPrefabComponent* PrefabComponent;

    void SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected);
    void SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility);
    class UPrefabAsset* GetPrefab();
    void DestroyPrefabActor(bool bDestroyAttachedChildren);
};

class UPrefabAsset : public UObject
{
    TMap<class FString, class FSoftObjectPath> AssetReferences;
    FSoftObjectPath GeneratedBlueprintAssetReference;
    FGuid PrefabId;
    FString PrefabContent;
    FString PrefabHash;
    int32 NumActors;
    FVector PrefabPivot;

};

class UPrefabVariantAsset : public UPrefabAsset
{
    class UPrefabAsset* Parent;

};

struct FPrefabVariantRule
{
    FName Scope;
    FString Rule;
    TEnumAsByte<EPrefabVariantRuleType> RuleType;
    bool bEnable;

};

class UPrefabComponent : public UPrimitiveComponent
{
    uint8 bConnected;
    uint8 bLockSelection;
    class UPrefabAsset* Prefab;
    class UBlueprint* GeneratedBlueprint;
    TMap<class FName, class AActor*> PrefabInstancesMap;
    TArray<FPrefabVariantRule> VariantRulesOverwrite;
    uint8 bTransient;

};

class UPrefabFunctionLibrary : public UBlueprintFunctionLibrary
{

    class APrefabActor* SpawnPrefab(const class UObject* WorldContextObject, class UPrefabAsset* PrefabAsset, const FTransform& SpawnTransform, TArray<class AActor*>& OutSpawnPrefabInstances, bool bSpawnInstancesOnly, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
};

class UPrefabExporter : public UExporter
{
};

class UPrefabLevelExporter : public UPrefabExporter
{
};

class UPrefabObjectExporterT3D : public UPrefabExporter
{
};

class UPrefabToolSettings : public UObject
{
    bool bReplaceActorsWithCreatedPrefab;
    bool bAutoIncludeAttachedActorsWhenCreateNewPrefab;
    bool bNestedPrefabSupport;
    bool bRestorePrefabActorCollapseStatusAfterPIE;
    bool bCollapseAllPrefabActorsAfterMapOpened;
    bool bMoveActorsInWorldAfterSetPrefabPivot;
    bool bDuplicateNoRevertWithOffset;
    FString NewPrefabNamePattern;
    EPTUITheme UITheme;
    bool bUpdateAllPrefabActorsWhenOpenMap;
    bool bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap;
    bool bUpdateAllPrefabActorsWhenApply;
    bool bApplyToNestedPrefab;
    bool bEnableApplyFromDisconnectedPrefabActor;
    bool bTryQuickApplyFirstWhenApply;
    bool bAutoAddRemoveVariantActorPrefix;
    FString VariantActorPrefix;
    bool bEnablePrefabComponentVisualizer;
    EPrefabVisualizerType PrefabComponentVisualizerType;
    bool bDisplayPrefabComponentVisualizerEvenNotSelected;
    FColor PrefabViewVisualizerColor;
    FColor TargetActorColor;
    FColor UnLockedConnectedColor;
    FColor LockedConnectedColor;
    FColor UnLockedDisConnectedColor;
    FColor LockedDisConnectedColor;
    FColor UnLockedNoPrefabAssignedColor;
    FColor LockedNoPrefabAssignedColor;
    FSoftObjectPath PrefabMaterialPath;
    bool bShadedPrefabViewVisualizer;
    bool bLockPrefabSelectionByDefault;
    bool bDisableLockPrefabSelectionFeature;
    bool bForceApplyPerInstanceVertexColor;
    bool bHideChildActorsInPIEIfHiddenInEditor;
    bool bCanToggleChildActorVisibilityInPIE;
    bool bIgnoreLayersInPrefab;
    bool bSupportGenerateBlueprint;
    bool bHarvestComponentsWhenGeneratingBlueprint;
    bool bUseActorNameAsVariableNameWhenGeneratingBlueprint;
    bool bForceMobilityToMovableWhenGeneratingBlueprint;
    TArray<class TSubclassOf<AActor>> IgnoreActorClassesWhenGeneratingBlueprint;
    TArray<FName> IgnoreActorTagsWhenGeneratingBlueprint;
    bool bFlashPrefabWindowForTargetPrefabActor;
    bool bEnablePrefabTextEditor;
    bool bDebugMode;
    bool bDisableThumbnailRender;
    bool bShowPrefabInstanceTagInPrefabToolWindow;
    bool bSkipActorReferenceReplacement;

};

#endif
