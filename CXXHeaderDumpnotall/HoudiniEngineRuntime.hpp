#ifndef UE4SS_SDK_HoudiniEngineRuntime_HPP
#define UE4SS_SDK_HoudiniEngineRuntime_HPP

#include "HoudiniEngineRuntime_enums.hpp"

class UHoudiniAsset : public UObject
{
    FString AssetFileName;
    TArray<uint8> AssetBytes;
    uint32 AssetBytesCount;
    bool bAssetLimitedCommercial;
    bool bAssetNonCommercial;
    bool bAssetExpanded;

};

class AHoudiniAssetActor : public AActor
{
    class UHoudiniAssetComponent* HoudiniAssetComponent;

};

struct FHoudiniStaticMeshGenerationProperties
{
    uint8 bGeneratedDoubleSidedGeometry;
    class UPhysicalMaterial* GeneratedPhysMaterial;
    FBodyInstance DefaultBodyInstance;
    TEnumAsByte<ECollisionTraceFlag> GeneratedCollisionTraceFlag;
    int32 GeneratedLightMapResolution;
    FWalkableSlopeOverride GeneratedWalkableSlopeOverride;
    int32 GeneratedLightMapCoordinateIndex;
    uint8 bGeneratedUseMaximumStreamingTexelRatio;
    float GeneratedStreamingDistanceMultiplier;
    class UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings;
    TArray<class UAssetUserData*> GeneratedAssetUserData;

};

struct FHoudiniBakedOutputObjectIdentifier
{
    int32 PartId;
    FString SplitIdentifier;

};

struct FHoudiniBakedOutputObject
{
    FString Actor;
    FString Blueprint;
    FName ActorBakeName;
    FString BakedObject;
    FString BakedComponent;
    TArray<FString> InstancedActors;
    TArray<FString> InstancedComponents;
    TMap<class FName, class FString> LandscapeLayers;

};

struct FHoudiniBakedOutput
{
    TMap<class FHoudiniBakedOutputObjectIdentifier, class FHoudiniBakedOutputObject> BakedOutputObjects;

};

class UHoudiniAssetComponent : public UPrimitiveComponent
{
    class UHoudiniAsset* HoudiniAsset;
    bool bCookOnParameterChange;
    bool bUploadTransformsToHoudiniEngine;
    bool bCookOnTransformChange;
    bool bCookOnAssetInputCook;
    bool bOutputless;
    bool bOutputTemplateGeos;
    bool bUseOutputNodes;
    FDirectoryPath TemporaryCookFolder;
    FDirectoryPath BakeFolder;
    EHoudiniStaticMeshMethod StaticMeshMethod;
    FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties;
    FMeshBuildSettings StaticMeshBuildSettings;
    bool bOverrideGlobalProxyStaticMeshSettings;
    bool bEnableProxyStaticMeshOverride;
    bool bEnableProxyStaticMeshRefinementByTimerOverride;
    float ProxyMeshAutoRefineTimeoutSecondsOverride;
    bool bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;
    bool bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;
    int32 AssetId;
    TArray<int32> NodeIdsToCook;
    TMap<int32, int32> OutputNodeCookCounts;
    TSet<UHoudiniAssetComponent*> DownstreamHoudiniAssets;
    FGuid ComponentGUID;
    FGuid HapiGUID;
    FString HapiAssetName;
    EHoudiniAssetState AssetState;
    EHoudiniAssetState DebugLastAssetState;
    EHoudiniAssetStateResult AssetStateResult;
    uint32 SubAssetIndex;
    int32 AssetCookCount;
    bool bHasBeenLoaded;
    bool bHasBeenDuplicated;
    bool bPendingDelete;
    bool bRecookRequested;
    bool bRebuildRequested;
    bool bEnableCooking;
    bool bForceNeedUpdate;
    bool bLastCookSuccess;
    bool bParameterDefinitionUpdateNeeded;
    bool bBlueprintStructureModified;
    bool bBlueprintModified;
    TArray<class UHoudiniParameter*> Parameters;
    TArray<class UHoudiniInput*> Inputs;
    TArray<class UHoudiniOutput*> Outputs;
    TArray<FHoudiniBakedOutput> BakedOutputs;
    TArray<TWeakObjectPtr<AActor>> UntrackedOutputs;
    TArray<class UHoudiniHandleComponent*> HandleComponents;
    bool bHasComponentTransformChanged;
    bool bFullyLoaded;
    class UHoudiniPDGAssetLink* PDGAssetLink;
    FTimerHandle RefineMeshesTimer;
    bool bNoProxyMeshNextCookRequested;
    TMap<UObject*, int32> InputPresets;
    bool bBakeAfterNextCook;
    bool bCachedIsPreview;
    double LastTickTime;

};

