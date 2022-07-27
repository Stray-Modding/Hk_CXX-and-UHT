#ifndef UE4SS_SDK_Seq_Meet_OldMonk_HPP
#define UE4SS_SDK_Seq_Meet_OldMonk_HPP

class ASeq_Meet_OldMonk_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class ALevelSequenceActor* Cine;                                                  // 0x0278 (size: 0x8)
    class AActor* Droid;                                                              // 0x0280 (size: 0x8)
    class AActor* Target_Lookat;                                                      // 0x0288 (size: 0x8)
    class ADial_SLUM_ancient_C* Dialogue;                                             // 0x0290 (size: 0x8)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Seq_Meet_OldMonk(int32 EntryPoint);
}; // Size: 0x298

#endif
