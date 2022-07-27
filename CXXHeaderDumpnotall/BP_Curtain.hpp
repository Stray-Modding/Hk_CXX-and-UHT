#ifndef UE4SS_SDK_BP_Curtain_HPP
#define UE4SS_SDK_BP_Curtain_HPP

class ABP_Curtain_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UStreamingComponent* Streaming;
    class UStaticMeshComponent* Curtain;
    class USceneComponent* Scene;
    float TimeToOpen;
    bool IsOpen;

    void Complete_6246EF4646E19036986D72BAB34F1FC3();
    void Tick_6246EF4646E19036986D72BAB34F1FC3(float Ratio);
    void Complete_6246EF4646E19036986D72BA30F4A648();
    void Tick_6246EF4646E19036986D72BA30F4A648(float Ratio);
    void ReceiveBeginPlay();
    void Open();
    void Close();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_Curtain(int32 EntryPoint);
};

#endif