struct FHoudiniOutputObjectIdentifier
{
    int32 ObjectId;
    int32 GeoId;
    int32 PartId;
    FString SplitIdentifier;
    FString PartName;
    int32 PrimitiveIndex;
    int32 PointIndex;

};

class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{
    bool FauxBPProperty;
    bool bHoudiniAssetChanged;
    bool bUpdatedFromTemplate;
    bool bIsInBlueprintEditor;
    bool bCanDeleteHoudiniNodes;
    bool bHasRegisteredComponentTemplate;
    TMap<class FHoudiniOutputObjectIdentifier, class FGuid> CachedOutputNodes;
    TMap<class FGuid, class FGuid> CachedInputNodes;

    void SetToggleValueAt(FString Name, bool Value, int32 Index);
    void SetFloatParameter(FString Name, float Value, int32 Index);
    bool HasParameter(FString Name);
};

class UHoudiniAssetParameter : public UObject
{
};

class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterRamp : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{
};

class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{
};

class UHoudiniAssetComponentMaterials_V1 : public UObject
{
};

class UHoudiniHandleComponent_V1 : public USceneComponent
{
};

class UHoudiniSplineComponent_V1 : public USceneComponent
{
};

class UHoudiniAssetInput : public UHoudiniAssetParameter
{
};

class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{
};

class UHoudiniAssetInstanceInputField : public UObject
{
};

class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
{
    uint8 bGeneratedDoubleSidedGeometry;
    class UPhysicalMaterial* GeneratedPhysMaterial;
    FBodyInstance DefaultBodyInstance;
    TEnumAsByte<ECollisionTraceFlag> GeneratedCollisionTraceFlag;
    int32 GeneratedLightMapResolution;
    float GeneratedDistanceFieldResolutionScale;
    FWalkableSlopeOverride GeneratedWalkableSlopeOverride;
    int32 GeneratedLightMapCoordinateIndex;
    uint8 bGeneratedUseMaximumStreamingTexelRatio;
    float GeneratedStreamingDistanceMultiplier;
    class UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings;
    TArray<class UAssetUserData*> GeneratedAssetUserData;
    FText BakeFolder;
    FText TempCookFolder;

};

class UHoudiniInstancedActorComponent_V1 : public USceneComponent
{
};

class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent
{
};

class IHoudiniEngineCopyPropertiesInterface : public IInterface
{
};

class UHoudiniHandleParameter : public UObject
{
    class UHoudiniParameter* AssetParameter;
    int32 TupleIndex;

};

class UHoudiniHandleComponent : public USceneComponent
{
    TArray<class UHoudiniHandleParameter*> XformParms;
    class UHoudiniHandleParameter* RSTParm;
    class UHoudiniHandleParameter* RotOrderParm;
    EHoudiniHandleType HandleType;
    FString HandleName;

};

