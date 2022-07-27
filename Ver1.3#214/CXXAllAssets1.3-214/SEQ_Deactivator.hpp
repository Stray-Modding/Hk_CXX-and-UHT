#ifndef UE4SS_SDK_SEQ_Deactivator_HPP
#define UE4SS_SDK_SEQ_Deactivator_HPP

class ASEQ_Deactivator_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class AActor* MainDoor;                                                           // 0x0270 (size: 0x8)
    FSEQ_Deactivator_CDeactivated Deactivated;                                        // 0x0278 (size: 0x10)
    void Deactivated();

    void LogicTrigger();
    void ExecuteUbergraph_SEQ_Deactivator(int32 EntryPoint);
    void Deactivated__DelegateSignature();
}; // Size: 0x288

#endif
