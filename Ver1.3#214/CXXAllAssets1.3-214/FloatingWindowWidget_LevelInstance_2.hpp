#ifndef UE4SS_SDK_FloatingWindowWidget_LevelInstance_2_HPP
#define UE4SS_SDK_FloatingWindowWidget_LevelInstance_2_HPP

class AFloatingWindowWidget_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_FloatingWindowWidget(int32 EntryPoint);
}; // Size: 0x238

#endif