class UHoudiniInput : public UObject
{
    FString Name;
    FString Label;
    EHoudiniInputType Type;
    EHoudiniInputType PreviousType;
    int32 AssetNodeId;
    int32 InputNodeId;
    int32 InputIndex;
    int32 ParmId;
    bool bIsObjectPathParameter;
    TArray<int32> CreatedDataNodeIds;
    bool bHasChanged;
    bool bNeedsToTriggerUpdate;
    FString Help;
    EHoudiniXformType KeepWorldTransform;
    bool bPackBeforeMerge;
    bool bImportAsReference;
    bool bImportAsReferenceRotScaleEnabled;
    bool bExportLODs;
    bool bExportSockets;
    bool bExportColliders;
    bool bCookOnCurveChanged;
    TArray<class UHoudiniInputObject*> GeometryInputObjects;
    bool bStaticMeshChanged;
    TArray<class UHoudiniInputObject*> AssetInputObjects;
    bool bInputAssetConnectedInHoudini;
    TArray<class UHoudiniInputObject*> CurveInputObjects;
    float DefaultCurveOffset;
    bool bAddRotAndScaleAttributesOnCurves;
    bool bUseLegacyInputCurves;
    TArray<class UHoudiniInputObject*> LandscapeInputObjects;
    bool bLandscapeHasExportTypeChanged;
    TArray<class UHoudiniInputObject*> WorldInputObjects;
    TArray<class AActor*> WorldInputBoundSelectorObjects;
    bool bIsWorldInputBoundSelector;
    bool bWorldInputBoundSelectorAutoUpdate;
    float UnrealSplineResolution;
    TArray<class UHoudiniInputObject*> SkeletalInputObjects;
    TArray<class UHoudiniInputObject*> GeometryCollectionInputObjects;
    TSet<ULandscapeComponent*> LandscapeSelectedComponents;
    TSet<int32> InputNodesPendingDelete;
    TArray<class UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;
    TArray<class UHoudiniInputObject*> LastUndoDeletedInputs;
    bool bUpdateInputLandscape;
    EHoudiniLandscapeExportType LandscapeExportType;
    bool bLandscapeExportSelectionOnly;
    bool bLandscapeAutoSelectComponent;
    bool bLandscapeExportMaterials;
    bool bLandscapeExportLighting;
    bool bLandscapeExportNormalizedUVs;
    bool bLandscapeExportTileUVs;
    bool bCanDeleteHoudiniNodes;

};

class UHoudiniInputObject : public UObject
{
    TSoftObjectPtr<UObject> InputObject;
    FTransform Transform;
    EHoudiniInputObjectType Type;
    int32 InputNodeId;
    int32 InputObjectNodeId;
    FGuid Guid;
    bool bHasChanged;
    bool bNeedsToTriggerUpdate;
    bool bTransformChanged;
    bool bImportAsReference;
    bool bImportAsReferenceRotScaleEnabled;
    bool bCanDeleteHoudiniNodes;

};

class UHoudiniInputStaticMesh : public UHoudiniInputObject
{
    TArray<class UHoudiniInputStaticMesh*> BlueprintStaticMeshes;

};

class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{
};

class UHoudiniInputGeometryCollection : public UHoudiniInputObject
{
};

class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputObject
{
};

class UHoudiniInputGeometryCollectionActor : public UHoudiniInputObject
{
};

class UHoudiniInputSceneComponent : public UHoudiniInputObject
{
    FTransform ActorTransform;

};

class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    TArray<FString> MeshComponentsMaterials;

};

class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{
    TArray<FTransform> InstanceTransforms;

};

class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{
    int32 NumberOfSplineControlPoints;
    float SplineLength;
    float SplineResolution;
    bool SplineClosed;
    TArray<FTransform> SplineControlPoints;

};

class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{
    EHoudiniCurveType CurveType;
    EHoudiniCurveMethod CurveMethod;
    bool Reversed;
    class UHoudiniSplineComponent* CachedComponent;

};

class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{
    float FOV;
    float AspectRatio;
    bool bIsOrthographic;
    float OrthoWidth;
    float OrthoNearClipPlane;
    float OrthoFarClipPlane;

};

class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{
    int32 AssetOutputIndex;

};

class UHoudiniInputActor : public UHoudiniInputObject
{
    TArray<class UHoudiniInputSceneComponent*> ActorComponents;
    TSet<TSoftObjectPtr<UObject>> ActorSceneComponents;
    int32 LastUpdateNumComponentsAdded;
    int32 LastUpdateNumComponentsRemoved;

};

class UHoudiniInputLandscape : public UHoudiniInputActor
{
    FTransform CachedInputLandscapeTraqnsform;

};

struct FHoudiniBrushInfo
{
    TWeakObjectPtr<class ABrush> BrushActor;
    FTransform CachedTransform;
    FVector CachedOrigin;
    FVector CachedExtent;
    TEnumAsByte<EBrushType> CachedBrushType;
    uint64 CachedSurfaceHash;

};

