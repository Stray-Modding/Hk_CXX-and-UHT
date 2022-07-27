#ifndef UE4SS_SDK_BP_Boombox_HPP
#define UE4SS_SDK_BP_Boombox_HPP

class ABP_Boombox_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UCOMP_ingame_player_C* COMP_ingame_player;                                  // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0248 (size: 0x8)
    bool is on;                                                                       // 0x0250 (size: 0x1)
    int32 Channel;                                                                    // 0x0254 (size: 0x4)
    float playhead;                                                                   // 0x0258 (size: 0x4)

    void BndEvt__BP_Boombox_Save_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void PlayBoombox();
    void StopBoombox();
    void LogicTrigger();
    void BndEvt__BP_Boombox_Streaming_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_Boombox(int32 EntryPoint);
}; // Size: 0x25C

#endif
