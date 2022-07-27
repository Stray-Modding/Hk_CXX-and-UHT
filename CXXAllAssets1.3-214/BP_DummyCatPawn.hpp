#ifndef UE4SS_SDK_BP_DummyCatPawn_HPP
#define UE4SS_SDK_BP_DummyCatPawn_HPP

class ABP_DummyCatPawn_C : public ABP_CatPawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x5480 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x5488 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x5490 (size: 0x8)
    class UMeowableComponent* Meowable;                                               // 0x5498 (size: 0x8)
    bool meowRequested;                                                               // 0x54A0 (size: 0x1)

    void ReqMeow();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__Save_K2Node_ComponentBoundEvent_1_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_BP_DummyCatPawn(int32 EntryPoint);
}; // Size: 0x54A1

#endif