class UHoudiniInputBrush : public UHoudiniInputActor
{
    TArray<FHoudiniBrushInfo> BrushesInfo;
    class UModel* CombinedModel;
    bool bIgnoreInputObject;
    TEnumAsByte<EBrushType> CachedInputBrushType;

};

class UHoudiniInputDataTable : public UHoudiniInputObject
{
};

class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
{
};

class UHoudiniInstancedActorComponent : public USceneComponent
{
    class UObject* InstancedObject;
    TArray<class AActor*> InstancedActors;

};

class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{
    TArray<class UStaticMeshComponent*> Instances;
    TArray<class UMaterialInterface*> OverrideMaterials;
    class UStaticMesh* InstancedMesh;

};

class UHoudiniLandscapePtr : public UObject
{
    TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;
    EHoudiniLandscapeOutputBakeType BakeType;
    FName EditLayerName;

};

class UHoudiniLandscapeEditLayer : public UObject
{
    TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;
    FString LayerName;

};

struct FHoudiniMeshSocket
{
};

struct FHoudiniGeoPartObject
{
    int32 AssetId;
    FString AssetName;
    int32 ObjectId;
    FString ObjectName;
    int32 GeoId;
    int32 PartId;
    FString PartName;
    bool bHasCustomPartName;
    TArray<FString> SplitGroups;
    FTransform TransformMatrix;
    FString NodePath;
    EHoudiniPartType Type;
    EHoudiniInstancerType InstancerType;
    FString VolumeName;
    bool bHasEditLayers;
    FString VolumeLayerName;
    int32 VolumeTileIndex;
    bool bIsVisible;
    bool bIsEditable;
    bool bIsTemplated;
    bool bIsInstanced;
    bool bHasGeoChanged;
    bool bHasPartChanged;
    bool bHasTransformChanged;
    bool bHasMaterialsChanged;
    TArray<FHoudiniMeshSocket> AllMeshSockets;

};

struct FHoudiniCurveOutputProperties
{
    EHoudiniCurveOutputType CurveOutputType;
    int32 NumPoints;
    bool bClosed;
    EHoudiniCurveType CurveType;
    EHoudiniCurveMethod CurveMethod;

};

struct FHoudiniOutputObject
{
    class UObject* OutputObject;
    class UObject* OutputComponent;
    class UObject* ProxyObject;
    class UObject* ProxyComponent;
    bool bProxyIsCurrent;
    bool bIsImplicit;
    bool bIsGeometryCollectionPiece;
    FString GeometryCollectionPieceName;
    FString BakeName;
    FHoudiniCurveOutputProperties CurveOutputProperty;
    TMap<class FString, class FString> CachedAttributes;
    TMap<class FString, class FString> CachedTokens;

};

struct FHoudiniInstancedOutput
{
    TSoftObjectPtr<UObject> OriginalObject;
    int32 OriginalObjectIndex;
    TArray<FTransform> OriginalTransforms;
    TArray<TSoftObjectPtr<UObject>> VariationObjects;
    TArray<FTransform> VariationTransformOffsets;
    TArray<int32> TransformVariationIndices;
    TArray<int32> OriginalInstanceIndices;
    bool bChanged;
    bool bStale;

};

class UHoudiniOutput : public UObject
{
    EHoudiniOutputType Type;
    TArray<FHoudiniGeoPartObject> HoudiniGeoPartObjects;
    TMap<class FHoudiniOutputObjectIdentifier, class FHoudiniOutputObject> OutputObjects;
    TMap<class FHoudiniOutputObjectIdentifier, class FHoudiniInstancedOutput> InstancedOutputs;
    TMap<class FString, class UMaterialInterface*> AssignementMaterials;
    TMap<class FString, class UMaterialInterface*> ReplacementMaterials;
    bool bLandscapeWorldComposition;
    TArray<class AActor*> HoudiniCreatedSocketActors;
    TArray<class AActor*> HoudiniAttachedSocketActors;
    bool bIsEditableNode;
    bool bHasEditableNodeBuilt;
    bool bIsUpdating;
    bool bCanDeleteHoudiniNodes;

};

