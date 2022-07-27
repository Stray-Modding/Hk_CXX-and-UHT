#ifndef UE4SS_SDK_Seq_Midtown_First_Arrest_HPP
#define UE4SS_SDK_Seq_Midtown_First_Arrest_HPP

class ASeq_Midtown_First_Arrest_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Start;                                                                       // 0x0270 (size: 0x1)
    bool Cine_Done;                                                                   // 0x0271 (size: 0x1)
    class ABP_Droid_C* Droid_Running;                                                 // 0x0278 (size: 0x8)
    class ABP_SENTINEL_Cine_C* Sentinel_Chase;                                        // 0x0280 (size: 0x8)
    class ABP_Droid_C* Droid_Cop;                                                     // 0x0288 (size: 0x8)
    class ABP_Droid_C* Droid_Right_Adult;                                             // 0x0290 (size: 0x8)
    class ABP_Droid_C* Droid_Right_Child;                                             // 0x0298 (size: 0x8)
    class ABP_Droid_C* Droid_Left;                                                    // 0x02A0 (size: 0x8)
    class ABP_Droid_C* Droid_Walking;                                                 // 0x02A8 (size: 0x8)
    class ASeq_Cycle_Base_C* WalkSeq_ToStart;                                         // 0x02B0 (size: 0x8)
    TArray<class ABP_Droid_C*> Droid_Array;                                           // 0x02B8 (size: 0x10)

    void LogicTrigger();
    void Disable arrest();
    void Enable arrest();
    void After_Cine();
    void ExecuteUbergraph_Seq_Midtown_First_Arrest(int32 EntryPoint);
}; // Size: 0x2C8

#endif
