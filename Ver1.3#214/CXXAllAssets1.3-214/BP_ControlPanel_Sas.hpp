#ifndef UE4SS_SDK_BP_ControlPanel_Sas_HPP
#define UE4SS_SDK_BP_ControlPanel_Sas_HPP

class ABP_ControlPanel_Sas_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UArrowComponent* Drone_Spot;                                                // 0x0240 (size: 0x8)
    class UCOMP_UsableDroneTimer_C* COMP_UsableDroneTimer;                            // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Ending_Ads_Screen_A;                                  // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    FBP_ControlPanel_Sas_COn_Panel_Hacked On_Panel_Hacked;                            // 0x0260 (size: 0x10)
    void On_Panel_Hacked();
    FBP_ControlPanel_Sas_COn_Panel_Start_Hacking On_Panel_Start_Hacking;              // 0x0270 (size: 0x10)
    void On_Panel_Start_Hacking();
    bool Hacked;                                                                      // 0x0280 (size: 0x1)

    void BndEvt__BP_ControlPanel_Sas_COMP_UsableDroneTimer_K2Node_ComponentBoundEvent_0_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void BndEvt__BP_ControlPanel_Sas_COMP_UsableDroneTimer_K2Node_ComponentBoundEvent_1_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void Blink();
    void Set Screen Color(class UMaterialInterface* Material);
    void BndEvt__BP_ControlPanel_Sas_Streaming_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_ControlPanel_Sas(int32 EntryPoint);
    void On_Panel_Start_Hacking__DelegateSignature();
    void On_Panel_Hacked__DelegateSignature();
}; // Size: 0x281

#endif
