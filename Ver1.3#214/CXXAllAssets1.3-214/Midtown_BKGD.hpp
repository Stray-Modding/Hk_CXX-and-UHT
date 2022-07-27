#ifndef UE4SS_SDK_Midtown_BKGD_HPP
#define UE4SS_SDK_Midtown_BKGD_HPP

class AMidtown_BKGD_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Midtown_BKGD(int32 EntryPoint);
}; // Size: 0x238

#endif
