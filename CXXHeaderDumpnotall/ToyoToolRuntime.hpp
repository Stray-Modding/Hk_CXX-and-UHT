#ifndef UE4SS_SDK_ToyoToolRuntime_HPP
#define UE4SS_SDK_ToyoToolRuntime_HPP

#include "ToyoToolRuntime_enums.hpp"

struct FToyoSplineMeshData
{
    TArray<class UStaticMesh*> MeshesList;
    EToyoSplineMeshAxis ForwardAxis;
    bool bIsBig;
    float MaxDistance;

};

struct FToyoJointData
{
    class UStaticMesh* Mesh;
    FRotator RotationOffset;
    FVector Scale;

};

class AToyoActor : public AActor
{
    float Scale;
    float MaxRadius;
    float SnapDistance;
    EToyoSegmentLengthCalculationMode SegmentLengthCalcMode;
    EToyoSplineMeshUpDefinitionType SplineMeshUpDefinition;
    FVector CustomSplineUpDir;
    bool bUseSplineRoll;
    float RollScale;
    bool bSmoothInterpRollScale;
    bool bEnableCollision;
    FName CollisionProfileName;
    class UPhysicalMaterial* PhysicalMaterial;
    bool bGeneratesOverlapEvents;
    bool bGeneratesHitEvents;
    FToyoSplineMeshData Small;
    FToyoSplineMeshData Medium;
    FToyoSplineMeshData Big;
    TArray<class UMaterialInterface*> ToyoMaterials;
    TArray<FToyoJointData> JointsData;
    TArray<class UMaterialInterface*> JointMaterials;
    TArray<FToyoJointData> StartEndData;
    TArray<class UMaterialInterface*> StartEndMaterials;
    FRotator StartFlipRotation;
    FRotator EndFlipRotation;
    TArray<FToyoJointData> PropsData;
    TArray<class UMaterialInterface*> PropsMaterials;
    class USceneComponent* DummyRoot;
    class UToyoSplineComponent* SplineComponent;
    TArray<class UToyoSplineMeshComponent*> ToyoSplineMeshCompsList;
    TArray<class UToyoJointMeshComponent*> JointMeshCompsList;

    void CreateToyoMesh();
    void ClearOldData();
};

class UToyoJointMeshComponent : public UStaticMeshComponent
{
    int32 MeshIndex;

};

struct FToyoSplinePointData
{
    EToyoPointMeshType MeshType;
    int32 ToyoMeshIndex;
    int32 JointMeshIndex;
    int32 ToyoMaterialIndex;
    int32 JointMaterialIndex;
    bool bToyoCollisionEnabled;
    bool bJointCollisionEnabled;
    bool bShowToyoMesh;
    bool bShowJointMesh;
    bool bEnableSnapping;

};

class UToyoSplineComponent : public USplineComponent
{
    TArray<FToyoSplinePointData> ToyoSplinePointsData;

};

class UToyoSplineMeshComponent : public USplineMeshComponent
{
    int32 MeshIndex;

};

class UToyoToolRuntimeSettings : public UObject
{
    TSoftObjectPtr<UPhysicalMaterial> DefaultToyoPhysicalMaterial;
    FName DefaultCollisionProfileName;

};

#endif
