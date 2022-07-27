#ifndef UE4SS_SDK_Intro_GRAPH_HPP
#define UE4SS_SDK_Intro_GRAPH_HPP

class AIntro_GRAPH_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Intro_GRAPH(int32 EntryPoint);
}; // Size: 0x238

#endif
