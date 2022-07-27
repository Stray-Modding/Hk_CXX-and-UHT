#ifndef UE4SS_SDK_ToyoToolRuntime_HPP
#define UE4SS_SDK_ToyoToolRuntime_HPP

#include "ToyoToolRuntime_enums.hpp"

struct FToyoSplineMeshData
{
    TArray<class UStaticMesh*> MeshesList;                                            // 0x0000 (size: 0x10)
    EToyoSplineMeshAxis ForwardAxis;                                                  // 0x0010 (size: 0x1)
    bool bIsBig;                                                                      // 0x0011 (size: 0x1)
    float MaxDistance;                                                                // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FToyoJointData
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    FRotator RotationOffset;                                                          // 0x0008 (size: 0xC)
    FVector Scale;                                                                    // 0x0014 (size: 0xC)

}; // Size: 0x20

class AToyoActor : public AActor
{
    float Scale;                                                                      // 0x0228 (size: 0x4)
    float MaxRadius;                                                                  // 0x022C (size: 0x4)
    float SnapDistance;                                                               // 0x0230 (size: 0x4)
    EToyoSegmentLengthCalculationMode SegmentLengthCalcMode;                          // 0x0234 (size: 0x1)
    EToyoSplineMeshUpDefinitionType SplineMeshUpDefinition;                           // 0x0235 (size: 0x1)
    FVector CustomSplineUpDir;                                                        // 0x0238 (size: 0xC)
    bool bUseSplineRoll;                                                              // 0x0244 (size: 0x1)
    float RollScale;                                                                  // 0x0248 (size: 0x4)
    bool bSmoothInterpRollScale;                                                      // 0x024C (size: 0x1)
    bool bEnableCollision;                                                            // 0x024D (size: 0x1)
    FName CollisionProfileName;                                                       // 0x0250 (size: 0x8)
    class UPhysicalMaterial* PhysicalMaterial;                                        // 0x0258 (size: 0x8)
    bool bGeneratesOverlapEvents;                                                     // 0x0260 (size: 0x1)
    bool bGeneratesHitEvents;                                                         // 0x0261 (size: 0x1)
    FToyoSplineMeshData Small;                                                        // 0x0268 (size: 0x18)
    FToyoSplineMeshData Medium;                                                       // 0x0280 (size: 0x18)
    FToyoSplineMeshData Big;                                                          // 0x0298 (size: 0x18)
    TArray<class UMaterialInterface*> ToyoMaterials;                                  // 0x02B0 (size: 0x10)
    TArray<FToyoJointData> JointsData;                                                // 0x02C0 (size: 0x10)
    TArray<class UMaterialInterface*> JointMaterials;                                 // 0x02D0 (size: 0x10)
    TArray<FToyoJointData> StartEndData;                                              // 0x02E0 (size: 0x10)
    TArray<class UMaterialInterface*> StartEndMaterials;                              // 0x02F0 (size: 0x10)
    FRotator StartFlipRotation;                                                       // 0x0300 (size: 0xC)
    FRotator EndFlipRotation;                                                         // 0x030C (size: 0xC)
    TArray<FToyoJointData> PropsData;                                                 // 0x0318 (size: 0x10)
    TArray<class UMaterialInterface*> PropsMaterials;                                 // 0x0328 (size: 0x10)
    class USceneComponent* DummyRoot;                                                 // 0x0338 (size: 0x8)
    class UToyoSplineComponent* SplineComponent;                                      // 0x0340 (size: 0x8)
    TArray<class UToyoSplineMeshComponent*> ToyoSplineMeshCompsList;                  // 0x0348 (size: 0x10)
    TArray<class UToyoJointMeshComponent*> JointMeshCompsList;                        // 0x0358 (size: 0x10)

    void CreateToyoMesh();
    void ClearOldData();
}; // Size: 0x368

class UToyoJointMeshComponent : public UStaticMeshComponent
{
    int32 MeshIndex;                                                                  // 0x04E0 (size: 0x4)

}; // Size: 0x4F0

struct FToyoSplinePointData
{
    EToyoPointMeshType MeshType;                                                      // 0x0000 (size: 0x1)
    int32 ToyoMeshIndex;                                                              // 0x0004 (size: 0x4)
    int32 JointMeshIndex;                                                             // 0x0008 (size: 0x4)
    int32 ToyoMaterialIndex;                                                          // 0x000C (size: 0x4)
    int32 JointMaterialIndex;                                                         // 0x0010 (size: 0x4)
    bool bToyoCollisionEnabled;                                                       // 0x0014 (size: 0x1)
    bool bJointCollisionEnabled;                                                      // 0x0015 (size: 0x1)
    bool bShowToyoMesh;                                                               // 0x0016 (size: 0x1)
    bool bShowJointMesh;                                                              // 0x0017 (size: 0x1)
    bool bEnableSnapping;                                                             // 0x0018 (size: 0x1)

}; // Size: 0x1C

class UToyoSplineComponent : public USplineComponent
{
    TArray<FToyoSplinePointData> ToyoSplinePointsData;                                // 0x0548 (size: 0x10)

}; // Size: 0x560

class UToyoSplineMeshComponent : public USplineMeshComponent
{
    int32 MeshIndex;                                                                  // 0x0578 (size: 0x4)

}; // Size: 0x580

class UToyoToolRuntimeSettings : public UObject
{
    TSoftObjectPtr<UPhysicalMaterial> DefaultToyoPhysicalMaterial;                    // 0x0028 (size: 0x28)
    FName DefaultCollisionProfileName;                                                // 0x0050 (size: 0x8)

}; // Size: 0x58

#endif
