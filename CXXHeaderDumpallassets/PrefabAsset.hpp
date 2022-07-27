#ifndef UE4SS_SDK_PrefabAsset_HPP
#define UE4SS_SDK_PrefabAsset_HPP

#include "PrefabAsset_enums.hpp"

class APrefabActor : public AActor
{
    class UPrefabComponent* PrefabComponent;                                          // 0x0228 (size: 0x8)

    void SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected);
    void SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility);
    class UPrefabAsset* GetPrefab();
    void DestroyPrefabActor(bool bDestroyAttachedChildren);
}; // Size: 0x230

class UPrefabAsset : public UObject
{
    TMap<class FString, class FSoftObjectPath> AssetReferences;                       // 0x0028 (size: 0x50)
    FSoftObjectPath GeneratedBlueprintAssetReference;                                 // 0x0078 (size: 0x18)
    FGuid PrefabId;                                                                   // 0x0090 (size: 0x10)
    FString PrefabContent;                                                            // 0x00A0 (size: 0x10)
    FString PrefabHash;                                                               // 0x00B0 (size: 0x10)
    int32 NumActors;                                                                  // 0x00C0 (size: 0x4)
    FVector PrefabPivot;                                                              // 0x00C4 (size: 0xC)

}; // Size: 0xD0

class UPrefabVariantAsset : public UPrefabAsset
{
    class UPrefabAsset* Parent;                                                       // 0x00D0 (size: 0x8)

}; // Size: 0xD8

struct FPrefabVariantRule
{
    FName Scope;                                                                      // 0x0000 (size: 0x8)
    FString Rule;                                                                     // 0x0008 (size: 0x10)
    TEnumAsByte<EPrefabVariantRuleType> RuleType;                                     // 0x0018 (size: 0x1)
    bool bEnable;                                                                     // 0x0019 (size: 0x1)

}; // Size: 0x20

class UPrefabComponent : public UPrimitiveComponent
{
    uint8 bConnected;                                                                 // 0x0450 (size: 0x1)
    uint8 bLockSelection;                                                             // 0x0450 (size: 0x1)
    class UPrefabAsset* Prefab;                                                       // 0x0458 (size: 0x8)
    class UBlueprint* GeneratedBlueprint;                                             // 0x0460 (size: 0x8)
    TMap<class FName, class AActor*> PrefabInstancesMap;                              // 0x0468 (size: 0x50)
    TArray<FPrefabVariantRule> VariantRulesOverwrite;                                 // 0x04B8 (size: 0x10)
    uint8 bTransient;                                                                 // 0x04C8 (size: 0x1)

}; // Size: 0x4D0

class UPrefabFunctionLibrary : public UBlueprintFunctionLibrary
{

