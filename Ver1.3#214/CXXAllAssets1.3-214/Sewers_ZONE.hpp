#ifndef UE4SS_SDK_Sewers_ZONE_HPP
#define UE4SS_SDK_Sewers_ZONE_HPP

class ASewers_ZONE_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Sewers_ZONE(int32 EntryPoint);
}; // Size: 0x238

#endif
