#ifndef UE4SS_SDK_HoudiniEngineRuntime_HPP
#define UE4SS_SDK_HoudiniEngineRuntime_HPP

#include "HoudiniEngineRuntime_enums.hpp"

class UHoudiniAsset : public UObject
{
    FString AssetFileName;                                                            // 0x0028 (size: 0x10)
    TArray<uint8> AssetBytes;                                                         // 0x0038 (size: 0x10)
    uint32 AssetBytesCount;                                                           // 0x0048 (size: 0x4)
    bool bAssetLimitedCommercial;                                                     // 0x004C (size: 0x1)
    bool bAssetNonCommercial;                                                         // 0x004D (size: 0x1)
    bool bAssetExpanded;                                                              // 0x004E (size: 0x1)

}; // Size: 0x50

class AHoudiniAssetActor : public AActor
{
    class UHoudiniAssetComponent* HoudiniAssetComponent;                              // 0x0228 (size: 0x8)

}; // Size: 0x230

struct FHoudiniStaticMeshGenerationProperties
{
    uint8 bGeneratedDoubleSidedGeometry;                                              // 0x0000 (size: 0x1)
    class UPhysicalMaterial* GeneratedPhysMaterial;                                   // 0x0008 (size: 0x8)
    FBodyInstance DefaultBodyInstance;                                                // 0x0010 (size: 0x158)
    TEnumAsByte<ECollisionTraceFlag> GeneratedCollisionTraceFlag;                     // 0x0168 (size: 0x1)
    int32 GeneratedLightMapResolution;                                                // 0x016C (size: 0x4)
    FWalkableSlopeOverride GeneratedWalkableSlopeOverride;                            // 0x0170 (size: 0x10)
    int32 GeneratedLightMapCoordinateIndex;                                           // 0x0180 (size: 0x4)
    uint8 bGeneratedUseMaximumStreamingTexelRatio;                                    // 0x0184 (size: 0x1)
    float GeneratedStreamingDistanceMultiplier;                                       // 0x0188 (size: 0x4)
    class UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings;          // 0x0190 (size: 0x8)
    TArray<class UAssetUserData*> GeneratedAssetUserData;                             // 0x0198 (size: 0x10)

}; // Size: 0x1A8

struct FHoudiniBakedOutputObjectIdentifier
{
    int32 PartId;                                                                     // 0x0000 (size: 0x4)
    FString SplitIdentifier;                                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FHoudiniBakedOutputObject
{
    FString Actor;                                                                    // 0x0000 (size: 0x10)
    FString Blueprint;                                                                // 0x0010 (size: 0x10)
    FName ActorBakeName;                                                              // 0x0020 (size: 0x8)
    FString BakedObject;                                                              // 0x0028 (size: 0x10)
    FString BakedComponent;                                                           // 0x0038 (size: 0x10)
    TArray<FString> InstancedActors;                                                  // 0x0048 (size: 0x10)
    TArray<FString> InstancedComponents;                                              // 0x0058 (size: 0x10)
    TMap<class FName, class FString> LandscapeLayers;                                 // 0x0068 (size: 0x50)

}; // Size: 0xB8

struct FHoudiniBakedOutput
{
    TMap<class FHoudiniBakedOutputObjectIdentifier, class FHoudiniBakedOutputObject> BakedOutputObjects; // 0x0000 (size: 0x50)

}; // Size: 0x50

class UHoudiniAssetComponent : public UPrimitiveComponent
{
    class UHoudiniAsset* HoudiniAsset;                                                // 0x0458 (size: 0x8)
    bool bCookOnParameterChange;                                                      // 0x0460 (size: 0x1)
    bool bUploadTransformsToHoudiniEngine;                                            // 0x0461 (size: 0x1)
    bool bCookOnTransformChange;                                                      // 0x0462 (size: 0x1)
    bool bCookOnAssetInputCook;                                                       // 0x0463 (size: 0x1)
    bool bOutputless;                                                                 // 0x0464 (size: 0x1)
    bool bOutputTemplateGeos;                                                         // 0x0465 (size: 0x1)
    bool bUseOutputNodes;                                                             // 0x0466 (size: 0x1)
    FDirectoryPath TemporaryCookFolder;                                               // 0x0468 (size: 0x10)
    FDirectoryPath BakeFolder;                                                        // 0x0478 (size: 0x10)
    EHoudiniStaticMeshMethod StaticMeshMethod;                                        // 0x0488 (size: 0x1)
    FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties;            // 0x0490 (size: 0x1A8)
    FMeshBuildSettings StaticMeshBuildSettings;                                       // 0x0638 (size: 0x30)
    bool bOverrideGlobalProxyStaticMeshSettings;                                      // 0x0668 (size: 0x1)
    bool bEnableProxyStaticMeshOverride;                                              // 0x0669 (size: 0x1)
    bool bEnableProxyStaticMeshRefinementByTimerOverride;                             // 0x066A (size: 0x1)
    float ProxyMeshAutoRefineTimeoutSecondsOverride;                                  // 0x066C (size: 0x4)
    bool bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;                      // 0x0670 (size: 0x1)
    bool bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;                       // 0x0671 (size: 0x1)
    int32 AssetId;                                                                    // 0x0674 (size: 0x4)
    TArray<int32> NodeIdsToCook;                                                      // 0x0678 (size: 0x10)
    TMap<int32, int32> OutputNodeCookCounts;                                          // 0x0688 (size: 0x50)
    TSet<UHoudiniAssetComponent*> DownstreamHoudiniAssets;                            // 0x06D8 (size: 0x50)
    FGuid ComponentGUID;                                                              // 0x0728 (size: 0x10)
    FGuid HapiGUID;                                                                   // 0x0738 (size: 0x10)
    FString HapiAssetName;                                                            // 0x0748 (size: 0x10)
    EHoudiniAssetState AssetState;                                                    // 0x0758 (size: 0x1)
    EHoudiniAssetState DebugLastAssetState;                                           // 0x0759 (size: 0x1)
    EHoudiniAssetStateResult AssetStateResult;                                        // 0x075A (size: 0x1)
    uint32 SubAssetIndex;                                                             // 0x075C (size: 0x4)
    int32 AssetCookCount;                                                             // 0x0760 (size: 0x4)
    bool bHasBeenLoaded;                                                              // 0x0764 (size: 0x1)
    bool bHasBeenDuplicated;                                                          // 0x0765 (size: 0x1)
    bool bPendingDelete;                                                              // 0x0766 (size: 0x1)
    bool bRecookRequested;                                                            // 0x0767 (size: 0x1)
    bool bRebuildRequested;                                                           // 0x0768 (size: 0x1)
    bool bEnableCooking;                                                              // 0x0769 (size: 0x1)
    bool bForceNeedUpdate;                                                            // 0x076A (size: 0x1)
    bool bLastCookSuccess;                                                            // 0x076B (size: 0x1)
    bool bParameterDefinitionUpdateNeeded;                                            // 0x076C (size: 0x1)
    bool bBlueprintStructureModified;                                                 // 0x076D (size: 0x1)
    bool bBlueprintModified;                                                          // 0x076E (size: 0x1)
    TArray<class UHoudiniParameter*> Parameters;                                      // 0x0770 (size: 0x10)
    TArray<class UHoudiniInput*> Inputs;                                              // 0x0780 (size: 0x10)
    TArray<class UHoudiniOutput*> Outputs;                                            // 0x0790 (size: 0x10)
    TArray<FHoudiniBakedOutput> BakedOutputs;                                         // 0x07A0 (size: 0x10)
    TArray<TWeakObjectPtr<AActor>> UntrackedOutputs;                                  // 0x07B0 (size: 0x10)
    TArray<class UHoudiniHandleComponent*> HandleComponents;                          // 0x07C0 (size: 0x10)
    bool bHasComponentTransformChanged;                                               // 0x07D0 (size: 0x1)
    bool bFullyLoaded;                                                                // 0x07D1 (size: 0x1)
    class UHoudiniPDGAssetLink* PDGAssetLink;                                         // 0x07D8 (size: 0x8)
    FTimerHandle RefineMeshesTimer;                                                   // 0x07E0 (size: 0x8)
    bool bNoProxyMeshNextCookRequested;                                               // 0x0800 (size: 0x1)
    TMap<UObject*, int32> InputPresets;                                               // 0x0808 (size: 0x50)
    bool bBakeAfterNextCook;                                                          // 0x0858 (size: 0x1)
    bool bCachedIsPreview;                                                            // 0x08B8 (size: 0x1)
    double LastTickTime;                                                              // 0x08C8 (size: 0x8)

}; // Size: 0x8F0

struct FHoudiniOutputObjectIdentifier
{
    int32 ObjectId;                                                                   // 0x0000 (size: 0x4)
    int32 GeoId;                                                                      // 0x0004 (size: 0x4)
    int32 PartId;                                                                     // 0x0008 (size: 0x4)
    FString SplitIdentifier;                                                          // 0x0010 (size: 0x10)
    FString PartName;                                                                 // 0x0020 (size: 0x10)
    int32 PrimitiveIndex;                                                             // 0x0030 (size: 0x4)
    int32 PointIndex;                                                                 // 0x0034 (size: 0x4)

}; // Size: 0x40

class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{
    bool FauxBPProperty;                                                              // 0x0930 (size: 0x1)
    bool bHoudiniAssetChanged;                                                        // 0x0931 (size: 0x1)
    bool bUpdatedFromTemplate;                                                        // 0x0932 (size: 0x1)
    bool bIsInBlueprintEditor;                                                        // 0x0933 (size: 0x1)
    bool bCanDeleteHoudiniNodes;                                                      // 0x0934 (size: 0x1)
    bool bHasRegisteredComponentTemplate;                                             // 0x0935 (size: 0x1)
    TMap<class FHoudiniOutputObjectIdentifier, class FGuid> CachedOutputNodes;        // 0x0940 (size: 0x50)
    TMap<class FGuid, class FGuid> CachedInputNodes;                                  // 0x0990 (size: 0x50)

