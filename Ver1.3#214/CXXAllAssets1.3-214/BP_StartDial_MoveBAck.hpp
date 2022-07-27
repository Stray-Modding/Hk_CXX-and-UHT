#ifndef UE4SS_SDK_BP_StartDial_MoveBAck_HPP
#define UE4SS_SDK_BP_StartDial_MoveBAck_HPP

class ABP_StartDial_MoveBAck_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class ADialog* Dial;                                                              // 0x0248 (size: 0x8)
    class AActor* PosCat_MoveBack;                                                    // 0x0250 (size: 0x8)
    TArray<class ABP_StartDial_MoveBAck_C*> Other_StartDial_MoveBack;                 // 0x0258 (size: 0x10)
    bool IsActive;                                                                    // 0x0268 (size: 0x1)

    void BndEvt__BP_StartDial_MoveBAck_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Enable();
    void Disable();
    void BndEvt__BP_StartDial_MoveBAck_Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_StartDial_MoveBAck(int32 EntryPoint);
}; // Size: 0x269

#endif
