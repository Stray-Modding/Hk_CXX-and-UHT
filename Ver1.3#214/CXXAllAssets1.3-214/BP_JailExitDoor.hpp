#ifndef UE4SS_SDK_BP_JailExitDoor_HPP
#define UE4SS_SDK_BP_JailExitDoor_HPP

class ABP_JailExitDoor_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UStaticMeshComponent* RightEngine;                                          // 0x0380 (size: 0x8)
    class UStaticMeshComponent* LeftEngine;                                           // 0x0388 (size: 0x8)
    class UStaticMeshComponent* LeftStick;                                            // 0x0390 (size: 0x8)
    class UStaticMeshComponent* RightStick;                                           // 0x0398 (size: 0x8)
    class UStaticMeshComponent* LeftWheel;                                            // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* RightWheel;                                           // 0x03A8 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_05;                                     // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_06;                                     // 0x03B8 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_02;                                     // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_02_04;                                  // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_02_03;                                  // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_A_02_02;                                  // 0x03D8 (size: 0x8)
    FTransform SideBar1LeftTransform;                                                 // 0x03E0 (size: 0x30)
    FTransform SideBar1RightTransform;                                                // 0x0410 (size: 0x30)
    FTransform SideBar2LeftTransform;                                                 // 0x0440 (size: 0x30)
    FTransform SideBar2RightTransform;                                                // 0x0470 (size: 0x30)

    void Complete_6246EF4646E19036986D72BAB8156AF5();
    void Tick_6246EF4646E19036986D72BAB8156AF5(float Ratio);
    void Complete_6246EF4646E19036986D72BAA495526C();
    void Tick_6246EF4646E19036986D72BAA495526C(float Ratio);
    void Complete_6246EF4646E19036986D72BAF972A10B();
    void Tick_6246EF4646E19036986D72BAF972A10B(float Ratio);
    void Complete_6246EF4646E19036986D72BACFB13F3A();
    void Tick_6246EF4646E19036986D72BACFB13F3A(float Ratio);
    void ReceiveBeginPlay();
    void OnStartMovement_Event_0(bool IsOpen);
    void ExecuteUbergraph_BP_JailExitDoor(int32 EntryPoint);
}; // Size: 0x4A0

#endif
