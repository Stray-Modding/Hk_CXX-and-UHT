#ifndef UE4SS_SDK_BP_CameraThirdPersonModifierZone_HPP
#define UE4SS_SDK_BP_CameraThirdPersonModifierZone_HPP

class ABP_CameraThirdPersonModifierZone_C : public ACameraThirdPersonModifier
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)
    class UCustomMeshComponent* CustomMesh;                                           // 0x02E0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02E8 (size: 0x8)
    class UArrowComponent* YawConstraintArrow;                                        // 0x02F0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02F8 (size: 0x8)
    bool RelativeOffsetEdition;                                                       // 0x0300 (size: 0x1)
    FVector RelativeOffset;                                                           // 0x0304 (size: 0xC)

    void Init Custom Mesh(bool Enabled, FVector Offset);
    void UserConstructionScript();
    void OnEnabled();
    void OnDisabled();
    void ExecuteUbergraph_BP_CameraThirdPersonModifierZone(int32 EntryPoint);
}; // Size: 0x310

#endif
