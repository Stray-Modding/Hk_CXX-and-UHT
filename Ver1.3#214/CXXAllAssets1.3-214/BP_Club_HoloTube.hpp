#ifndef UE4SS_SDK_BP_Club_HoloTube_HPP
#define UE4SS_SDK_BP_Club_HoloTube_HPP

class ABP_Club_HoloTube_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class USceneComponent* Platform_Pivot;                                            // 0x0380 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0388 (size: 0x8)
    class UStaticMeshComponent* MidTown_Club_Stage_Podium_Ring_Rot;                   // 0x0390 (size: 0x8)
    class UStaticMeshComponent* MidTown_Club_Stage_Podium;                            // 0x0398 (size: 0x8)
    class USceneComponent* Pivot_Ring;                                                // 0x03A0 (size: 0x8)
    class USkeletalMeshComponent* Holo_Body;                                          // 0x03A8 (size: 0x8)
    class USkeletalMeshComponent* Holo_Head;                                          // 0x03B0 (size: 0x8)
    class ABP_Droid_C* Droid_Move;                                                    // 0x03B8 (size: 0x8)
    class AActor* PointDJmoveTo;                                                      // 0x03C0 (size: 0x8)
    class ASeq_Club_MissingLever_C* Seq_Lever;                                        // 0x03C8 (size: 0x8)
    class ABP_SwitchWithJump_C* Lever;                                                // 0x03D0 (size: 0x8)
    class AActor* Moving_plaftorm;                                                    // 0x03D8 (size: 0x8)
    class UAnimSequence* Anim_Holo_Dance;                                             // 0x03E0 (size: 0x8)
    float Preview_movement_1;                                                         // 0x03E8 (size: 0x4)
    float Preview_movement_2;                                                         // 0x03EC (size: 0x4)
    float Preview_movement_3;                                                         // 0x03F0 (size: 0x4)
    bool StartRot;                                                                    // 0x03F4 (size: 0x1)
    FTransform Droid_Trans_start;                                                     // 0x0400 (size: 0x30)
    class UAnimSequence* Droid_idle_Start;                                            // 0x0430 (size: 0x8)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA514F425E();
    void Tick_6246EF4646E19036986D72BA514F425E(float Ratio);
    void ReceiveBeginPlay();
    void UpdateMovingElem();
    void OnStartMovement_Event_0(bool IsOpen);
    void OnEndMovement_Event_0(bool IsOpen);
    void ReceiveTick(float DeltaSeconds);
    void SetDroidHoloAnim(class UAnimationAsset* Animation Data Anim To Play);
    void ExecuteUbergraph_BP_Club_HoloTube(int32 EntryPoint);
}; // Size: 0x438

#endif
