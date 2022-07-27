#ifndef UE4SS_SDK_Jail_Exit_LD_HPP
#define UE4SS_SDK_Jail_Exit_LD_HPP

class AJail_Exit_LD_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Jail_Exit_LD(int32 EntryPoint);
}; // Size: 0x238

#endif
