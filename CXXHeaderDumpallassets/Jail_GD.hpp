#ifndef UE4SS_SDK_Jail_GD_HPP
#define UE4SS_SDK_Jail_GD_HPP

class AJail_GD_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Jail_GD(int32 EntryPoint);
}; // Size: 0x238

#endif
