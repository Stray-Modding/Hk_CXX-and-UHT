#ifndef UE4SS_SDK_BP_CatButton_Scratchable_PanelSas_HPP
#define UE4SS_SDK_BP_CatButton_Scratchable_PanelSas_HPP

class ABP_CatButton_Scratchable_PanelSas_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UArrowComponent* CameraOrient;                                              // 0x0230 (size: 0x8)
    class UArrowComponent* FX_Arcs_1;                                                 // 0x0238 (size: 0x8)
    class UArrowComponent* FX_Smoke_1;                                                // 0x0240 (size: 0x8)
    class UArrowComponent* FX_Smoke_0;                                                // 0x0248 (size: 0x8)
    class UArrowComponent* FX_Arcs_0;                                                 // 0x0250 (size: 0x8)
    class UArrowComponent* FX_Sparks_0;                                               // 0x0258 (size: 0x8)
    class UArrowComponent* FX_Sparks_3;                                               // 0x0260 (size: 0x8)
    class UArrowComponent* FX_Sparks_2;                                               // 0x0268 (size: 0x8)
    class UArrowComponent* FX_Sparks_1;                                               // 0x0270 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0278 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Ending_Sign_09;                                       // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Ending_Sign_02;                                       // 0x0290 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint07;                                 // 0x0298 (size: 0x8)
    class UStaticMeshComponent* ElectricBox011;                                       // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* ElectricBox00;                                        // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* ElectricBox07;                                        // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint06;                                 // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* ElectricBox09;                                        // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint05;                                 // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* ElectricBox08;                                        // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* ElectricBox010;                                       // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint04;                                 // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Door;                                                 // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* Electric Box;                                         // 0x02F0 (size: 0x8)
    class UArrowComponent* ScratchSpot;                                               // 0x02F8 (size: 0x8)
    class UCOMP_CatScratchableComponent_C* COMP_CatScratchableComponent;              // 0x0300 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0308 (size: 0x8)
    int32 Max_Scratch;                                                                // 0x0310 (size: 0x4)
    int32 ScratchCount;                                                               // 0x0314 (size: 0x4)
    FBP_CatButton_Scratchable_PanelSas_COn_Scratch_Ended On_Scratch_Ended;            // 0x0318 (size: 0x10)
    void On_Scratch_Ended();
    TArray<FTransform> FX_Trans;                                                      // 0x0328 (size: 0x10)
    TArray<class UParticleSystemComponent*> FX_Temp;                                  // 0x0338 (size: 0x10)
    float Lerp_Door;                                                                  // 0x0348 (size: 0x4)
    bool isDoorOpen;                                                                  // 0x034C (size: 0x1)
    class ACameraActor* Camera_Opening_Door;                                          // 0x0350 (size: 0x8)
    bool Hacked;                                                                      // 0x0358 (size: 0x1)
    TArray<class UParticleSystemComponent*> FX_Arcs_Temp;                             // 0x0360 (size: 0x10)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA20F50EC9();
    void Tick_6246EF4646E19036986D72BA20F50EC9(float Ratio);
    void Complete_6246EF4646E19036986D72BA1F2DE7C7();
    void Tick_6246EF4646E19036986D72BA1F2DE7C7(float Ratio);
    void BndEvt__BP_CatButton_ScratchableWallSpot_COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_0_OnScratched__DelegateSignature(class UCOMP_CatScratchableComponent_C* Scratchable);
    void Set_Screen_Color(class UMaterialInterface* Material);
    void Blink();
    void UpdateDoor(float Alpha);
    void Open_Door(bool Enable_Scratch);
    void Close Door();
    void BndEvt__BP_CatButton_Scratchable_PanelSas_Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__BP_CatButton_Scratchable_PanelSas_COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_3_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ExecuteUbergraph_BP_CatButton_Scratchable_PanelSas(int32 EntryPoint);
    void On_Scratch_Ended__DelegateSignature();
}; // Size: 0x370

#endif
