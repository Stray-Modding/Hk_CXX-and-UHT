#ifndef UE4SS_SDK_SEQ_CatFromAntVillage_HPP
#define UE4SS_SDK_SEQ_CatFromAntVillage_HPP

class ASEQ_CatFromAntVillage_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class AActor* camera_Plan1;                                                       // 0x0270 (size: 0x8)
    class AActor* camera_Plan2;                                                       // 0x0278 (size: 0x8)
    class AActor* CatPos_Start;                                                       // 0x0280 (size: 0x8)
    class AActor* CatPos1;                                                            // 0x0288 (size: 0x8)
    class AActor* CatPos2;                                                            // 0x0290 (size: 0x8)
    class AActor* CatPos3;                                                            // 0x0298 (size: 0x8)
    bool Done;                                                                        // 0x02A0 (size: 0x1)
    bool activated;                                                                   // 0x02A1 (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x02A8 (size: 0x8)
    bool PushFade;                                                                    // 0x02B0 (size: 0x1)

    void LogicTrigger();
    void BndEvt__SEQ_CatFromAntVillage_m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_SEQ_CatFromAntVillage(int32 EntryPoint);
}; // Size: 0x2B1

#endif