    class APrefabActor* SpawnPrefab(const class UObject* WorldContextObject, class UPrefabAsset* PrefabAsset, const FTransform& SpawnTransform, TArray<class AActor*>& OutSpawnPrefabInstances, bool bSpawnInstancesOnly, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
}; // Size: 0x28

class UPrefabExporter : public UExporter
{
}; // Size: 0x78

class UPrefabLevelExporter : public UPrefabExporter
{
}; // Size: 0x88

class UPrefabObjectExporterT3D : public UPrefabExporter
{
}; // Size: 0x78

class UPrefabToolSettings : public UObject
{
    bool bReplaceActorsWithCreatedPrefab;                                             // 0x0028 (size: 0x1)
    bool bAutoIncludeAttachedActorsWhenCreateNewPrefab;                               // 0x0029 (size: 0x1)
    bool bNestedPrefabSupport;                                                        // 0x002A (size: 0x1)
    bool bRestorePrefabActorCollapseStatusAfterPIE;                                   // 0x002B (size: 0x1)
    bool bCollapseAllPrefabActorsAfterMapOpened;                                      // 0x002C (size: 0x1)
    bool bMoveActorsInWorldAfterSetPrefabPivot;                                       // 0x002D (size: 0x1)
    bool bDuplicateNoRevertWithOffset;                                                // 0x002E (size: 0x1)
    FString NewPrefabNamePattern;                                                     // 0x0030 (size: 0x10)
    EPTUITheme UITheme;                                                               // 0x0040 (size: 0x4)
    bool bUpdateAllPrefabActorsWhenOpenMap;                                           // 0x0044 (size: 0x1)
    bool bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap;                    // 0x0045 (size: 0x1)
    bool bUpdateAllPrefabActorsWhenApply;                                             // 0x0046 (size: 0x1)
    bool bApplyToNestedPrefab;                                                        // 0x0047 (size: 0x1)
    bool bEnableApplyFromDisconnectedPrefabActor;                                     // 0x0048 (size: 0x1)
    bool bTryQuickApplyFirstWhenApply;                                                // 0x0049 (size: 0x1)
    bool bAutoAddRemoveVariantActorPrefix;                                            // 0x004A (size: 0x1)
    FString VariantActorPrefix;                                                       // 0x0050 (size: 0x10)
    bool bEnablePrefabComponentVisualizer;                                            // 0x0060 (size: 0x1)
    EPrefabVisualizerType PrefabComponentVisualizerType;                              // 0x0061 (size: 0x1)
    bool bDisplayPrefabComponentVisualizerEvenNotSelected;                            // 0x0062 (size: 0x1)
    FColor PrefabViewVisualizerColor;                                                 // 0x0064 (size: 0x4)
    FColor TargetActorColor;                                                          // 0x0068 (size: 0x4)
    FColor UnLockedConnectedColor;                                                    // 0x006C (size: 0x4)
    FColor LockedConnectedColor;                                                      // 0x0070 (size: 0x4)
    FColor UnLockedDisConnectedColor;                                                 // 0x0074 (size: 0x4)
    FColor LockedDisConnectedColor;                                                   // 0x0078 (size: 0x4)
    FColor UnLockedNoPrefabAssignedColor;                                             // 0x007C (size: 0x4)
    FColor LockedNoPrefabAssignedColor;                                               // 0x0080 (size: 0x4)
    FSoftObjectPath PrefabMaterialPath;                                               // 0x0088 (size: 0x18)
    bool bShadedPrefabViewVisualizer;                                                 // 0x00C8 (size: 0x1)
    bool bLockPrefabSelectionByDefault;                                               // 0x00C9 (size: 0x1)
    bool bDisableLockPrefabSelectionFeature;                                          // 0x00CA (size: 0x1)
    bool bForceApplyPerInstanceVertexColor;                                           // 0x00CB (size: 0x1)
    bool bHideChildActorsInPIEIfHiddenInEditor;                                       // 0x00CC (size: 0x1)
    bool bCanToggleChildActorVisibilityInPIE;                                         // 0x00CD (size: 0x1)
    bool bIgnoreLayersInPrefab;                                                       // 0x00CF (size: 0x1)
    bool bSupportGenerateBlueprint;                                                   // 0x00D0 (size: 0x1)
    bool bHarvestComponentsWhenGeneratingBlueprint;                                   // 0x00D1 (size: 0x1)
    bool bUseActorNameAsVariableNameWhenGeneratingBlueprint;                          // 0x00D2 (size: 0x1)
    bool bForceMobilityToMovableWhenGeneratingBlueprint;                              // 0x00D3 (size: 0x1)
    TArray<class TSubclassOf<AActor>> IgnoreActorClassesWhenGeneratingBlueprint;      // 0x00D8 (size: 0x10)
    TArray<FName> IgnoreActorTagsWhenGeneratingBlueprint;                             // 0x00E8 (size: 0x10)
    bool bFlashPrefabWindowForTargetPrefabActor;                                      // 0x00F8 (size: 0x1)
    bool bEnablePrefabTextEditor;                                                     // 0x00F9 (size: 0x1)
    bool bDebugMode;                                                                  // 0x00FA (size: 0x1)
    bool bDisableThumbnailRender;                                                     // 0x00FB (size: 0x1)
    bool bShowPrefabInstanceTagInPrefabToolWindow;                                    // 0x00FC (size: 0x1)
    bool bSkipActorReferenceReplacement;                                              // 0x00FD (size: 0x1)

}; // Size: 0x100

#endif
