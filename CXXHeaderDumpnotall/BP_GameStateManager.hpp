#ifndef UE4SS_SDK_BP_GameStateManager_HPP
#define UE4SS_SDK_BP_GameStateManager_HPP

class ABP_GameStateManager_C : public AGameStateManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void OnFadeOutStart(float _fadeTime);
    void ExecuteUbergraph_BP_GameStateManager(int32 EntryPoint);
};

#endif
