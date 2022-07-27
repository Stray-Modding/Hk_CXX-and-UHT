#ifndef UE4SS_SDK_BP_gramophone_HPP
#define UE4SS_SDK_BP_gramophone_HPP

class ABP_gramophone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Vinyl_Club;                                           // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Gramophone;                                           // 0x0240 (size: 0x8)
    class UCOMP_ingame_player_C* COMP_ingame_player;                                  // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    bool is playing;                                                                  // 0x0258 (size: 0x1)
    float DiskSpeed;                                                                  // 0x025C (size: 0x4)
    bool is In part 2;                                                                // 0x0260 (size: 0x1)

    void Play in Part 1();
    void ReceiveTick(float DeltaSeconds);
    void Play in part 2();
    void stop phono();
    void BndEvt__BP_gramophone_Save_K2Node_ComponentBoundEvent_1_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_BP_gramophone(int32 EntryPoint);
}; // Size: 0x261

#endif
