#ifndef UE4SS_SDK_DeadCityMiddleFlat_GD_HPP
#define UE4SS_SDK_DeadCityMiddleFlat_GD_HPP

class ADeadCityMiddleFlat_GD_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_DeadCityMiddleFlat_GD(int32 EntryPoint);
}; // Size: 0x238

#endif
