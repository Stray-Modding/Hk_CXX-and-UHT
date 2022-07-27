#ifndef UE4SS_SDK_BP_SewerDoorBigRoom_HPP
#define UE4SS_SDK_BP_SewerDoorBigRoom_HPP

class ABP_SewerDoorBigRoom_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UAudioComponent* Open_VIBE;                                                 // 0x0380 (size: 0x8)
    class UStaticMeshComponent* RightEngine;                                          // 0x0388 (size: 0x8)
    class UStaticMeshComponent* LeftEngine;                                           // 0x0390 (size: 0x8)
    class UStaticMeshComponent* LeftStick;                                            // 0x0398 (size: 0x8)
    class UStaticMeshComponent* RightStick;                                           // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* LeftWheel;                                            // 0x03A8 (size: 0x8)
    class UStaticMeshComponent* RightWheel;                                           // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_05;                                     // 0x03B8 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_06;                                     // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* SideBar2Left;                                         // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* SideBar2Right;                                        // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* SideBar1Left;                                         // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* SideBar1Right;                                        // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_02;                                     // 0x03E8 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_02_04;                                  // 0x03F0 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_02_03;                                  // 0x03F8 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_02_02;                                  // 0x0400 (size: 0x8)
    FTransform SideBar1LeftTransform;                                                 // 0x0410 (size: 0x30)
    FTransform SideBar1RightTransform;                                                // 0x0440 (size: 0x30)
    FTransform SideBar2LeftTransform;                                                 // 0x0470 (size: 0x30)
    FTransform SideBar2RightTransform;                                                // 0x04A0 (size: 0x30)

    void Complete_6246EF4646E19036986D72BAA9715C7A();
    void Tick_6246EF4646E19036986D72BAA9715C7A(float Ratio);
    void Complete_6246EF4646E19036986D72BAB8727FAD();
    void Tick_6246EF4646E19036986D72BAB8727FAD(float Ratio);
    void Complete_6246EF4646E19036986D72BA122F3A58();
    void Tick_6246EF4646E19036986D72BA122F3A58(float Ratio);
    void Complete_6246EF4646E19036986D72BA5C1C512A();
    void Tick_6246EF4646E19036986D72BA5C1C512A(float Ratio);
    void Complete_6246EF4646E19036986D72BAFA3410EB();
    void Tick_6246EF4646E19036986D72BAFA3410EB(float Ratio);
    void Complete_6246EF4646E19036986D72BAB9E1CC97();
    void Tick_6246EF4646E19036986D72BAB9E1CC97(float Ratio);
    void Complete_6246EF4646E19036986D72BA9841120E();
    void Tick_6246EF4646E19036986D72BA9841120E(float Ratio);
    void Complete_6246EF4646E19036986D72BA59A4AB02();
    void Tick_6246EF4646E19036986D72BA59A4AB02(float Ratio);
    void OpenFirstSideBar();
    void OpenSecondSideBar();
    void ReceiveBeginPlay();
    void OnStartMovement_Event_0(bool IsOpen);
    void ExecuteUbergraph_BP_SewerDoorBigRoom(int32 EntryPoint);
}; // Size: 0x4D0

#endif
