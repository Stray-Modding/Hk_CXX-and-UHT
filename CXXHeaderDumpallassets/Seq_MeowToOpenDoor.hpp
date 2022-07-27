#ifndef UE4SS_SDK_Seq_MeowToOpenDoor_HPP
#define UE4SS_SDK_Seq_MeowToOpenDoor_HPP

class ASeq_MeowToOpenDoor_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UCOMP_CatButtonGeneric_C* COMP_CatButtonGeneric;                            // 0x0270 (size: 0x8)
    class AActor* Door;                                                               // 0x0278 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0280 (size: 0x8)
    class AActor* GoBackPosition;                                                     // 0x0288 (size: 0x8)
    class AActor* DoorPosition;                                                       // 0x0290 (size: 0x8)
    bool InSequence;                                                                  // 0x0298 (size: 0x1)
    class ACACA_CatButtonTrigger_C* CatTriggerOut;                                    // 0x02A0 (size: 0x8)
    class ACACA_CatButtonTrigger_C* CatTriggerIn;                                     // 0x02A8 (size: 0x8)
    bool WaitForCat;                                                                  // 0x02B0 (size: 0x1)
    class ATriggerZone_C* TriggerZoneIn;                                              // 0x02B8 (size: 0x8)
    class ATriggerZone_C* TriggerZoneOut;                                             // 0x02C0 (size: 0x8)

    void GoOpenDoor();
    void CloseDoorAndGoBackToWork();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Seq_MeowToOpenDoor(int32 EntryPoint);
}; // Size: 0x2C8

#endif
