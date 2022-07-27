#ifndef UE4SS_SDK_BP_DropGrabbedObjectOnRail_HPP
#define UE4SS_SDK_BP_DropGrabbedObjectOnRail_HPP

class ABP_DropGrabbedObjectOnRail_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class ABP_SplineRail_C* Rail;                                                     // 0x0240 (size: 0x8)

    void BndEvt__BP_DropGrabbedObjectOnRail_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BeforeCatExited_Event_0(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ExecuteUbergraph_BP_DropGrabbedObjectOnRail(int32 EntryPoint);
}; // Size: 0x248

#endif
