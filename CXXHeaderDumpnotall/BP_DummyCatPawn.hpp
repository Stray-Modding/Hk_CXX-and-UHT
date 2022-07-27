#ifndef UE4SS_SDK_BP_DummyCatPawn_HPP
#define UE4SS_SDK_BP_DummyCatPawn_HPP

class ABP_DummyCatPawn_C : public ABP_CatPawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UStreamingComponent* Streaming;
    class UMeowableComponent* Meowable;
    bool meowRequested;

    void ReqMeow();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__Save_K2Node_ComponentBoundEvent_1_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_BP_DummyCatPawn(int32 EntryPoint);
};

#endif