    void SetToggleValueAt(FString Name, bool Value, int32 Index);
    void SetFloatParameter(FString Name, float Value, int32 Index);
    bool HasParameter(FString Name);
}; // Size: 0x9E0

class UHoudiniAssetParameter : public UObject
{
}; // Size: 0x80

class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{
}; // Size: 0x80

class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{
}; // Size: 0xB8

class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{
}; // Size: 0x90

class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{
}; // Size: 0xA8

class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{
}; // Size: 0xB8

class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{
}; // Size: 0x80

class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{
}; // Size: 0x80

class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{
}; // Size: 0xB0

class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{
}; // Size: 0x80

class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{
}; // Size: 0x88

class UHoudiniAssetParameterRamp : public UHoudiniAssetParameter
{
}; // Size: 0x98

class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{
}; // Size: 0x80

class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{
}; // Size: 0x90

class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{
}; // Size: 0x90

class UHoudiniAssetComponentMaterials_V1 : public UObject
{
}; // Size: 0xC8

class UHoudiniHandleComponent_V1 : public USceneComponent
{
}; // Size: 0x290

class UHoudiniSplineComponent_V1 : public USceneComponent
{
}; // Size: 0x2F0

class UHoudiniAssetInput : public UHoudiniAssetParameter
{
}; // Size: 0x1A0

class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{
}; // Size: 0x160

class UHoudiniAssetInstanceInputField : public UObject
{
}; // Size: 0x190

class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
{
    uint8 bGeneratedDoubleSidedGeometry;                                              // 0x0450 (size: 0x1)
    class UPhysicalMaterial* GeneratedPhysMaterial;                                   // 0x0458 (size: 0x8)
    FBodyInstance DefaultBodyInstance;                                                // 0x0460 (size: 0x158)
    TEnumAsByte<ECollisionTraceFlag> GeneratedCollisionTraceFlag;                     // 0x05B8 (size: 0x1)
    int32 GeneratedLightMapResolution;                                                // 0x05BC (size: 0x4)
    float GeneratedDistanceFieldResolutionScale;                                      // 0x05C0 (size: 0x4)
    FWalkableSlopeOverride GeneratedWalkableSlopeOverride;                            // 0x05C4 (size: 0x10)
    int32 GeneratedLightMapCoordinateIndex;                                           // 0x05D4 (size: 0x4)
    uint8 bGeneratedUseMaximumStreamingTexelRatio;                                    // 0x05D8 (size: 0x1)
    float GeneratedStreamingDistanceMultiplier;                                       // 0x05DC (size: 0x4)
    class UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings;          // 0x05E0 (size: 0x8)
    TArray<class UAssetUserData*> GeneratedAssetUserData;                             // 0x05E8 (size: 0x10)
    FText BakeFolder;                                                                 // 0x05F8 (size: 0x18)
    FText TempCookFolder;                                                             // 0x0610 (size: 0x18)

}; // Size: 0x970

class UHoudiniInstancedActorComponent_V1 : public USceneComponent
{
}; // Size: 0x210

class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent
{
}; // Size: 0x220

class IHoudiniEngineCopyPropertiesInterface : public IInterface
{
}; // Size: 0x28

class UHoudiniHandleParameter : public UObject
{
    class UHoudiniParameter* AssetParameter;                                          // 0x0028 (size: 0x8)
    int32 TupleIndex;                                                                 // 0x0030 (size: 0x4)

}; // Size: 0x38

class UHoudiniHandleComponent : public USceneComponent
{
    TArray<class UHoudiniHandleParameter*> XformParms;                                // 0x01F8 (size: 0x10)
    class UHoudiniHandleParameter* RSTParm;                                           // 0x0208 (size: 0x8)
    class UHoudiniHandleParameter* RotOrderParm;                                      // 0x0210 (size: 0x8)
    EHoudiniHandleType HandleType;                                                    // 0x0218 (size: 0x1)
    FString HandleName;                                                               // 0x0220 (size: 0x10)

}; // Size: 0x230

class UHoudiniInput : public UObject
{
    FString Name;                                                                     // 0x0028 (size: 0x10)
    FString Label;                                                                    // 0x0038 (size: 0x10)
    EHoudiniInputType Type;                                                           // 0x0048 (size: 0x1)
    EHoudiniInputType PreviousType;                                                   // 0x0049 (size: 0x1)
    int32 AssetNodeId;                                                                // 0x004C (size: 0x4)
    int32 InputNodeId;                                                                // 0x0050 (size: 0x4)
    int32 InputIndex;                                                                 // 0x0054 (size: 0x4)
    int32 ParmId;                                                                     // 0x0058 (size: 0x4)
    bool bIsObjectPathParameter;                                                      // 0x005C (size: 0x1)
    TArray<int32> CreatedDataNodeIds;                                                 // 0x0060 (size: 0x10)
    bool bHasChanged;                                                                 // 0x0070 (size: 0x1)
    bool bNeedsToTriggerUpdate;                                                       // 0x0071 (size: 0x1)
    FString Help;                                                                     // 0x0078 (size: 0x10)
    EHoudiniXformType KeepWorldTransform;                                             // 0x0088 (size: 0x1)
    bool bPackBeforeMerge;                                                            // 0x0089 (size: 0x1)
    bool bImportAsReference;                                                          // 0x008A (size: 0x1)
    bool bImportAsReferenceRotScaleEnabled;                                           // 0x008B (size: 0x1)
    bool bExportLODs;                                                                 // 0x008C (size: 0x1)
    bool bExportSockets;                                                              // 0x008D (size: 0x1)
    bool bExportColliders;                                                            // 0x008E (size: 0x1)
    bool bCookOnCurveChanged;                                                         // 0x008F (size: 0x1)
    TArray<class UHoudiniInputObject*> GeometryInputObjects;                          // 0x0090 (size: 0x10)
    bool bStaticMeshChanged;                                                          // 0x00A0 (size: 0x1)
    TArray<class UHoudiniInputObject*> AssetInputObjects;                             // 0x00A8 (size: 0x10)
    bool bInputAssetConnectedInHoudini;                                               // 0x00B8 (size: 0x1)
    TArray<class UHoudiniInputObject*> CurveInputObjects;                             // 0x00C0 (size: 0x10)
    float DefaultCurveOffset;                                                         // 0x00D0 (size: 0x4)
    bool bAddRotAndScaleAttributesOnCurves;                                           // 0x00D4 (size: 0x1)
    bool bUseLegacyInputCurves;                                                       // 0x00D5 (size: 0x1)
    TArray<class UHoudiniInputObject*> LandscapeInputObjects;                         // 0x00D8 (size: 0x10)
    bool bLandscapeHasExportTypeChanged;                                              // 0x00E8 (size: 0x1)
    TArray<class UHoudiniInputObject*> WorldInputObjects;                             // 0x00F0 (size: 0x10)
    TArray<class AActor*> WorldInputBoundSelectorObjects;                             // 0x0100 (size: 0x10)
    bool bIsWorldInputBoundSelector;                                                  // 0x0110 (size: 0x1)
    bool bWorldInputBoundSelectorAutoUpdate;                                          // 0x0111 (size: 0x1)
    float UnrealSplineResolution;                                                     // 0x0114 (size: 0x4)
    TArray<class UHoudiniInputObject*> SkeletalInputObjects;                          // 0x0118 (size: 0x10)
    TArray<class UHoudiniInputObject*> GeometryCollectionInputObjects;                // 0x0128 (size: 0x10)
    TSet<ULandscapeComponent*> LandscapeSelectedComponents;                           // 0x0138 (size: 0x50)
    TSet<int32> InputNodesPendingDelete;                                              // 0x0188 (size: 0x50)
    TArray<class UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;            // 0x01D8 (size: 0x10)
    TArray<class UHoudiniInputObject*> LastUndoDeletedInputs;                         // 0x01E8 (size: 0x10)
    bool bUpdateInputLandscape;                                                       // 0x01F8 (size: 0x1)
    EHoudiniLandscapeExportType LandscapeExportType;                                  // 0x01F9 (size: 0x1)
    bool bLandscapeExportSelectionOnly;                                               // 0x01FA (size: 0x1)
    bool bLandscapeAutoSelectComponent;                                               // 0x01FB (size: 0x1)
    bool bLandscapeExportMaterials;                                                   // 0x01FC (size: 0x1)
    bool bLandscapeExportLighting;                                                    // 0x01FD (size: 0x1)
    bool bLandscapeExportNormalizedUVs;                                               // 0x01FE (size: 0x1)
    bool bLandscapeExportTileUVs;                                                     // 0x01FF (size: 0x1)
    bool bCanDeleteHoudiniNodes;                                                      // 0x0200 (size: 0x1)

}; // Size: 0x208

class UHoudiniInputObject : public UObject
{
    TSoftObjectPtr<UObject> InputObject;                                              // 0x0028 (size: 0x28)
    FTransform Transform;                                                             // 0x0050 (size: 0x30)
    EHoudiniInputObjectType Type;                                                     // 0x0080 (size: 0x1)
    int32 InputNodeId;                                                                // 0x0084 (size: 0x4)
    int32 InputObjectNodeId;                                                          // 0x0088 (size: 0x4)
    FGuid Guid;                                                                       // 0x008C (size: 0x10)
    bool bHasChanged;                                                                 // 0x009C (size: 0x1)
    bool bNeedsToTriggerUpdate;                                                       // 0x009D (size: 0x1)
    bool bTransformChanged;                                                           // 0x009E (size: 0x1)
    bool bImportAsReference;                                                          // 0x009F (size: 0x1)
    bool bImportAsReferenceRotScaleEnabled;                                           // 0x00A0 (size: 0x1)
    bool bCanDeleteHoudiniNodes;                                                      // 0x00A1 (size: 0x1)

}; // Size: 0xB0

class UHoudiniInputStaticMesh : public UHoudiniInputObject
{
    TArray<class UHoudiniInputStaticMesh*> BlueprintStaticMeshes;                     // 0x00A8 (size: 0x10)

}; // Size: 0xC0

class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{
}; // Size: 0xB0

class UHoudiniInputGeometryCollection : public UHoudiniInputObject
{
}; // Size: 0xB0

class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputObject
{
}; // Size: 0xB0

class UHoudiniInputGeometryCollectionActor : public UHoudiniInputObject
{
}; // Size: 0xB0

class UHoudiniInputSceneComponent : public UHoudiniInputObject
{
    FTransform ActorTransform;                                                        // 0x00B0 (size: 0x30)

}; // Size: 0xE0

class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{
    TSoftObjectPtr<UStaticMesh> StaticMesh;                                           // 0x00E0 (size: 0x28)
    TArray<FString> MeshComponentsMaterials;                                          // 0x0108 (size: 0x10)

}; // Size: 0x120

class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{
    TArray<FTransform> InstanceTransforms;                                            // 0x0118 (size: 0x10)

}; // Size: 0x130

class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{
    int32 NumberOfSplineControlPoints;                                                // 0x00E0 (size: 0x4)
    float SplineLength;                                                               // 0x00E4 (size: 0x4)
    float SplineResolution;                                                           // 0x00E8 (size: 0x4)
    bool SplineClosed;                                                                // 0x00EC (size: 0x1)
    TArray<FTransform> SplineControlPoints;                                           // 0x00F0 (size: 0x10)

}; // Size: 0x100

class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{
    EHoudiniCurveType CurveType;                                                      // 0x00A8 (size: 0x1)
    EHoudiniCurveMethod CurveMethod;                                                  // 0x00A9 (size: 0x1)
    bool Reversed;                                                                    // 0x00AA (size: 0x1)
    class UHoudiniSplineComponent* CachedComponent;                                   // 0x00B0 (size: 0x8)

}; // Size: 0xC0

class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{
    float FOV;                                                                        // 0x00E0 (size: 0x4)
    float AspectRatio;                                                                // 0x00E4 (size: 0x4)
    bool bIsOrthographic;                                                             // 0x00E8 (size: 0x1)
    float OrthoWidth;                                                                 // 0x00EC (size: 0x4)
    float OrthoNearClipPlane;                                                         // 0x00F0 (size: 0x4)
    float OrthoFarClipPlane;                                                          // 0x00F4 (size: 0x4)

}; // Size: 0x100

class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{
    int32 AssetOutputIndex;                                                           // 0x00A8 (size: 0x4)

}; // Size: 0xB0

class UHoudiniInputActor : public UHoudiniInputObject
{
    TArray<class UHoudiniInputSceneComponent*> ActorComponents;                       // 0x00A8 (size: 0x10)
    TSet<TSoftObjectPtr<UObject>> ActorSceneComponents;                               // 0x00B8 (size: 0x50)
    int32 LastUpdateNumComponentsAdded;                                               // 0x0108 (size: 0x4)
    int32 LastUpdateNumComponentsRemoved;                                             // 0x010C (size: 0x4)

}; // Size: 0x110

class UHoudiniInputLandscape : public UHoudiniInputActor
{
    FTransform CachedInputLandscapeTraqnsform;                                        // 0x0110 (size: 0x30)

}; // Size: 0x140

struct FHoudiniBrushInfo
{
    TWeakObjectPtr<class ABrush> BrushActor;                                          // 0x0000 (size: 0x8)
    FTransform CachedTransform;                                                       // 0x0010 (size: 0x30)
    FVector CachedOrigin;                                                             // 0x0040 (size: 0xC)
    FVector CachedExtent;                                                             // 0x004C (size: 0xC)
    TEnumAsByte<EBrushType> CachedBrushType;                                          // 0x0058 (size: 0x1)
    uint64 CachedSurfaceHash;                                                         // 0x0060 (size: 0x8)

}; // Size: 0x70

class UHoudiniInputBrush : public UHoudiniInputActor
{
    TArray<FHoudiniBrushInfo> BrushesInfo;                                            // 0x0110 (size: 0x10)
    class UModel* CombinedModel;                                                      // 0x0120 (size: 0x8)
    bool bIgnoreInputObject;                                                          // 0x0128 (size: 0x1)
    TEnumAsByte<EBrushType> CachedInputBrushType;                                     // 0x0129 (size: 0x1)

}; // Size: 0x130

class UHoudiniInputDataTable : public UHoudiniInputObject
{
}; // Size: 0xB0

class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
{
}; // Size: 0xC0

class UHoudiniInstancedActorComponent : public USceneComponent
{
    class UObject* InstancedObject;                                                   // 0x01F8 (size: 0x8)
    TArray<class AActor*> InstancedActors;                                            // 0x0200 (size: 0x10)

}; // Size: 0x210

class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{
    TArray<class UStaticMeshComponent*> Instances;                                    // 0x01F8 (size: 0x10)
    TArray<class UMaterialInterface*> OverrideMaterials;                              // 0x0208 (size: 0x10)
    class UStaticMesh* InstancedMesh;                                                 // 0x0218 (size: 0x8)

}; // Size: 0x220

class UHoudiniLandscapePtr : public UObject
{
    TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;                                 // 0x0028 (size: 0x28)
    EHoudiniLandscapeOutputBakeType BakeType;                                         // 0x0050 (size: 0x1)
    FName EditLayerName;                                                              // 0x0054 (size: 0x8)

}; // Size: 0x60

class UHoudiniLandscapeEditLayer : public UObject
{
    TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;                                 // 0x0028 (size: 0x28)
    FString LayerName;                                                                // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FHoudiniMeshSocket
{
}; // Size: 0x60

struct FHoudiniGeoPartObject
{
    int32 AssetId;                                                                    // 0x0000 (size: 0x4)
    FString AssetName;                                                                // 0x0008 (size: 0x10)
    int32 ObjectId;                                                                   // 0x0018 (size: 0x4)
    FString ObjectName;                                                               // 0x0020 (size: 0x10)
    int32 GeoId;                                                                      // 0x0030 (size: 0x4)
    int32 PartId;                                                                     // 0x0034 (size: 0x4)
    FString PartName;                                                                 // 0x0038 (size: 0x10)
    bool bHasCustomPartName;                                                          // 0x0048 (size: 0x1)
    TArray<FString> SplitGroups;                                                      // 0x0050 (size: 0x10)
    FTransform TransformMatrix;                                                       // 0x0060 (size: 0x30)
    FString NodePath;                                                                 // 0x0090 (size: 0x10)
    EHoudiniPartType Type;                                                            // 0x00A0 (size: 0x1)
    EHoudiniInstancerType InstancerType;                                              // 0x00A1 (size: 0x1)
    FString VolumeName;                                                               // 0x00A8 (size: 0x10)
    bool bHasEditLayers;                                                              // 0x00B8 (size: 0x1)
    FString VolumeLayerName;                                                          // 0x00C0 (size: 0x10)
    int32 VolumeTileIndex;                                                            // 0x00D0 (size: 0x4)
    bool bIsVisible;                                                                  // 0x00D4 (size: 0x1)
    bool bIsEditable;                                                                 // 0x00D5 (size: 0x1)
    bool bIsTemplated;                                                                // 0x00D6 (size: 0x1)
    bool bIsInstanced;                                                                // 0x00D7 (size: 0x1)
    bool bHasGeoChanged;                                                              // 0x00D8 (size: 0x1)
    bool bHasPartChanged;                                                             // 0x00D9 (size: 0x1)
    bool bHasTransformChanged;                                                        // 0x00DA (size: 0x1)
    bool bHasMaterialsChanged;                                                        // 0x00DB (size: 0x1)
    TArray<FHoudiniMeshSocket> AllMeshSockets;                                        // 0x0220 (size: 0x10)

}; // Size: 0x230

struct FHoudiniCurveOutputProperties
{
    EHoudiniCurveOutputType CurveOutputType;                                          // 0x0000 (size: 0x1)
    int32 NumPoints;                                                                  // 0x0004 (size: 0x4)
    bool bClosed;                                                                     // 0x0008 (size: 0x1)
    EHoudiniCurveType CurveType;                                                      // 0x0009 (size: 0x1)
    EHoudiniCurveMethod CurveMethod;                                                  // 0x000A (size: 0x1)

}; // Size: 0xC

struct FHoudiniOutputObject
{
    class UObject* OutputObject;                                                      // 0x0000 (size: 0x8)
    class UObject* OutputComponent;                                                   // 0x0008 (size: 0x8)
    class UObject* ProxyObject;                                                       // 0x0010 (size: 0x8)
    class UObject* ProxyComponent;                                                    // 0x0018 (size: 0x8)
    bool bProxyIsCurrent;                                                             // 0x0020 (size: 0x1)
    bool bIsImplicit;                                                                 // 0x0021 (size: 0x1)
    bool bIsGeometryCollectionPiece;                                                  // 0x0022 (size: 0x1)
    FString GeometryCollectionPieceName;                                              // 0x0028 (size: 0x10)
    FString BakeName;                                                                 // 0x0038 (size: 0x10)
    FHoudiniCurveOutputProperties CurveOutputProperty;                                // 0x0048 (size: 0xC)
    TMap<class FString, class FString> CachedAttributes;                              // 0x0058 (size: 0x50)
    TMap<class FString, class FString> CachedTokens;                                  // 0x00A8 (size: 0x50)

}; // Size: 0xF8

struct FHoudiniInstancedOutput
{
    TSoftObjectPtr<UObject> OriginalObject;                                           // 0x0000 (size: 0x28)
    int32 OriginalObjectIndex;                                                        // 0x0028 (size: 0x4)
    TArray<FTransform> OriginalTransforms;                                            // 0x0030 (size: 0x10)
    TArray<TSoftObjectPtr<UObject>> VariationObjects;                                 // 0x0040 (size: 0x10)
    TArray<FTransform> VariationTransformOffsets;                                     // 0x0050 (size: 0x10)
    TArray<int32> TransformVariationIndices;                                          // 0x0060 (size: 0x10)
    TArray<int32> OriginalInstanceIndices;                                            // 0x0070 (size: 0x10)
    bool bChanged;                                                                    // 0x0080 (size: 0x1)
    bool bStale;                                                                      // 0x0081 (size: 0x1)

}; // Size: 0x88

class UHoudiniOutput : public UObject
{
    EHoudiniOutputType Type;                                                          // 0x0028 (size: 0x1)
    TArray<FHoudiniGeoPartObject> HoudiniGeoPartObjects;                              // 0x0030 (size: 0x10)
    TMap<class FHoudiniOutputObjectIdentifier, class FHoudiniOutputObject> OutputObjects; // 0x0040 (size: 0x50)
    TMap<class FHoudiniOutputObjectIdentifier, class FHoudiniInstancedOutput> InstancedOutputs; // 0x0090 (size: 0x50)
    TMap<class FString, class UMaterialInterface*> AssignementMaterials;              // 0x00E0 (size: 0x50)
    TMap<class FString, class UMaterialInterface*> ReplacementMaterials;              // 0x0130 (size: 0x50)
    bool bLandscapeWorldComposition;                                                  // 0x0184 (size: 0x1)
    TArray<class AActor*> HoudiniCreatedSocketActors;                                 // 0x0188 (size: 0x10)
    TArray<class AActor*> HoudiniAttachedSocketActors;                                // 0x0198 (size: 0x10)
    bool bIsEditableNode;                                                             // 0x01A8 (size: 0x1)
    bool bHasEditableNodeBuilt;                                                       // 0x01A9 (size: 0x1)
    bool bIsUpdating;                                                                 // 0x01AA (size: 0x1)
    bool bCanDeleteHoudiniNodes;                                                      // 0x01AB (size: 0x1)

}; // Size: 0x1B0

class UHoudiniParameter : public UObject
{
    FString Name;                                                                     // 0x0028 (size: 0x10)
    FString Label;                                                                    // 0x0038 (size: 0x10)
    EHoudiniParameterType ParmType;                                                   // 0x0048 (size: 0x1)
    uint32 TupleSize;                                                                 // 0x004C (size: 0x4)
    int32 NodeId;                                                                     // 0x0050 (size: 0x4)
    int32 ParmId;                                                                     // 0x0054 (size: 0x4)
    int32 ParentParmId;                                                               // 0x0058 (size: 0x4)
    int32 ChildIndex;                                                                 // 0x005C (size: 0x4)
    bool bIsVisible;                                                                  // 0x0060 (size: 0x1)
    bool bIsParentFolderVisible;                                                      // 0x0061 (size: 0x1)
    bool bIsDisabled;                                                                 // 0x0062 (size: 0x1)
    bool bHasChanged;                                                                 // 0x0063 (size: 0x1)
    bool bNeedsToTriggerUpdate;                                                       // 0x0064 (size: 0x1)
    bool bIsDefault;                                                                  // 0x0065 (size: 0x1)
    bool bIsSpare;                                                                    // 0x0066 (size: 0x1)
    bool bJoinNext;                                                                   // 0x0067 (size: 0x1)
    bool bIsChildOfMultiParm;                                                         // 0x0068 (size: 0x1)
    bool bIsDirectChildOfMultiParm;                                                   // 0x0069 (size: 0x1)
    bool bPendingRevertToDefault;                                                     // 0x006A (size: 0x1)
    TArray<int32> TuplePendingRevertToDefault;                                        // 0x0070 (size: 0x10)
    FString Help;                                                                     // 0x0080 (size: 0x10)
    uint32 TagCount;                                                                  // 0x0090 (size: 0x4)
    int32 ValueIndex;                                                                 // 0x0094 (size: 0x4)
    bool bHasExpression;                                                              // 0x0098 (size: 0x1)
    bool bShowExpression;                                                             // 0x0099 (size: 0x1)
    FString ParamExpression;                                                          // 0x00A0 (size: 0x10)
    TMap<class FString, class FString> Tags;                                          // 0x00B0 (size: 0x50)
    bool bAutoUpdate;                                                                 // 0x0100 (size: 0x1)

}; // Size: 0x108

class UHoudiniParameterButton : public UHoudiniParameter
{
}; // Size: 0x108

class UHoudiniParameterButtonStrip : public UHoudiniParameter
{
    int32 Count;                                                                      // 0x0108 (size: 0x4)
    TArray<FString> Labels;                                                           // 0x0110 (size: 0x10)
    TArray<int32> Values;                                                             // 0x0120 (size: 0x10)

}; // Size: 0x130

class UHoudiniParameterChoice : public UHoudiniParameter
{
    int32 IntValue;                                                                   // 0x0108 (size: 0x4)
    int32 DefaultIntValue;                                                            // 0x010C (size: 0x4)
    FString StringValue;                                                              // 0x0110 (size: 0x10)
    FString DefaultStringValue;                                                       // 0x0120 (size: 0x10)
    TArray<FString> StringChoiceValues;                                               // 0x0130 (size: 0x10)
    TArray<FString> StringChoiceLabels;                                               // 0x0140 (size: 0x10)
    bool bIsChildOfRamp;                                                              // 0x0160 (size: 0x1)
    TArray<int32> IntValuesArray;                                                     // 0x0168 (size: 0x10)

}; // Size: 0x178

class UHoudiniParameterColor : public UHoudiniParameter
{
    FLinearColor Color;                                                               // 0x0108 (size: 0x10)
    FLinearColor DefaultColor;                                                        // 0x0118 (size: 0x10)
    bool bIsChildOfRamp;                                                              // 0x0128 (size: 0x1)

}; // Size: 0x130

class UHoudiniParameterFile : public UHoudiniParameter
{
    TArray<FString> Values;                                                           // 0x0108 (size: 0x10)
    TArray<FString> DefaultValues;                                                    // 0x0118 (size: 0x10)
    FString Filters;                                                                  // 0x0128 (size: 0x10)
    bool bIsReadOnly;                                                                 // 0x0138 (size: 0x1)

}; // Size: 0x140

class UHoudiniParameterFloat : public UHoudiniParameter
{
    TArray<float> Values;                                                             // 0x0108 (size: 0x10)
    TArray<float> DefaultValues;                                                      // 0x0118 (size: 0x10)
    FString Unit;                                                                     // 0x0128 (size: 0x10)
    bool bNoSwap;                                                                     // 0x0138 (size: 0x1)
    bool bHasMin;                                                                     // 0x0139 (size: 0x1)
    bool bHasMax;                                                                     // 0x013A (size: 0x1)
    bool bHasUIMin;                                                                   // 0x013B (size: 0x1)
    bool bHasUIMax;                                                                   // 0x013C (size: 0x1)
    bool bIsLogarithmic;                                                              // 0x013D (size: 0x1)
    float Min;                                                                        // 0x0140 (size: 0x4)
    float Max;                                                                        // 0x0144 (size: 0x4)
    float UIMin;                                                                      // 0x0148 (size: 0x4)
    float UIMax;                                                                      // 0x014C (size: 0x4)
    bool bIsChildOfRamp;                                                              // 0x0150 (size: 0x1)

}; // Size: 0x158

class UHoudiniParameterFolder : public UHoudiniParameter
{
    EHoudiniFolderParameterType FolderType;                                           // 0x0108 (size: 0x1)
    bool bExpanded;                                                                   // 0x0109 (size: 0x1)
    bool bChosen;                                                                     // 0x010A (size: 0x1)
    int32 ChildCounter;                                                               // 0x010C (size: 0x4)
    bool bIsContentShown;                                                             // 0x0110 (size: 0x1)

}; // Size: 0x118

class UHoudiniParameterFolderList : public UHoudiniParameter
{
    bool bIsTabMenu;                                                                  // 0x0108 (size: 0x1)
    bool bIsTabsShown;                                                                // 0x0109 (size: 0x1)
    TArray<class UHoudiniParameterFolder*> TabFolders;                                // 0x0110 (size: 0x10)

}; // Size: 0x120

class UHoudiniParameterInt : public UHoudiniParameter
{
    TArray<int32> Values;                                                             // 0x0108 (size: 0x10)
    TArray<int32> DefaultValues;                                                      // 0x0118 (size: 0x10)
    FString Unit;                                                                     // 0x0128 (size: 0x10)
    bool bHasMin;                                                                     // 0x0138 (size: 0x1)
    bool bHasMax;                                                                     // 0x0139 (size: 0x1)
    bool bHasUIMin;                                                                   // 0x013A (size: 0x1)
    bool bHasUIMax;                                                                   // 0x013B (size: 0x1)
    bool bIsLogarithmic;                                                              // 0x013C (size: 0x1)
    int32 Min;                                                                        // 0x0140 (size: 0x4)
    int32 Max;                                                                        // 0x0144 (size: 0x4)
    int32 UIMin;                                                                      // 0x0148 (size: 0x4)
    int32 UIMax;                                                                      // 0x014C (size: 0x4)

}; // Size: 0x150

class UHoudiniParameterLabel : public UHoudiniParameter
{
    TArray<FString> LabelStrings;                                                     // 0x0108 (size: 0x10)

}; // Size: 0x118

class UHoudiniParameterMultiParm : public UHoudiniParameter
{
    bool bIsShown;                                                                    // 0x0108 (size: 0x1)
    int32 Value;                                                                      // 0x010C (size: 0x4)
    FString TemplateName;                                                             // 0x0110 (size: 0x10)
    int32 MultiparmValue;                                                             // 0x0120 (size: 0x4)
    uint32 MultiParmInstanceNum;                                                      // 0x0124 (size: 0x4)
    uint32 MultiParmInstanceLength;                                                   // 0x0128 (size: 0x4)
    uint32 MultiParmInstanceCount;                                                    // 0x012C (size: 0x4)
    uint32 InstanceStartOffset;                                                       // 0x0130 (size: 0x4)
    TArray<EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray;       // 0x0138 (size: 0x10)
    int32 DefaultInstanceCount;                                                       // 0x0148 (size: 0x4)

}; // Size: 0x150

class UHoudiniParameterOperatorPath : public UHoudiniParameter
{
    TWeakObjectPtr<class UHoudiniInput> HoudiniInput;                                 // 0x0108 (size: 0x8)

}; // Size: 0x110

class UHoudiniParameterRampModificationEvent : public UObject
{
    bool bIsInsertEvent;                                                              // 0x0028 (size: 0x1)
    bool bIsFloatRamp;                                                                // 0x0029 (size: 0x1)
    int32 DeleteInstanceIndex;                                                        // 0x002C (size: 0x4)
    float InsertPosition;                                                             // 0x0030 (size: 0x4)
    float InsertFloat;                                                                // 0x0034 (size: 0x4)
    FLinearColor InsertColor;                                                         // 0x0038 (size: 0x10)
    EHoudiniRampInterpolationType InsertInterpolation;                                // 0x0048 (size: 0x1)

}; // Size: 0x50

class UHoudiniParameterRampFloatPoint : public UObject
{
    float Position;                                                                   // 0x0028 (size: 0x4)
    float Value;                                                                      // 0x002C (size: 0x4)
    EHoudiniRampInterpolationType Interpolation;                                      // 0x0030 (size: 0x1)
    int32 InstanceIndex;                                                              // 0x0034 (size: 0x4)
    class UHoudiniParameterFloat* PositionParentParm;                                 // 0x0038 (size: 0x8)
    class UHoudiniParameterFloat* ValueParentParm;                                    // 0x0040 (size: 0x8)
    class UHoudiniParameterChoice* InterpolationParentParm;                           // 0x0048 (size: 0x8)

}; // Size: 0x50

class UHoudiniParameterRampColorPoint : public UObject
{
    float Position;                                                                   // 0x0028 (size: 0x4)
    FLinearColor Value;                                                               // 0x002C (size: 0x10)
    EHoudiniRampInterpolationType Interpolation;                                      // 0x003C (size: 0x1)
    int32 InstanceIndex;                                                              // 0x0040 (size: 0x4)
    class UHoudiniParameterFloat* PositionParentParm;                                 // 0x0048 (size: 0x8)
    class UHoudiniParameterColor* ValueParentParm;                                    // 0x0050 (size: 0x8)
    class UHoudiniParameterChoice* InterpolationParentParm;                           // 0x0058 (size: 0x8)

}; // Size: 0x60

class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{
    TArray<class UHoudiniParameterRampFloatPoint*> Points;                            // 0x0150 (size: 0x10)
    TArray<class UHoudiniParameterRampFloatPoint*> CachedPoints;                      // 0x0160 (size: 0x10)
    TArray<float> DefaultPositions;                                                   // 0x0170 (size: 0x10)
    TArray<float> DefaultValues;                                                      // 0x0180 (size: 0x10)
    TArray<int32> DefaultChoices;                                                     // 0x0190 (size: 0x10)
    int32 NumDefaultPoints;                                                           // 0x01A0 (size: 0x4)
    bool bCaching;                                                                    // 0x01A4 (size: 0x1)
    TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;         // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{
    TArray<class UHoudiniParameterRampColorPoint*> Points;                            // 0x0150 (size: 0x10)
    bool bCaching;                                                                    // 0x0160 (size: 0x1)
    TArray<class UHoudiniParameterRampColorPoint*> CachedPoints;                      // 0x0168 (size: 0x10)
    TArray<float> DefaultPositions;                                                   // 0x0178 (size: 0x10)
    TArray<FLinearColor> DefaultValues;                                               // 0x0188 (size: 0x10)
    TArray<int32> DefaultChoices;                                                     // 0x0198 (size: 0x10)
    int32 NumDefaultPoints;                                                           // 0x01A8 (size: 0x4)
    TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;         // 0x01B0 (size: 0x10)

}; // Size: 0x1C0

class UHoudiniParameterSeparator : public UHoudiniParameter
{
}; // Size: 0x108

class UHoudiniParameterString : public UHoudiniParameter
{
    TArray<FString> Values;                                                           // 0x0108 (size: 0x10)
    TArray<FString> DefaultValues;                                                    // 0x0118 (size: 0x10)
    TArray<class UObject*> ChosenAssets;                                              // 0x0128 (size: 0x10)
    bool bIsAssetRef;                                                                 // 0x0138 (size: 0x1)

}; // Size: 0x140

class UHoudiniParameterToggle : public UHoudiniParameter
{
    TArray<int32> Values;                                                             // 0x0108 (size: 0x10)
    TArray<int32> DefaultValues;                                                      // 0x0118 (size: 0x10)

}; // Size: 0x128

struct FOutputActorOwner
{
    class AActor* OutputActor;                                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FTOPWorkResultObject
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString FilePath;                                                                 // 0x0018 (size: 0x10)
    EPDGWorkResultState State;                                                        // 0x0028 (size: 0x1)
    int32 WorkItemResultInfoIndex;                                                    // 0x002C (size: 0x4)
    TArray<class UHoudiniOutput*> ResultOutputs;                                      // 0x0030 (size: 0x10)
    bool bAutoBakedSinceLastLoad;                                                     // 0x0040 (size: 0x1)
    FOutputActorOwner OutputActorOwner;                                               // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FTOPWorkResult
{
    int32 WorkItemIndex;                                                              // 0x0000 (size: 0x4)
    int32 WorkItemID;                                                                 // 0x0004 (size: 0x4)
    TArray<FTOPWorkResultObject> ResultObjects;                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FHoudiniPDGWorkResultObjectBakedOutput
{
    TArray<FHoudiniBakedOutput> BakedOutputs;                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWorkItemTallyBase
{
}; // Size: 0x8

struct FWorkItemTally : public FWorkItemTallyBase
{
    TSet<int32> AllWorkItems;                                                         // 0x0008 (size: 0x50)
    TSet<int32> WaitingWorkItems;                                                     // 0x0058 (size: 0x50)
    TSet<int32> ScheduledWorkItems;                                                   // 0x00A8 (size: 0x50)
    TSet<int32> CookingWorkItems;                                                     // 0x00F8 (size: 0x50)
    TSet<int32> CookedWorkItems;                                                      // 0x0148 (size: 0x50)
    TSet<int32> ErroredWorkItems;                                                     // 0x0198 (size: 0x50)
    TSet<int32> CookCancelledWorkItems;                                               // 0x01E8 (size: 0x50)

}; // Size: 0x238

struct FAggregatedWorkItemTally : public FWorkItemTallyBase
{
    int32 TotalWorkItems;                                                             // 0x0008 (size: 0x4)
    int32 WaitingWorkItems;                                                           // 0x000C (size: 0x4)
    int32 ScheduledWorkItems;                                                         // 0x0010 (size: 0x4)
    int32 CookingWorkItems;                                                           // 0x0014 (size: 0x4)
    int32 CookedWorkItems;                                                            // 0x0018 (size: 0x4)
    int32 ErroredWorkItems;                                                           // 0x001C (size: 0x4)
    int32 CookCancelledWorkItems;                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

class UTOPNode : public UObject
{
    int32 NodeId;                                                                     // 0x0028 (size: 0x4)
    FString NodeName;                                                                 // 0x0030 (size: 0x10)
    FString NodePath;                                                                 // 0x0040 (size: 0x10)
    FString ParentName;                                                               // 0x0050 (size: 0x10)
    class UObject* WorkResultParent;                                                  // 0x0060 (size: 0x8)
    TArray<FTOPWorkResult> WorkResult;                                                // 0x0068 (size: 0x10)
    bool bHidden;                                                                     // 0x0078 (size: 0x1)
    bool bAutoLoad;                                                                   // 0x0079 (size: 0x1)
    EPDGNodeState NodeState;                                                          // 0x007A (size: 0x1)
    bool bCachedHaveNotLoadedWorkResults;                                             // 0x007B (size: 0x1)
    bool bCachedHaveLoadedWorkResults;                                                // 0x007C (size: 0x1)
    bool bHasChildNodes;                                                              // 0x007D (size: 0x1)
    TSet<FString> ClearedLandscapeLayers;                                             // 0x0080 (size: 0x50)
    bool bShow;                                                                       // 0x0150 (size: 0x1)
    TMap<class FString, class FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs; // 0x0158 (size: 0x50)
    FWorkItemTally WorkItemTally;                                                     // 0x01A8 (size: 0x238)
    FAggregatedWorkItemTally AggregatedWorkItemTally;                                 // 0x03E0 (size: 0x28)
    bool bHasReceivedCookCompleteEvent;                                               // 0x0408 (size: 0x1)
    FOutputActorOwner OutputActorOwner;                                               // 0x0410 (size: 0x10)

}; // Size: 0x420

class UTOPNetwork : public UObject
{
    int32 NodeId;                                                                     // 0x0028 (size: 0x4)
    FString NodeName;                                                                 // 0x0030 (size: 0x10)
    FString NodePath;                                                                 // 0x0040 (size: 0x10)
    TArray<class UTOPNode*> AllTOPNodes;                                              // 0x0050 (size: 0x10)
    int32 SelectedTOPIndex;                                                           // 0x0060 (size: 0x4)
    FString ParentName;                                                               // 0x0068 (size: 0x10)
    bool bShowResults;                                                                // 0x0078 (size: 0x1)
    bool bAutoLoadResults;                                                            // 0x0079 (size: 0x1)

}; // Size: 0x98

class UHoudiniPDGAssetLink : public UObject
{
    FString AssetName;                                                                // 0x0028 (size: 0x10)
    FString AssetNodePath;                                                            // 0x0038 (size: 0x10)
    int32 AssetId;                                                                    // 0x0048 (size: 0x4)
    TArray<class UTOPNetwork*> AllTOPNetworks;                                        // 0x0050 (size: 0x10)
    int32 SelectedTOPNetworkIndex;                                                    // 0x0060 (size: 0x4)
    EPDGLinkState LinkState;                                                          // 0x0064 (size: 0x1)
    bool bAutoCook;                                                                   // 0x0065 (size: 0x1)
    bool bUseTOPNodeFilter;                                                           // 0x0066 (size: 0x1)
    bool bUseTOPOutputFilter;                                                         // 0x0067 (size: 0x1)
    FString TOPNodeFilter;                                                            // 0x0068 (size: 0x10)
    FString TOPOutputFilter;                                                          // 0x0078 (size: 0x10)
    int32 NumWorkitems;                                                               // 0x0088 (size: 0x4)
    FAggregatedWorkItemTally WorkItemTally;                                           // 0x0090 (size: 0x28)
    FString OutputCachePath;                                                          // 0x00B8 (size: 0x10)
    bool bNeedsUIRefresh;                                                             // 0x00C8 (size: 0x1)
    class AActor* OutputParentActor;                                                  // 0x00D0 (size: 0x8)
    FDirectoryPath BakeFolder;                                                        // 0x00D8 (size: 0x10)

}; // Size: 0x130

class UHoudiniRuntimeSettings : public UObject
{
    TEnumAsByte<EHoudiniRuntimeSettingsSessionType> SessionType;                      // 0x0028 (size: 0x1)
    FString ServerHost;                                                               // 0x0030 (size: 0x10)
    int32 ServerPort;                                                                 // 0x0040 (size: 0x4)
    FString ServerPipeName;                                                           // 0x0048 (size: 0x10)
    bool bStartAutomaticServer;                                                       // 0x0058 (size: 0x1)
    float AutomaticServerTimeout;                                                     // 0x005C (size: 0x4)
    bool bSyncWithHoudiniCook;                                                        // 0x0060 (size: 0x1)
    bool bCookUsingHoudiniTime;                                                       // 0x0061 (size: 0x1)
    bool bSyncViewport;                                                               // 0x0062 (size: 0x1)
    bool bSyncHoudiniViewport;                                                        // 0x0063 (size: 0x1)
    bool bSyncUnrealViewport;                                                         // 0x0064 (size: 0x1)
    bool bShowMultiAssetDialog;                                                       // 0x0065 (size: 0x1)
    bool bPreferHdaMemoryCopyOverHdaSourceFile;                                       // 0x0066 (size: 0x1)
    bool bPauseCookingOnStart;                                                        // 0x0067 (size: 0x1)
    bool bDisplaySlateCookingNotifications;                                           // 0x0068 (size: 0x1)
    FString DefaultTemporaryCookFolder;                                               // 0x0070 (size: 0x10)
    FString DefaultBakeFolder;                                                        // 0x0080 (size: 0x10)
    bool MarshallingLandscapesUseDefaultUnrealScaling;                                // 0x0090 (size: 0x1)
    bool MarshallingLandscapesUseFullResolution;                                      // 0x0091 (size: 0x1)
    bool MarshallingLandscapesForceMinMaxValues;                                      // 0x0092 (size: 0x1)
    float MarshallingLandscapesForcedMinValue;                                        // 0x0094 (size: 0x4)
    float MarshallingLandscapesForcedMaxValue;                                        // 0x0098 (size: 0x4)
    bool bAddRotAndScaleAttributesOnCurves;                                           // 0x009C (size: 0x1)
    bool bUseLegacyInputCurves;                                                       // 0x009D (size: 0x1)
    float MarshallingSplineResolution;                                                // 0x00A0 (size: 0x4)
    bool bEnableProxyStaticMesh;                                                      // 0x00A4 (size: 0x1)
    bool bShowDefaultMesh;                                                            // 0x00A5 (size: 0x1)
    bool bEnableProxyStaticMeshRefinementByTimer;                                     // 0x00A6 (size: 0x1)
    float ProxyMeshAutoRefineTimeoutSeconds;                                          // 0x00A8 (size: 0x4)
    bool bEnableProxyStaticMeshRefinementOnPreSaveWorld;                              // 0x00AC (size: 0x1)
    bool bEnableProxyStaticMeshRefinementOnPreBeginPIE;                               // 0x00AD (size: 0x1)
    uint8 bDoubleSidedGeometry;                                                       // 0x00B0 (size: 0x1)
    class UPhysicalMaterial* PhysMaterial;                                            // 0x00B8 (size: 0x8)
    FBodyInstance DefaultBodyInstance;                                                // 0x00C0 (size: 0x158)
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;                              // 0x0218 (size: 0x1)
    int32 LightMapResolution;                                                         // 0x021C (size: 0x4)
    float LpvBiasMultiplier;                                                          // 0x0220 (size: 0x4)
    float GeneratedDistanceFieldResolutionScale;                                      // 0x0224 (size: 0x4)
    FWalkableSlopeOverride WalkableSlopeOverride;                                     // 0x0228 (size: 0x10)
    int32 LightMapCoordinateIndex;                                                    // 0x0238 (size: 0x4)
    uint8 bUseMaximumStreamingTexelRatio;                                             // 0x023C (size: 0x1)
    float StreamingDistanceMultiplier;                                                // 0x0240 (size: 0x4)
    class UFoliageType_InstancedStaticMesh* FoliageDefaultSettings;                   // 0x0248 (size: 0x8)
    TArray<class UAssetUserData*> AssetUserData;                                      // 0x0250 (size: 0x10)
    bool bUseFullPrecisionUVs;                                                        // 0x0260 (size: 0x1)
    int32 SrcLightmapIndex;                                                           // 0x0264 (size: 0x4)
    int32 DstLightmapIndex;                                                           // 0x0268 (size: 0x4)
    int32 MinLightmapResolution;                                                      // 0x026C (size: 0x4)
    bool bRemoveDegenerates;                                                          // 0x0270 (size: 0x1)
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> GenerateLightmapUVsFlag;        // 0x0271 (size: 0x1)
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeNormalsFlag;           // 0x0272 (size: 0x1)
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeTangentsFlag;          // 0x0273 (size: 0x1)
    bool bUseMikkTSpace;                                                              // 0x0274 (size: 0x1)
    bool bBuildAdjacencyBuffer;                                                       // 0x0275 (size: 0x1)
    uint8 bComputeWeightedNormals;                                                    // 0x0276 (size: 0x1)
    uint8 bBuildReversedIndexBuffer;                                                  // 0x0276 (size: 0x1)
    uint8 bUseHighPrecisionTangentBasis;                                              // 0x0276 (size: 0x1)
    float DistanceFieldResolutionScale;                                               // 0x0278 (size: 0x4)
    uint8 bGenerateDistanceFieldAsIfTwoSided;                                         // 0x027C (size: 0x1)
    uint8 bSupportFaceRemap;                                                          // 0x027C (size: 0x1)
    bool bPDGAsyncCommandletImportEnabled;                                            // 0x027D (size: 0x1)
    bool bEnableBackwardCompatibility;                                                // 0x027E (size: 0x1)
    bool bAutomaticLegacyHDARebuild;                                                  // 0x027F (size: 0x1)
    bool bUseCustomHoudiniLocation;                                                   // 0x0280 (size: 0x1)
    FDirectoryPath CustomHoudiniLocation;                                             // 0x0288 (size: 0x10)
    TEnumAsByte<EHoudiniExecutableType> HoudiniExecutable;                            // 0x0298 (size: 0x1)
    int32 CookingThreadStackSize;                                                     // 0x029C (size: 0x4)
    FString HoudiniEnvironmentFiles;                                                  // 0x02A0 (size: 0x10)
    FString OtlSearchPath;                                                            // 0x02B0 (size: 0x10)
    FString DsoSearchPath;                                                            // 0x02C0 (size: 0x10)
    FString ImageDsoSearchPath;                                                       // 0x02D0 (size: 0x10)
    FString AudioDsoSearchPath;                                                       // 0x02E0 (size: 0x10)

}; // Size: 0x2F0

class UHoudiniSplineComponent : public USceneComponent
{
    TArray<FTransform> CurvePoints;                                                   // 0x0200 (size: 0x10)
    TArray<FVector> DisplayPoints;                                                    // 0x0210 (size: 0x10)
    TArray<int32> DisplayPointIndexDivider;                                           // 0x0220 (size: 0x10)
    FString HoudiniSplineName;                                                        // 0x0230 (size: 0x10)
    bool bClosed;                                                                     // 0x0240 (size: 0x1)
    bool bReversed;                                                                   // 0x0241 (size: 0x1)
    int32 CurveOrder;                                                                 // 0x0244 (size: 0x4)
    bool bIsHoudiniSplineVisible;                                                     // 0x0248 (size: 0x1)
    EHoudiniCurveType CurveType;                                                      // 0x0249 (size: 0x1)
    EHoudiniCurveMethod CurveMethod;                                                  // 0x024A (size: 0x1)
    EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization;          // 0x024B (size: 0x1)
    bool bIsOutputCurve;                                                              // 0x024C (size: 0x1)
    bool bCookOnCurveChanged;                                                         // 0x024D (size: 0x1)
    bool bIsLegacyInputCurve;                                                         // 0x024E (size: 0x1)
    bool bHasChanged;                                                                 // 0x0480 (size: 0x1)
    bool bNeedsToTriggerUpdate;                                                       // 0x0481 (size: 0x1)
    bool bIsInputCurve;                                                               // 0x0482 (size: 0x1)
    bool bIsEditableOutputCurve;                                                      // 0x0483 (size: 0x1)
    int32 NodeId;                                                                     // 0x0484 (size: 0x4)
    FString PartName;                                                                 // 0x0488 (size: 0x10)

}; // Size: 0x4A0

class UHoudiniStaticMesh : public UObject
{
    bool bHasNormals;                                                                 // 0x0028 (size: 0x1)
    bool bHasTangents;                                                                // 0x0029 (size: 0x1)
    bool bHasColors;                                                                  // 0x002A (size: 0x1)
    uint32 NumUVLayers;                                                               // 0x002C (size: 0x4)
    bool bHasPerFaceMaterials;                                                        // 0x0030 (size: 0x1)
    TArray<FVector> VertexPositions;                                                  // 0x0038 (size: 0x10)
    TArray<FIntVector> TriangleIndices;                                               // 0x0048 (size: 0x10)
    TArray<FColor> VertexInstanceColors;                                              // 0x0058 (size: 0x10)
    TArray<FVector> VertexInstanceNormals;                                            // 0x0068 (size: 0x10)
    TArray<FVector> VertexInstanceUTangents;                                          // 0x0078 (size: 0x10)
    TArray<FVector> VertexInstanceVTangents;                                          // 0x0088 (size: 0x10)
    TArray<FVector2D> VertexInstanceUVs;                                              // 0x0098 (size: 0x10)
    TArray<int32> MaterialIDsPerTriangle;                                             // 0x00A8 (size: 0x10)
    TArray<FStaticMaterial> StaticMaterials;                                          // 0x00B8 (size: 0x10)

    void SetVertexPosition(uint32 InVertexIndex, const FVector& InPosition);
    void SetTriangleVertexVTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector& InVTangent);
    void SetTriangleVertexUV(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, uint8 InUVLayer, const FVector2D& InUV);
    void SetTriangleVertexUTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector& InUTangent);
    void SetTriangleVertexNormal(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector& InNormal);
    void SetTriangleVertexIndices(uint32 InTriangleIndex, const FIntVector& InTriangleVertexIndices);
    void SetTriangleVertexColor(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FColor& InColor);
    void SetTriangleMaterialID(uint32 InTriangleIndex, int32 InMaterialID);
    void SetStaticMaterial(uint32 InMaterialIndex, const FStaticMaterial& InStaticMaterial);
    void SetNumUVLayers(uint32 InNumUVLayers);
    void SetNumStaticMaterials(uint32 InNumStaticMaterials);
    void SetHasTangents(bool bInHasTangents);
    void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);
    void SetHasNormals(bool bInHasNormals);
    void SetHasColors(bool bInHasColors);
    void Optimize();
    bool IsValid(bool bInSkipVertexIndicesCheck);
    void Initialize(uint32 InNumVertices, uint32 InNumTriangles, uint32 InNumUVLayers, uint32 InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);
    bool HasTangents();
    bool HasPerFaceMaterials();
    bool HasNormals();
    bool HasColors();
    TArray<FVector> GetVertexPositions();
    TArray<FVector> GetVertexInstanceVTangents();
    TArray<FVector2D> GetVertexInstanceUVs();
    TArray<FVector> GetVertexInstanceUTangents();
    TArray<FVector> GetVertexInstanceNormals();
    TArray<FColor> GetVertexInstanceColors();
    TArray<FIntVector> GetTriangleIndices();
    TArray<FStaticMaterial> GetStaticMaterials();
    uint32 GetNumVertices();
    uint32 GetNumVertexInstances();
    uint32 GetNumUVLayers();
    uint32 GetNumTriangles();
    uint32 GetNumStaticMaterials();
    int32 GetMaterialIndex(FName InMaterialSlotName);
    TArray<int32> GetMaterialIDsPerTriangle();
    class UMaterialInterface* GetMaterial(int32 InMaterialIndex);
    void CalculateTangents(bool bInComputeWeightedNormals);
    void CalculateNormals(bool bInComputeWeightedNormals);
    FBox CalcBounds();
    uint32 AddStaticMaterial(const FStaticMaterial& InStaticMaterial);
}; // Size: 0xC8

class UHoudiniStaticMeshComponent : public UMeshComponent
{
    class UHoudiniStaticMesh* Mesh;                                                   // 0x0478 (size: 0x8)
    FBox LocalBounds;                                                                 // 0x0480 (size: 0x1C)
    bool bHoudiniIconVisible;                                                         // 0x049C (size: 0x1)

