#ifndef UE4SS_SDK_DeadCity_ZONE_HPP
#define UE4SS_SDK_DeadCity_ZONE_HPP

class ADeadCity_ZONE_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_DeadCity_ZONE(int32 EntryPoint);
}; // Size: 0x238

#endif
