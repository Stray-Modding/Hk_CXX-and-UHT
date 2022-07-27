#ifndef UE4SS_SDK_SEQ_CineVentillo_HPP
#define UE4SS_SDK_SEQ_CineVentillo_HPP

class ASEQ_CineVentillo_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera;                                      // 0x0278 (size: 0x8)
    class AActor* Cat_Pos;                                                            // 0x0280 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA10B0F485();
    void Tick_6246EF4646E19036986D72BA10B0F485(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void ExecuteUbergraph_SEQ_CineVentillo(int32 EntryPoint);
}; // Size: 0x288

#endif
