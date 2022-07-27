#ifndef UE4SS_SDK_SkelMeshToSpawnAlong_HPP
#define UE4SS_SDK_SkelMeshToSpawnAlong_HPP

struct FSkelMeshToSpawnAlong
{
    class USkeletalMesh* Mesh_51_CE794D5C46E9032710913DB175C95C46;                    // 0x0000 (size: 0x8)
    int32 Amount_14_AB3ACCB543A8B45FE112759415C30A8E;                                 // 0x0008 (size: 0x4)
    FVector Scale_17_04F27EDA46975BCF09325792404719FC;                                // 0x000C (size: 0xC)
    float ScaleRandomizer_47_D49E9C5B458EECEF3C1E078C23525554;                        // 0x0018 (size: 0x4)
    float spawnLengthSection_9_B4B968A14BB878D5AC8D17BC9CDD8EEC;                      // 0x001C (size: 0x4)
    float spawnLengthSectionTolerance_11_C1FB31FE46C753F43A9A79A3B0710F80;            // 0x0020 (size: 0x4)
    int32 minDistanceBetweenMeshes_20_79C72B424C0ACC42FF630A9B9AE702EA;               // 0x0024 (size: 0x4)
    float heightAboveSurface_50_1CACD2E64131FFFF9C6B7C989A46067C;                     // 0x0028 (size: 0x4)
    FRotator Rotation_34_1AD513CD4B492F41E959CE9B44BEB4FD;                            // 0x002C (size: 0xC)
    bool useWorldRotation_41_3970C4BF4B586807AF22D6B70601E235;                        // 0x0038 (size: 0x1)
    FVector minRandomRotation_44_C5993A264ECECFFDAEA007B94543C1AB;                    // 0x003C (size: 0xC)
    FVector maxRandomRotation_23_40F852C84C872A40B5C50AAF3C2471C1;                    // 0x0048 (size: 0xC)
    bool onlyNearSurfaces_25_BC9A521B461BC39914A254AFC54E0C28;                        // 0x0054 (size: 0x1)
    bool onlyMidAir_27_847896C14DCBBEE5CEC2C49306874759;                              // 0x0055 (size: 0x1)

}; // Size: 0x58

#endif
