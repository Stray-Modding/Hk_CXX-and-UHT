#ifndef UE4SS_SDK_BP_SewerDoorStandard_HPP
#define UE4SS_SDK_BP_SewerDoorStandard_HPP

class ABP_SewerDoorStandard_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_04_03;                                  // 0x0380 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_05;                                     // 0x0388 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_04;                                     // 0x0390 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_04_02;                                  // 0x0398 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_03;                                     // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_03_02;                                  // 0x03A8 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_02;                                     // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_02_04;                                  // 0x03B8 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_02_03;                                  // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_02_02;                                  // 0x03C8 (size: 0x8)

    void InstantOpenAllDoorParts();
    void ExecuteUbergraph_BP_SewerDoorStandard(int32 EntryPoint);
}; // Size: 0x3D0

#endif
