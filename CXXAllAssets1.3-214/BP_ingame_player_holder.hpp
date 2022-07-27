#ifndef UE4SS_SDK_BP_ingame_player_holder_HPP
#define UE4SS_SDK_BP_ingame_player_holder_HPP

class ABP_ingame_player_holder_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UCOMP_ingame_player_C* COMP_ingame_player;                                  // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    bool is playing;                                                                  // 0x0248 (size: 0x1)

    void BndEvt__Save_K2Node_ComponentBoundEvent_2_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void BndEvt__BP_ingame_player_holder_Save_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_BP_ingame_player_holder(int32 EntryPoint);
}; // Size: 0x249

#endif
