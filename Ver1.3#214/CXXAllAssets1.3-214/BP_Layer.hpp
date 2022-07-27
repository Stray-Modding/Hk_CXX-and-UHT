#ifndef UE4SS_SDK_BP_Layer_HPP
#define UE4SS_SDK_BP_Layer_HPP

class ABP_Layer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    bool LayerIsOn;                                                                   // 0x0248 (size: 0x1)

    void InternalSetLayerEnabled(bool Enabled);
    void SetLayerEnabled(bool Enabled);
    void TurnLayerOn();
    void TurnLayerOff();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void LogicTrigger();
    void ExecuteUbergraph_BP_Layer(int32 EntryPoint);
}; // Size: 0x249

#endif