class UHoudiniParameter : public UObject
{
    FString Name;
    FString Label;
    EHoudiniParameterType ParmType;
    uint32 TupleSize;
    int32 NodeId;
    int32 ParmId;
    int32 ParentParmId;
    int32 ChildIndex;
    bool bIsVisible;
    bool bIsParentFolderVisible;
    bool bIsDisabled;
    bool bHasChanged;
    bool bNeedsToTriggerUpdate;
    bool bIsDefault;
    bool bIsSpare;
    bool bJoinNext;
    bool bIsChildOfMultiParm;
    bool bIsDirectChildOfMultiParm;
    bool bPendingRevertToDefault;
    TArray<int32> TuplePendingRevertToDefault;
    FString Help;
    uint32 TagCount;
    int32 ValueIndex;
    bool bHasExpression;
    bool bShowExpression;
    FString ParamExpression;
    TMap<class FString, class FString> Tags;
    bool bAutoUpdate;

};

class UHoudiniParameterButton : public UHoudiniParameter
{
};

class UHoudiniParameterButtonStrip : public UHoudiniParameter
{
    int32 Count;
    TArray<FString> Labels;
    TArray<int32> Values;

};

class UHoudiniParameterChoice : public UHoudiniParameter
{
    int32 IntValue;
    int32 DefaultIntValue;
    FString StringValue;
    FString DefaultStringValue;
    TArray<FString> StringChoiceValues;
    TArray<FString> StringChoiceLabels;
    bool bIsChildOfRamp;
    TArray<int32> IntValuesArray;

};

class UHoudiniParameterColor : public UHoudiniParameter
{
    FLinearColor Color;
    FLinearColor DefaultColor;
    bool bIsChildOfRamp;

};

class UHoudiniParameterFile : public UHoudiniParameter
{
    TArray<FString> Values;
    TArray<FString> DefaultValues;
    FString Filters;
    bool bIsReadOnly;

};

class UHoudiniParameterFloat : public UHoudiniParameter
{
    TArray<float> Values;
    TArray<float> DefaultValues;
    FString Unit;
    bool bNoSwap;
    bool bHasMin;
    bool bHasMax;
    bool bHasUIMin;
    bool bHasUIMax;
    bool bIsLogarithmic;
    float Min;
    float Max;
    float UIMin;
    float UIMax;
    bool bIsChildOfRamp;

};

class UHoudiniParameterFolder : public UHoudiniParameter
{
    EHoudiniFolderParameterType FolderType;
    bool bExpanded;
    bool bChosen;
    int32 ChildCounter;
    bool bIsContentShown;

};

class UHoudiniParameterFolderList : public UHoudiniParameter
{
    bool bIsTabMenu;
    bool bIsTabsShown;
    TArray<class UHoudiniParameterFolder*> TabFolders;

};

class UHoudiniParameterInt : public UHoudiniParameter
{
    TArray<int32> Values;
    TArray<int32> DefaultValues;
    FString Unit;
    bool bHasMin;
    bool bHasMax;
    bool bHasUIMin;
    bool bHasUIMax;
    bool bIsLogarithmic;
    int32 Min;
    int32 Max;
    int32 UIMin;
    int32 UIMax;

};

class UHoudiniParameterLabel : public UHoudiniParameter
{
    TArray<FString> LabelStrings;

};

class UHoudiniParameterMultiParm : public UHoudiniParameter
{
    bool bIsShown;
    int32 Value;
    FString TemplateName;
    int32 MultiparmValue;
    uint32 MultiParmInstanceNum;
    uint32 MultiParmInstanceLength;
    uint32 MultiParmInstanceCount;
    uint32 InstanceStartOffset;
    TArray<EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray;
    int32 DefaultInstanceCount;

};

class UHoudiniParameterOperatorPath : public UHoudiniParameter
{
    TWeakObjectPtr<class UHoudiniInput> HoudiniInput;

};

class UHoudiniParameterRampModificationEvent : public UObject
{
    bool bIsInsertEvent;
    bool bIsFloatRamp;
    int32 DeleteInstanceIndex;
    float InsertPosition;
    float InsertFloat;
    FLinearColor InsertColor;
    EHoudiniRampInterpolationType InsertInterpolation;

};

