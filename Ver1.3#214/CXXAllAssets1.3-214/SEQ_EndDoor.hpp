#ifndef UE4SS_SDK_SEQ_EndDoor_HPP
#define UE4SS_SDK_SEQ_EndDoor_HPP

class ASEQ_EndDoor_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool FirstOpen;                                                                   // 0x0270 (size: 0x1)
    bool SecondOpen;                                                                  // 0x0271 (size: 0x1)
    class ABP_SewerDoorBigRoom_C* MainDoor;                                           // 0x0278 (size: 0x8)
    class ASEQ_Deactivator_C* DeactivatorLeft;                                        // 0x0280 (size: 0x8)
    class ASEQ_Deactivator_C* DeactivatorRight;                                       // 0x0288 (size: 0x8)
    bool CheckpointActivated;                                                         // 0x0290 (size: 0x1)

    void LogicTrigger();
    void MainDoorOpen();
    void ExecuteUbergraph_SEQ_EndDoor(int32 EntryPoint);
}; // Size: 0x291

#endif
