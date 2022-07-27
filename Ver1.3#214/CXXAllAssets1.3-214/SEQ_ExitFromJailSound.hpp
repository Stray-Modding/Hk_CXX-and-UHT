#ifndef UE4SS_SDK_SEQ_ExitFromJailSound_HPP
#define UE4SS_SDK_SEQ_ExitFromJailSound_HPP

class ASEQ_ExitFromJailSound_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)

    void LogicTrigger();
    void ExecuteUbergraph_SEQ_ExitFromJailSound(int32 EntryPoint);
}; // Size: 0x278

#endif