class UHoudiniParameterRampFloatPoint : public UObject
{
    float Position;
    float Value;
    EHoudiniRampInterpolationType Interpolation;
    int32 InstanceIndex;
    class UHoudiniParameterFloat* PositionParentParm;
    class UHoudiniParameterFloat* ValueParentParm;
    class UHoudiniParameterChoice* InterpolationParentParm;

};

class UHoudiniParameterRampColorPoint : public UObject
{
    float Position;
    FLinearColor Value;
    EHoudiniRampInterpolationType Interpolation;
    int32 InstanceIndex;
    class UHoudiniParameterFloat* PositionParentParm;
    class UHoudiniParameterColor* ValueParentParm;
    class UHoudiniParameterChoice* InterpolationParentParm;

};

class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{
    TArray<class UHoudiniParameterRampFloatPoint*> Points;
    TArray<class UHoudiniParameterRampFloatPoint*> CachedPoints;
    TArray<float> DefaultPositions;
    TArray<float> DefaultValues;
    TArray<int32> DefaultChoices;
    int32 NumDefaultPoints;
    bool bCaching;
    TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;

};

class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{
    TArray<class UHoudiniParameterRampColorPoint*> Points;
    bool bCaching;
    TArray<class UHoudiniParameterRampColorPoint*> CachedPoints;
    TArray<float> DefaultPositions;
    TArray<FLinearColor> DefaultValues;
    TArray<int32> DefaultChoices;
    int32 NumDefaultPoints;
    TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;

};

class UHoudiniParameterSeparator : public UHoudiniParameter
{
};

class UHoudiniParameterString : public UHoudiniParameter
{
    TArray<FString> Values;
    TArray<FString> DefaultValues;
    TArray<class UObject*> ChosenAssets;
    bool bIsAssetRef;

};

class UHoudiniParameterToggle : public UHoudiniParameter
{
    TArray<int32> Values;
    TArray<int32> DefaultValues;

};

struct FOutputActorOwner
{
    class AActor* OutputActor;

};

struct FTOPWorkResultObject
{
    FString Name;
    FString FilePath;
    EPDGWorkResultState State;
    int32 WorkItemResultInfoIndex;
    TArray<class UHoudiniOutput*> ResultOutputs;
    bool bAutoBakedSinceLastLoad;
    FOutputActorOwner OutputActorOwner;

};

struct FTOPWorkResult
{
    int32 WorkItemIndex;
    int32 WorkItemID;
    TArray<FTOPWorkResultObject> ResultObjects;

};

struct FHoudiniPDGWorkResultObjectBakedOutput
{
    TArray<FHoudiniBakedOutput> BakedOutputs;

};

struct FWorkItemTallyBase
{
};

struct FWorkItemTally : public FWorkItemTallyBase
{
    TSet<int32> AllWorkItems;
    TSet<int32> WaitingWorkItems;
    TSet<int32> ScheduledWorkItems;
    TSet<int32> CookingWorkItems;
    TSet<int32> CookedWorkItems;
    TSet<int32> ErroredWorkItems;
    TSet<int32> CookCancelledWorkItems;

};

struct FAggregatedWorkItemTally : public FWorkItemTallyBase
{
    int32 TotalWorkItems;
    int32 WaitingWorkItems;
    int32 ScheduledWorkItems;
    int32 CookingWorkItems;
    int32 CookedWorkItems;
    int32 ErroredWorkItems;
    int32 CookCancelledWorkItems;

};

class UTOPNode : public UObject
{
    int32 NodeId;
    FString NodeName;
    FString NodePath;
    FString ParentName;
    class UObject* WorkResultParent;
    TArray<FTOPWorkResult> WorkResult;
    bool bHidden;
    bool bAutoLoad;
    EPDGNodeState NodeState;
    bool bCachedHaveNotLoadedWorkResults;
    bool bCachedHaveLoadedWorkResults;
    bool bHasChildNodes;
    TSet<FString> ClearedLandscapeLayers;
    bool bShow;
    TMap<class FString, class FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;
    FWorkItemTally WorkItemTally;
    FAggregatedWorkItemTally AggregatedWorkItemTally;
    bool bHasReceivedCookCompleteEvent;
    FOutputActorOwner OutputActorOwner;

};

