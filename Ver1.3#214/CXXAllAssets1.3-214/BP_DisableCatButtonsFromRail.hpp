#ifndef UE4SS_SDK_BP_DisableCatButtonsFromRail_HPP
#define UE4SS_SDK_BP_DisableCatButtonsFromRail_HPP

class ABP_DisableCatButtonsFromRail_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    TArray<class ABP_SplineRail_C*> Rails;                                            // 0x0240 (size: 0x10)
    class ABP_CatPawn_C* cat;                                                         // 0x0250 (size: 0x8)

    void BndEvt__BP_DisableUngrabFromRail_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void AfterCatEntered_Event_0(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void BeforeCatExited_Event_0(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ExecuteUbergraph_BP_DisableCatButtonsFromRail(int32 EntryPoint);
}; // Size: 0x258

#endif
