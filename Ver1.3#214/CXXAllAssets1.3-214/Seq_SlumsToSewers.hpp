#ifndef UE4SS_SDK_Seq_SlumsToSewers_HPP
#define UE4SS_SDK_Seq_SlumsToSewers_HPP

class ASeq_SlumsToSewers_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ADial_Momo_OnBoat_C* dial momo;                                             // 0x0270 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x0278 (size: 0x8)
    class AActor* CatPos;                                                             // 0x0280 (size: 0x8)
    class ABP_SewerBark_C* sewerbark;                                                 // 0x0288 (size: 0x8)
    class AActor* barktarget;                                                         // 0x0290 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera;                                      // 0x0298 (size: 0x8)
    class AActor* CatBarkDial_POS;                                                    // 0x02A0 (size: 0x8)
    class AActor* CatMoveZone;                                                        // 0x02A8 (size: 0x8)
    bool CatDontNeedToMove;                                                           // 0x02B0 (size: 0x1)
    class AActor* CatBarkStart_POS;                                                   // 0x02B8 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA99B01895();
    void Tick_6246EF4646E19036986D72BA99B01895(float Ratio);
    void LogicTrigger();
    void move boat in sewers();
    void BndEvt__Seq_SlumsToSewers_CatMoveZone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_Seq_SlumsToSewers(int32 EntryPoint);
}; // Size: 0x2C0

#endif