    void SetMesh(class UHoudiniStaticMesh* InMesh);
    void SetHoudiniIconVisible(bool bInHoudiniIconVisible);
    void NotifyMeshUpdated();
    bool IsHoudiniIconVisible();
    class UHoudiniStaticMesh* GetMesh();
}; // Size: 0x4A0

class IHoudiniAssetStateEvents : public IInterface
{
}; // Size: 0x28

struct FHoudiniAssetBlueprintOutput
{
    int32 OutputIndex;                                                                // 0x0000 (size: 0x4)
    FHoudiniOutputObject OutputObject;                                                // 0x0008 (size: 0xF8)

}; // Size: 0x100

struct FHoudiniAssetBlueprintInstanceData : public FActorComponentInstanceData
{
    class UHoudiniAsset* HoudiniAsset;                                                // 0x0068 (size: 0x8)
    int32 AssetId;                                                                    // 0x0070 (size: 0x4)
    EHoudiniAssetState AssetState;                                                    // 0x0074 (size: 0x1)
    uint32 SubAssetIndex;                                                             // 0x0078 (size: 0x4)
    uint32 AssetCookCount;                                                            // 0x007C (size: 0x4)
    bool bHasBeenLoaded;                                                              // 0x0080 (size: 0x1)
    bool bHasBeenDuplicated;                                                          // 0x0081 (size: 0x1)
    bool bPendingDelete;                                                              // 0x0082 (size: 0x1)
    bool bRecookRequested;                                                            // 0x0083 (size: 0x1)
    bool bRebuildRequested;                                                           // 0x0084 (size: 0x1)
    bool bEnableCooking;                                                              // 0x0085 (size: 0x1)
    bool bForceNeedUpdate;                                                            // 0x0086 (size: 0x1)
    bool bLastCookSuccess;                                                            // 0x0087 (size: 0x1)
    FGuid ComponentGUID;                                                              // 0x0088 (size: 0x10)
    FGuid HapiGUID;                                                                   // 0x0098 (size: 0x10)
    bool bRegisteredComponentTemplate;                                                // 0x00A8 (size: 0x1)
    FString SourceName;                                                               // 0x00B0 (size: 0x10)
    TMap<class FHoudiniOutputObjectIdentifier, class FHoudiniAssetBlueprintOutput> Outputs; // 0x00C0 (size: 0x50)
    TArray<class UHoudiniInput*> Inputs;                                              // 0x0110 (size: 0x10)

}; // Size: 0x120

struct FHoudiniGenericAttribute
{
    FString AttributeName;                                                            // 0x0000 (size: 0x10)
    EAttribStorageType AttributeType;                                                 // 0x0010 (size: 0x1)
    EAttribOwner AttributeOwner;                                                      // 0x0011 (size: 0x1)
    int32 AttributeCount;                                                             // 0x0014 (size: 0x4)
    int32 AttributeTupleSize;                                                         // 0x0018 (size: 0x4)
    TArray<double> DoubleValues;                                                      // 0x0020 (size: 0x10)
    TArray<int64> IntValues;                                                          // 0x0030 (size: 0x10)
    TArray<FString> StringValues;                                                     // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FHoudiniGenericAttributeChangedProperty
{
    class UObject* Object;                                                            // 0x0000 (size: 0x8)

}; // Size: 0x98

struct FHoudiniCurveInfo
{
}; // Size: 0x1C

struct FHoudiniVolumeInfo
{
}; // Size: 0x80

struct FHoudiniPartInfo
{
}; // Size: 0x48

struct FHoudiniGeoInfo
{
}; // Size: 0x30

struct FHoudiniObjectInfo
{
}; // Size: 0x28

struct FHoudiniSplineComponentInstanceData : public FActorComponentInstanceData
{
    TArray<FTransform> CurvePoints;                                                   // 0x0068 (size: 0x10)
    TArray<FVector> DisplayPoints;                                                    // 0x0078 (size: 0x10)
    TArray<int32> DisplayPointIndexDivider;                                           // 0x0088 (size: 0x10)

}; // Size: 0x98

#endif
