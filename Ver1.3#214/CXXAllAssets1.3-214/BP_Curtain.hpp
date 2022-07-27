#ifndef UE4SS_SDK_BP_Curtain_HPP
#define UE4SS_SDK_BP_Curtain_HPP

class ABP_Curtain_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0240 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Curtain;                                              // 0x0250 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0258 (size: 0x8)
    float TimeToOpen;                                                                 // 0x0260 (size: 0x4)
    bool IsOpen;                                                                      // 0x0264 (size: 0x1)

    void Complete_6246EF4646E19036986D72BAB34F1FC3();
    void Tick_6246EF4646E19036986D72BAB34F1FC3(float Ratio);
    void Complete_6246EF4646E19036986D72BA30F4A648();
    void Tick_6246EF4646E19036986D72BA30F4A648(float Ratio);
    void ReceiveBeginPlay();
    void Open();
    void Close();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_Curtain(int32 EntryPoint);
}; // Size: 0x265

#endif
