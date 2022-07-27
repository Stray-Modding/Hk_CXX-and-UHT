#ifndef UE4SS_SDK_DeadEnd_LD_HPP
#define UE4SS_SDK_DeadEnd_LD_HPP

class ADeadEnd_LD_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_DeadEnd_LD(int32 EntryPoint);
}; // Size: 0x238

#endif