class UTOPNetwork : public UObject
{
    int32 NodeId;
    FString NodeName;
    FString NodePath;
    TArray<class UTOPNode*> AllTOPNodes;
    int32 SelectedTOPIndex;
    FString ParentName;
    bool bShowResults;
    bool bAutoLoadResults;

};

class UHoudiniPDGAssetLink : public UObject
{
    FString AssetName;
    FString AssetNodePath;
    int32 AssetId;
    TArray<class UTOPNetwork*> AllTOPNetworks;
    int32 SelectedTOPNetworkIndex;
    EPDGLinkState LinkState;
    bool bAutoCook;
    bool bUseTOPNodeFilter;
    bool bUseTOPOutputFilter;
    FString TOPNodeFilter;
    FString TOPOutputFilter;
    int32 NumWorkitems;
    FAggregatedWorkItemTally WorkItemTally;
    FString OutputCachePath;
    bool bNeedsUIRefresh;
    class AActor* OutputParentActor;
    FDirectoryPath BakeFolder;

};

class UHoudiniRuntimeSettings : public UObject
{
    TEnumAsByte<EHoudiniRuntimeSettingsSessionType> SessionType;
    FString ServerHost;
    int32 ServerPort;
    FString ServerPipeName;
    bool bStartAutomaticServer;
    float AutomaticServerTimeout;
    bool bSyncWithHoudiniCook;
    bool bCookUsingHoudiniTime;
    bool bSyncViewport;
    bool bSyncHoudiniViewport;
    bool bSyncUnrealViewport;
    bool bShowMultiAssetDialog;
    bool bPreferHdaMemoryCopyOverHdaSourceFile;
    bool bPauseCookingOnStart;
    bool bDisplaySlateCookingNotifications;
    FString DefaultTemporaryCookFolder;
    FString DefaultBakeFolder;
    bool MarshallingLandscapesUseDefaultUnrealScaling;
    bool MarshallingLandscapesUseFullResolution;
    bool MarshallingLandscapesForceMinMaxValues;
    float MarshallingLandscapesForcedMinValue;
    float MarshallingLandscapesForcedMaxValue;
    bool bAddRotAndScaleAttributesOnCurves;
    bool bUseLegacyInputCurves;
    float MarshallingSplineResolution;
    bool bEnableProxyStaticMesh;
    bool bShowDefaultMesh;
    bool bEnableProxyStaticMeshRefinementByTimer;
    float ProxyMeshAutoRefineTimeoutSeconds;
    bool bEnableProxyStaticMeshRefinementOnPreSaveWorld;
    bool bEnableProxyStaticMeshRefinementOnPreBeginPIE;
    uint8 bDoubleSidedGeometry;
    class UPhysicalMaterial* PhysMaterial;
    FBodyInstance DefaultBodyInstance;
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;
    int32 LightMapResolution;
    float LpvBiasMultiplier;
    float GeneratedDistanceFieldResolutionScale;
    FWalkableSlopeOverride WalkableSlopeOverride;
    int32 LightMapCoordinateIndex;
    uint8 bUseMaximumStreamingTexelRatio;
    float StreamingDistanceMultiplier;
    class UFoliageType_InstancedStaticMesh* FoliageDefaultSettings;
    TArray<class UAssetUserData*> AssetUserData;
    bool bUseFullPrecisionUVs;
    int32 SrcLightmapIndex;
    int32 DstLightmapIndex;
    int32 MinLightmapResolution;
    bool bRemoveDegenerates;
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> GenerateLightmapUVsFlag;
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeNormalsFlag;
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeTangentsFlag;
    bool bUseMikkTSpace;
    bool bBuildAdjacencyBuffer;
    uint8 bComputeWeightedNormals;
    uint8 bBuildReversedIndexBuffer;
    uint8 bUseHighPrecisionTangentBasis;
    float DistanceFieldResolutionScale;
    uint8 bGenerateDistanceFieldAsIfTwoSided;
    uint8 bSupportFaceRemap;
    bool bPDGAsyncCommandletImportEnabled;
    bool bEnableBackwardCompatibility;
    bool bAutomaticLegacyHDARebuild;
    bool bUseCustomHoudiniLocation;
    FDirectoryPath CustomHoudiniLocation;
    TEnumAsByte<EHoudiniExecutableType> HoudiniExecutable;
    int32 CookingThreadStackSize;
    FString HoudiniEnvironmentFiles;
    FString OtlSearchPath;
    FString DsoSearchPath;
    FString ImageDsoSearchPath;
    FString AudioDsoSearchPath;

};

