#ifndef UE4SS_SDK_BP_PreventFall_HPP
#define UE4SS_SDK_BP_PreventFall_HPP

class ABP_PreventFall_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    FVector In Box Extent;                                                            // 0x0240 (size: 0xC)

    void UserConstructionScript();
    void BndEvt__BP_PreventFall_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_PreventFall_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_PreventFall(int32 EntryPoint);
}; // Size: 0x24C

#endif
