#ifndef UE4SS_SDK_Part1_HPP
#define UE4SS_SDK_Part1_HPP

class APart1_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ToggleSub2();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Part1(int32 EntryPoint);
}; // Size: 0x238

#endif
