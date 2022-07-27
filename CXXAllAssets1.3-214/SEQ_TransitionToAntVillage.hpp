#ifndef UE4SS_SDK_SEQ_TransitionToAntVillage_HPP
#define UE4SS_SDK_SEQ_TransitionToAntVillage_HPP

class ASEQ_TransitionToAntVillage_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0270 (size: 0x8)
    TArray<FName> TransitionGroup;                                                    // 0x0278 (size: 0x10)
    class ABP_SewerDoorLarge_C* ecluse;                                               // 0x0288 (size: 0x8)
    class AActor* GrabbedFakeDrone;                                                   // 0x0290 (size: 0x8)
    class AActor* PushableFakeDrone;                                                  // 0x0298 (size: 0x8)
    bool WakeUpDrone;                                                                 // 0x02A0 (size: 0x1)
    class AActor* CatPos;                                                             // 0x02A8 (size: 0x8)
    class ACameraActor* CameraCloseToB12;                                             // 0x02B0 (size: 0x8)
    class ADial_B12_EndSewers_C* DialB12EndSewers;                                    // 0x02B8 (size: 0x8)
    class ACameraActor* CameraDoor;                                                   // 0x02C0 (size: 0x8)
    class UAnimSequence* Animation;                                                   // 0x02C8 (size: 0x8)
    bool StartSeq;                                                                    // 0x02D0 (size: 0x1)
    class ABP_SwitchTrigger_WaitForLoad_C* switchtriggerwaitforload;                  // 0x02D8 (size: 0x8)
    class AActor* CheckpointPosition;                                                 // 0x02E0 (size: 0x8)

    void OnStartSequence();
    void LogicTrigger();
    void OnStartFromCheckpoint();
    void ExecuteUbergraph_SEQ_TransitionToAntVillage(int32 EntryPoint);
}; // Size: 0x2E8

#endif
