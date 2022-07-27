#ifndef UE4SS_SDK_Seq_BarCineReturn_HPP
#define UE4SS_SDK_Seq_BarCineReturn_HPP

class ASeq_BarCineReturn_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x0270 (size: 0x8)
    class AActor* PosCloseToTabouret;                                                 // 0x0278 (size: 0x8)
    class AActor* PosOnTabouret;                                                      // 0x0280 (size: 0x8)
    class ADial_Momo_BarCommunication_C* Dial_BarReturn;                              // 0x0288 (size: 0x8)
    class ABP_Droid_C* DroidDeLaMachine;                                              // 0x0290 (size: 0x8)
    class AActor* Tabouret;                                                           // 0x0298 (size: 0x8)
    class AActor* Clavier;                                                            // 0x02A0 (size: 0x8)
    class AActor* Ecran;                                                              // 0x02A8 (size: 0x8)
    bool CatIsOnTabouret;                                                             // 0x02B0 (size: 0x1)
    class ABP_SplineRail_C* TabouretSpline;                                           // 0x02B8 (size: 0x8)
    class ABP_Layer_C* layerbarcine;                                                  // 0x02C0 (size: 0x8)
    class ABP_Droid_C* DroidAccoudé;                                                  // 0x02C8 (size: 0x8)
    class ALevelSequenceActor* Bar_Sequence;                                          // 0x02D0 (size: 0x8)
    class ALevelSequenceActor* Out Actor;                                             // 0x02D8 (size: 0x8)
    class AActor* JukeboxPos;                                                         // 0x02E0 (size: 0x8)
    class AActor* JukeboxPos_02;                                                      // 0x02E8 (size: 0x8)
    class AActor* CatTurn;                                                            // 0x02F0 (size: 0x8)
    class UAudioComponent* Screen_On_Loop;                                            // 0x02F8 (size: 0x8)
    bool BarWindowMustBeClosed;                                                       // 0x0300 (size: 0x1)
    FName LookAtId00;                                                                 // 0x0304 (size: 0x8)
    class AActor* DronePos_TV;                                                        // 0x0310 (size: 0x8)

    void OnStartSequence();
    void OnStartFromCheckpoint();
    void LogicTrigger();
    void SetUpBarReturn();
    void CatOnStool();
    void BndEvt__Seq_BarCineReturn_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Seq_BarCineReturn(int32 EntryPoint);
}; // Size: 0x318

#endif
