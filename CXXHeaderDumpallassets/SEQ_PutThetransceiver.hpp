#ifndef UE4SS_SDK_SEQ_PutThetransceiver_HPP
#define UE4SS_SDK_SEQ_PutThetransceiver_HPP

class ASEQ_PutThetransceiver_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Activate;                                                                    // 0x0270 (size: 0x1)
    class ADial_B12_PutTheTransceiver_C* B12 Dial;                                    // 0x0278 (size: 0x8)

    void ReceiveBeginPlay();
    void LogicTrigger();
    void OnStartSequence();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SEQ_PutThetransceiver(int32 EntryPoint);
}; // Size: 0x280

#endif
