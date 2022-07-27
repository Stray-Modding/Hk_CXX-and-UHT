#ifndef UE4SS_SDK_AnimationCore_HPP
#define UE4SS_SDK_AnimationCore_HPP

#include "AnimationCore_enums.hpp"

class UAnimationDataSourceRegistry : public UObject
{
    TMap<class FName, class TWeakObjectPtr<UObject>> DataSources;                     // 0x0028 (size: 0x50)

}; // Size: 0x78

struct FCCDIKChainLink
{
}; // Size: 0x80

struct FAxis
{
    FVector Axis;                                                                     // 0x0000 (size: 0xC)
    bool bInLocalSpace;                                                               // 0x000C (size: 0x1)

}; // Size: 0x10

struct FConstraintDescriptor
{
    EConstraintType Type;                                                             // 0x0000 (size: 0x1)

}; // Size: 0x10

struct FConstraintData
{
    FConstraintDescriptor Constraint;                                                 // 0x0000 (size: 0x10)
    float Weight;                                                                     // 0x0010 (size: 0x4)
    bool bMaintainOffset;                                                             // 0x0014 (size: 0x1)
    FTransform Offset;                                                                // 0x0020 (size: 0x30)
    FTransform CurrentTransform;                                                      // 0x0050 (size: 0x30)

}; // Size: 0x80

struct FFilterOptionPerAxis
{
    bool bX;                                                                          // 0x0000 (size: 0x1)
    bool bY;                                                                          // 0x0001 (size: 0x1)
    bool bZ;                                                                          // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FConstraintDescriptionEx
{
    FFilterOptionPerAxis AxesFilterOption;                                            // 0x0008 (size: 0x3)

}; // Size: 0x10

struct FAimConstraintDescription : public FConstraintDescriptionEx
{
    FAxis LookAt_Axis;                                                                // 0x0010 (size: 0x10)
    FAxis LookUp_Axis;                                                                // 0x0020 (size: 0x10)
    bool bUseLookUp;                                                                  // 0x0030 (size: 0x1)
    FVector LookUpTarget;                                                             // 0x0034 (size: 0xC)

}; // Size: 0x40

struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
    ETransformConstraintType TransformType;                                           // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FConstraintDescription
{
    bool bTranslation;                                                                // 0x0000 (size: 0x1)
    bool bRotation;                                                                   // 0x0001 (size: 0x1)
    bool bScale;                                                                      // 0x0002 (size: 0x1)
    bool bParent;                                                                     // 0x0003 (size: 0x1)
    FFilterOptionPerAxis TranslationAxes;                                             // 0x0004 (size: 0x3)
    FFilterOptionPerAxis RotationAxes;                                                // 0x0007 (size: 0x3)
    FFilterOptionPerAxis ScaleAxes;                                                   // 0x000A (size: 0x3)

}; // Size: 0xD

struct FTransformConstraint
{
    FConstraintDescription Operator;                                                  // 0x0000 (size: 0xD)
    FName SourceNode;                                                                 // 0x0010 (size: 0x8)
    FName TargetNode;                                                                 // 0x0018 (size: 0x8)
    float Weight;                                                                     // 0x0020 (size: 0x4)
    bool bMaintainOffset;                                                             // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FConstraintOffset
{
    FVector Translation;                                                              // 0x0000 (size: 0xC)
    FQuat Rotation;                                                                   // 0x0010 (size: 0x10)
    FVector Scale;                                                                    // 0x0020 (size: 0xC)
    FTransform Parent;                                                                // 0x0030 (size: 0x30)

}; // Size: 0x60

struct FTransformFilter
{
    FFilterOptionPerAxis TranslationFilter;                                           // 0x0000 (size: 0x3)
    FFilterOptionPerAxis RotationFilter;                                              // 0x0003 (size: 0x3)
    FFilterOptionPerAxis ScaleFilter;                                                 // 0x0006 (size: 0x3)

}; // Size: 0x9

struct FEulerTransform
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FRotator Rotation;                                                                // 0x000C (size: 0xC)
    FVector Scale;                                                                    // 0x0018 (size: 0xC)

}; // Size: 0x24

struct FFABRIKChainLink
{
}; // Size: 0x38

struct FNodeChain
{
    TArray<FName> Nodes;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNodeObject
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FName ParentName;                                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNodeHierarchyData
{
    TArray<FNodeObject> Nodes;                                                        // 0x0000 (size: 0x10)
    TArray<FTransform> Transforms;                                                    // 0x0010 (size: 0x10)
    TMap<FName, int32> NodeNameToIndexMapping;                                        // 0x0020 (size: 0x50)

}; // Size: 0x70

struct FNodeHierarchyWithUserData
{
    FNodeHierarchyData Hierarchy;                                                     // 0x0008 (size: 0x70)

}; // Size: 0x78

struct FTransformNoScale
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FQuat Rotation;                                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

#endif
