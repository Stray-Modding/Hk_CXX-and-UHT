#ifndef UE4SS_SDK_Slums_ZONE_HPP
#define UE4SS_SDK_Slums_ZONE_HPP

class ASlums_ZONE_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Slums_ZONE(int32 EntryPoint);
}; // Size: 0x238

#endif
