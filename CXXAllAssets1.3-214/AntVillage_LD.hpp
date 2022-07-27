#ifndef UE4SS_SDK_AntVillage_LD_HPP
#define UE4SS_SDK_AntVillage_LD_HPP

class AAntVillage_LD_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AntVillage_LD(int32 EntryPoint);
}; // Size: 0x238

#endif
