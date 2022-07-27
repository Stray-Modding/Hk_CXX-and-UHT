#ifndef UE4SS_SDK_DeadCityIntroZurg_GD_HPP
#define UE4SS_SDK_DeadCityIntroZurg_GD_HPP

class ADeadCityIntroZurg_GD_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_DeadCityIntroZurg_GD(int32 EntryPoint);
}; // Size: 0x238

#endif
