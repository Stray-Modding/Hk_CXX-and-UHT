#ifndef UE4SS_SDK_MagicLeapPlanes_HPP
#define UE4SS_SDK_MagicLeapPlanes_HPP

#include "MagicLeapPlanes_enums.hpp"

struct FMagicLeapPlanesQuery
{
    TArray<EMagicLeapPlaneQueryFlags> Flags;
    class UBoxComponent* SearchVolume;
    int32 MaxResults;
    float MinHoleLength;
    float MinPlaneArea;
    FVector SearchVolumePosition;
    FQuat SearchVolumeOrientation;
    FVector SearchVolumeExtents;
    float SimilarityThreshold;
    bool bSearchVolumeTrackingSpace;
    bool bResultTrackingSpace;

};

struct FMagicLeapPlaneResult
{
    FVector PlanePosition;
    FRotator PlaneOrientation;
    FRotator ContentOrientation;
    FVector2D PlaneDimensions;
    TArray<EMagicLeapPlaneQueryFlags> PlaneFlags;
    FGuid ID;
    FGuid InnerID;

};

struct FMagicLeapPolygon
{
    TArray<FVector> Vertices;

};

struct FMagicLeapPlaneBoundary
{
    FMagicLeapPolygon Polygon;
    TArray<FMagicLeapPolygon> Holes;

};

struct FMagicLeapPlaneBoundaries
{
    FGuid ID;
    TArray<FMagicLeapPlaneBoundary> Boundaries;

};

class UMagicLeapPlanesComponent : public USceneComponent
{
    TArray<EMagicLeapPlaneQueryFlags> QueryFlags;
    class UBoxComponent* SearchVolume;
    int32 MaxResults;
    float MinHolePerimeter;
    float MinPlaneArea;
    EMagicLeapPlaneQueryType QueryType;
    float SimilarityThreshold;
    FMagicLeapPlanesComponentOnPlanesQueryResult OnPlanesQueryResult;
    void MagicLeapPlanesResultDelegateMulti(const bool bSuccess, const TArray<FMagicLeapPlaneResult>& Planes, const TArray<FMagicLeapPlaneBoundaries>& Polygons);
    FMagicLeapPlanesComponentOnPersistentPlanesQueryResult OnPersistentPlanesQueryResult;
    void MagicLeapPersistentPlanesResultDelegateMulti(const bool bSuccess, const FGuid& QueryHandle, const EMagicLeapPlaneQueryType QueryType, const TArray<FMagicLeapPlaneResult>& NewPlanes, const TArray<FGuid>& RemovedPlaneIDs, const TArray<FMagicLeapPlaneBoundaries>& NewPolygons, const TArray<FGuid>& RemovedPolygonIDs);

    bool RequestPlanesAsync();
};

class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ReorderPlaneFlags(const TArray<EMagicLeapPlaneQueryFlags>& InPriority, const TArray<EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>& OutReorderedFlags);
    bool RemovePersistentQuery(FGuid Handle);
    void RemoveFlagsNotInQuery(const TArray<EMagicLeapPlaneQueryFlags>& InQueryFlags, const TArray<EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<EMagicLeapPlaneQueryFlags>& OutFlags);
    bool PlanesQueryBeginAsync(const FMagicLeapPlanesQuery& Query, const FPlanesQueryBeginAsyncResultDelegate& ResultDelegate);
    bool PlanesPersistentQueryBeginAsync(const FMagicLeapPlanesQuery& Query, const FGuid& Handle, const FPlanesPersistentQueryBeginAsyncResultDelegate& ResultDelegate);
    bool IsTrackerValid();
    FTransform GetContentScale(const class AActor* ContentActor, const FMagicLeapPlaneResult& PlaneResult);
    bool DestroyTracker();
    bool CreateTracker();
    FGuid AddPersistentQuery(EMagicLeapPlaneQueryType PersistentQueryType);
};

#endif
