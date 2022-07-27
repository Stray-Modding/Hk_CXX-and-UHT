#ifndef UE4SS_SDK_BP_Scratchable_ControlRoom_Box_HPP
#define UE4SS_SDK_BP_Scratchable_ControlRoom_Box_HPP

class ABP_Scratchable_ControlRoom_Box_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* push_VIBE;                                                 // 0x0230 (size: 0x8)
    class UArrowComponent* FX_Smoke_0;                                                // 0x0238 (size: 0x8)
    class UArrowComponent* FX_Sparks_2;                                               // 0x0240 (size: 0x8)
    class UArrowComponent* FX_Sparks_1;                                               // 0x0248 (size: 0x8)
    class UArrowComponent* FX_Arcs_1;                                                 // 0x0250 (size: 0x8)
    class UStaticMeshComponent* ElectricBox03;                                        // 0x0258 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatMoveToAnim;                                  // 0x0260 (size: 0x8)
    class UCOMP_CatScratchableComponent_C* COMP_CatScratchableComponent;              // 0x0268 (size: 0x8)
    class UArrowComponent* CatPos_Push;                                               // 0x0270 (size: 0x8)
    class UArrowComponent* CatPos_Scratch;                                            // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Electric_Box_06_Door;                                 // 0x0280 (size: 0x8)
    class USceneComponent* PivotDoor;                                                 // 0x0288 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint07;                                 // 0x0290 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint06;                                 // 0x0298 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint04;                                 // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint05;                                 // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Electric_Box_06_open1;                                // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    bool Already_Open;                                                                // 0x02C0 (size: 0x1)
    class ABP_TechStation_Lock_C* techStationLock_Associated;                         // 0x02C8 (size: 0x8)
    TArray<class UParticleSystemComponent*> FX_Arcs_Temp;                             // 0x02D0 (size: 0x10)
    int32 NumberOfScratch;                                                            // 0x02E0 (size: 0x4)
    class AActor* camera_align;                                                       // 0x02E8 (size: 0x8)
    FBP_Scratchable_ControlRoom_Box_CScratched Scratched;                             // 0x02F0 (size: 0x10)
    void Scratched();

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA4EFE8255();
    void Tick_6246EF4646E19036986D72BA4EFE8255(float Ratio);
    void ReceiveBeginPlay();
    void BndEvt__BP_ScratchableElectricBoxGround_COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_0_OnScratched__DelegateSignature(class UCOMP_CatScratchableComponent_C* Scratchable);
    void Enable_groundBox();
    void BndEvt__BP_ScratchableElectricBoxGround_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_1_AnimationStarted__DelegateSignature();
    void BndEvt__BP_Scratchable_ControlRoom_Box_COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_2_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_Scratchable_ControlRoom_Box_COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_3_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ExecuteUbergraph_BP_Scratchable_ControlRoom_Box(int32 EntryPoint);
    void Scratched__DelegateSignature();
}; // Size: 0x300

#endif
