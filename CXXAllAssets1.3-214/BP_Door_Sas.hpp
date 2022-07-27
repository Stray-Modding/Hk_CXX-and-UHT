#ifndef UE4SS_SDK_BP_Door_Sas_HPP
#define UE4SS_SDK_BP_Door_Sas_HPP

class ABP_Door_Sas_C : public ABP_DoorWindowBase_C
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0378 (size: 0x8)

    void GetSkeletalDoor(class USkeletalMeshComponent*& SkeletalMesh);
}; // Size: 0x380

#endif
