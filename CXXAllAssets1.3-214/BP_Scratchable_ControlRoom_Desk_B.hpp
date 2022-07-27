#ifndef UE4SS_SDK_BP_Scratchable_ControlRoom_Desk_B_HPP
#define UE4SS_SDK_BP_Scratchable_ControlRoom_Desk_B_HPP

class ABP_Scratchable_ControlRoom_Desk_B_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* push_VIBE;                                                 // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Col_Horizontal;                                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Col_Vertical;                                         // 0x0240 (size: 0x8)
    class UArrowComponent* FX_Arcs_0;                                                 // 0x0248 (size: 0x8)
    class UArrowComponent* FX_Sparks_0;                                               // 0x0250 (size: 0x8)
    class UArrowComponent* FX_Sparks_3;                                               // 0x0258 (size: 0x8)
    class UArrowComponent* FX_Sparks_2;                                               // 0x0260 (size: 0x8)
    class UArrowComponent* FX_Sparks_1;                                               // 0x0268 (size: 0x8)
    class UArrowComponent* FX_Smoke_1;                                                // 0x0270 (size: 0x8)
    class UArrowComponent* FX_Arcs_1;                                                 // 0x0278 (size: 0x8)
    class UArrowComponent* FX_Smoke_0;                                                // 0x0280 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0288 (size: 0x8)
    class UStaticMeshComponent* WoodPlane_03;                                         // 0x0290 (size: 0x8)
    class UArrowComponent* CatPosScratch;                                             // 0x0298 (size: 0x8)
    class UCOMP_CatScratchableComponent_C* COMP_CatScratchableComponent;              // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Cabinet_4;                                            // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Cabinet_3;                                            // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Cabinet_2;                                            // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint08;                                 // 0x02C0 (size: 0x8)
    class USceneComponent* ElectricStuffInside;                                       // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Door1;                                                // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Cabinet_1;                                            // 0x02D8 (size: 0x8)
    class USceneComponent* PivotPlank;                                                // 0x02E0 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatMoveToAnim;                                  // 0x02E8 (size: 0x8)
    class UArrowComponent* CatPosAnim;                                                // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* Ending_Sign_09;                                       // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* Ending_Sign_02;                                       // 0x0300 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint07;                                 // 0x0308 (size: 0x8)
    class UStaticMeshComponent* ElectricBox011;                                       // 0x0310 (size: 0x8)
    class UStaticMeshComponent* ElectricBox00;                                        // 0x0318 (size: 0x8)
    class UStaticMeshComponent* ElectricBox010;                                       // 0x0320 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint06;                                 // 0x0328 (size: 0x8)
    class UStaticMeshComponent* ElectricBox07;                                        // 0x0330 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint04;                                 // 0x0338 (size: 0x8)
    class UStaticMeshComponent* ElectricBox09;                                        // 0x0340 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint05;                                 // 0x0348 (size: 0x8)
    class UStaticMeshComponent* ElectricBox08;                                        // 0x0350 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0358 (size: 0x8)
    bool Already_Open;                                                                // 0x0360 (size: 0x1)
    class ABP_TechStation_Lock_C* techStationLock_Associated;                         // 0x0368 (size: 0x8)
    class UParticleSystemComponent* FX_Temp_0;                                        // 0x0370 (size: 0x8)
    TArray<class UParticleSystemComponent*> FX_Arcs_Temp;                             // 0x0378 (size: 0x10)
    int32 NumberOfScratch;                                                            // 0x0388 (size: 0x4)
    class AActor* camera_align;                                                       // 0x0390 (size: 0x8)

    void UserConstructionScript();
    void Complete_578069E64FB8DCA8E1905FB767B65BB3();
    void Tick_578069E64FB8DCA8E1905FB767B65BB3(float Ratio);
    void ReceiveBeginPlay();
    void Enable_Scratchable_Box();
    void BndEvt__BP_Scratchable_ControlRoom_Desk_B_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_1_AnimationStarted__DelegateSignature();
    void BndEvt__BP_CatButton_ScratchableBehindBoard_COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_2_OnScratched__DelegateSignature(class UCOMP_CatScratchableComponent_C* Scratchable);
    void BndEvt__BP_Scratchable_ControlRoom_Desk_B_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_3_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_Scratchable_ControlRoom_Desk_B_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_4_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_Scratchable_ControlRoom_Box_COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_2_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_Scratchable_ControlRoom_Box_COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_3_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ExecuteUbergraph_BP_Scratchable_ControlRoom_Desk_B(int32 EntryPoint);
}; // Size: 0x398

#endif
