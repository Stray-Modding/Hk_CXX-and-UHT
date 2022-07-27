#ifndef UE4SS_SDK_BP_Ending_SasDoor_HPP
#define UE4SS_SDK_BP_Ending_SasDoor_HPP

class ABP_Ending_SasDoor_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class USphereComponent* Slider_Detector;                                          // 0x0380 (size: 0x8)
    class UStaticMeshComponent* Door_B2_R;                                            // 0x0388 (size: 0x8)
    class USceneComponent* Pivto_Second_Door;                                         // 0x0390 (size: 0x8)
    class UStaticMeshComponent* Frame;                                                // 0x0398 (size: 0x8)
    float Detection_Radius;                                                           // 0x03A0 (size: 0x4)
    bool IsActive;                                                                    // 0x03A4 (size: 0x1)
    float Lerp_Lock;                                                                  // 0x03A8 (size: 0x4)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BAC9A35A9F();
    void Tick_6246EF4646E19036986D72BAC9A35A9F(float Ratio);
    void Complete_6246EF4646E19036986D72BAFFF0D565();
    void Tick_6246EF4646E19036986D72BAFFF0D565(float Ratio);
    void ReceiveBeginPlay();
    void OnStartMovement_Event_0(bool IsOpen);
    void BndEvt__BP_Ending_SasDoor_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Ending_SasDoor_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Activate_Door();
    void Disable Door();
    void Update_Closed_Sign();
    void LogicTrigger();
    void Check Overlap();
    void Update Rotation Lock();
    void OnEndMVT(bool IsOpen);
    void Force Open();
    void BndEvt__BP_Ending_SasDoor_Streaming_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_Ending_SasDoor(int32 EntryPoint);
}; // Size: 0x3AC

#endif
