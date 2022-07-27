#ifndef UE4SS_SDK_Midtown_GD_Alex_HPP
#define UE4SS_SDK_Midtown_GD_Alex_HPP

class AMidtown_GD_Alex_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Midtown_GD_Alex(int32 EntryPoint);
}; // Size: 0x238

#endif