class UHoudiniSplineComponent : public USceneComponent
{
    TArray<FTransform> CurvePoints;
    TArray<FVector> DisplayPoints;
    TArray<int32> DisplayPointIndexDivider;
    FString HoudiniSplineName;
    bool bClosed;
    bool bReversed;
    int32 CurveOrder;
    bool bIsHoudiniSplineVisible;
    EHoudiniCurveType CurveType;
    EHoudiniCurveMethod CurveMethod;
    EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization;
    bool bIsOutputCurve;
    bool bCookOnCurveChanged;
    bool bIsLegacyInputCurve;
    bool bHasChanged;
    bool bNeedsToTriggerUpdate;
    bool bIsInputCurve;
    bool bIsEditableOutputCurve;
    int32 NodeId;
    FString PartName;

};

class UHoudiniStaticMesh : public UObject
{
    bool bHasNormals;
    bool bHasTangents;
    bool bHasColors;
    uint32 NumUVLayers;
    bool bHasPerFaceMaterials;
    TArray<FVector> VertexPositions;
    TArray<FIntVector> TriangleIndices;
    TArray<FColor> VertexInstanceColors;
    TArray<FVector> VertexInstanceNormals;
    TArray<FVector> VertexInstanceUTangents;
    TArray<FVector> VertexInstanceVTangents;
    TArray<FVector2D> VertexInstanceUVs;
    TArray<int32> MaterialIDsPerTriangle;
    TArray<FStaticMaterial> StaticMaterials;

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
};

class UHoudiniStaticMeshComponent : public UMeshComponent
{
    class UHoudiniStaticMesh* Mesh;
    FBox LocalBounds;
    bool bHoudiniIconVisible;

    void SetMesh(class UHoudiniStaticMesh* InMesh);
    void SetHoudiniIconVisible(bool bInHoudiniIconVisible);
    void NotifyMeshUpdated();
    bool IsHoudiniIconVisible();
    class UHoudiniStaticMesh* GetMesh();
};

class IHoudiniAssetStateEvents : public IInterface
{
};

struct FHoudiniAssetBlueprintOutput
{
    int32 OutputIndex;
    FHoudiniOutputObject OutputObject;

};

struct FHoudiniAssetBlueprintInstanceData : public FActorComponentInstanceData
{
    class UHoudiniAsset* HoudiniAsset;
    int32 AssetId;
    EHoudiniAssetState AssetState;
    uint32 SubAssetIndex;
    uint32 AssetCookCount;
    bool bHasBeenLoaded;
    bool bHasBeenDuplicated;
    bool bPendingDelete;
    bool bRecookRequested;
    bool bRebuildRequested;
    bool bEnableCooking;
    bool bForceNeedUpdate;
    bool bLastCookSuccess;
    FGuid ComponentGUID;
    FGuid HapiGUID;
    bool bRegisteredComponentTemplate;
    FString SourceName;
    TMap<class FHoudiniOutputObjectIdentifier, class FHoudiniAssetBlueprintOutput> Outputs;
    TArray<class UHoudiniInput*> Inputs;

};

struct FHoudiniGenericAttribute
{
    FString AttributeName;
    EAttribStorageType AttributeType;
    EAttribOwner AttributeOwner;
    int32 AttributeCount;
    int32 AttributeTupleSize;
    TArray<double> DoubleValues;
    TArray<int64> IntValues;
    TArray<FString> StringValues;

};

struct FHoudiniGenericAttributeChangedProperty
{
    class UObject* Object;

};

struct FHoudiniCurveInfo
{
};

struct FHoudiniVolumeInfo
{
};

struct FHoudiniPartInfo
{
};

struct FHoudiniGeoInfo
{
};

struct FHoudiniObjectInfo
{
};

struct FHoudiniSplineComponentInstanceData : public FActorComponentInstanceData
{
    TArray<FTransform> CurvePoints;
    TArray<FVector> DisplayPoints;
    TArray<int32> DisplayPointIndexDivider;

};

#endif
