#ifndef UE4SS_SDK_BP_Props_Grabbable_Droid_Head_HPP
#define UE4SS_SDK_BP_Props_Grabbable_Droid_Head_HPP

class ABP_Props_Grabbable_Droid_Head_C : public ABP_props_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0280 (size: 0x8)
    class USkeletalMeshComponent* Heads;                                              // 0x0288 (size: 0x8)
    class USceneComponent* Pivot;                                                     // 0x0290 (size: 0x8)
    TEnumAsByte<DroidHead_List> Head;                                                 // 0x0298 (size: 0x1)
    class UMaterialInterface* Head_Screen;                                            // 0x02A0 (size: 0x8)
    TArray<class USkeletalMesh*> Head_Meshes;                                         // 0x02A8 (size: 0x10)
    class UMaterialInterface* Head_Mat;                                               // 0x02B8 (size: 0x8)

    void Drop();
    void ExecuteUbergraph_BP_Props_Grabbable_Droid_Head(int32 EntryPoint);
}; // Size: 0x2C0

#endif
