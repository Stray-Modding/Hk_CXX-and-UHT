#ifndef UE4SS_SDK_SEQ_MetroLightOn_HPP
#define UE4SS_SDK_SEQ_MetroLightOn_HPP

class ASEQ_MetroLightOn_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TArray<class AActor*> Led;                                                        // 0x0270 (size: 0x10)
    class ABP_SplineCameraCine_Simple_C* Camera_Plan_Rikonium;                        // 0x0280 (size: 0x8)
    class AActor* camera_Plan1;                                                       // 0x0288 (size: 0x8)
    class AActor* Camera_Plan2_DashBoard;                                             // 0x0290 (size: 0x8)
    class ABP_Wagon_C* Metro;                                                         // 0x0298 (size: 0x8)
    class ABP_SwitchTriggerUsableItem_C* SwitchTrigger;                               // 0x02A0 (size: 0x8)
    class AActor* cable;                                                              // 0x02A8 (size: 0x8)
    class UMaterialInstanceDynamic* ToyoColor_Material;                               // 0x02B0 (size: 0x8)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BAD93E864A();
    void Tick_6246EF4646E19036986D72BAD93E864A(float Ratio);
    void LogicTrigger();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_SEQ_MetroLightOn(int32 EntryPoint);
}; // Size: 0x2B8

#endif
