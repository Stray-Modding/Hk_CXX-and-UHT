#ifndef UE4SS_SDK_BP_GameStateManager_HPP
#define UE4SS_SDK_BP_GameStateManager_HPP

class ABP_GameStateManager_C : public AGameStateManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)

    void ReceiveBeginPlay();
    void OnFadeOutStart(float _fadeTime);
    void ExecuteUbergraph_BP_GameStateManager(int32 EntryPoint);
}; // Size: 0x2C0

#endif
