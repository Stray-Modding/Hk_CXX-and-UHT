#ifndef UE4SS_SDK_BP_B12Flat_ExitDoor_HPP
#define UE4SS_SDK_BP_B12Flat_ExitDoor_HPP

class ABP_B12Flat_ExitDoor_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UAudioComponent* PushVIBE;                                                  // 0x0380 (size: 0x8)
    class UArrowComponent* CatPos;                                                    // 0x0388 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatMoveToAnim;                                  // 0x0390 (size: 0x8)
    class UStaticMeshComponent* Door_B2_R;                                            // 0x0398 (size: 0x8)
    class UStaticMeshComponent* Door_B2_Frame;                                        // 0x03A0 (size: 0x8)
    class ABP_OrientCameraThirdPersonZone_C* Orient_CamDigicode;                      // 0x03A8 (size: 0x8)
    bool FullOpen;                                                                    // 0x03B0 (size: 0x1)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA020B0600();
    void Tick_6246EF4646E19036986D72BA020B0600(float Ratio);
    void Complete_6246EF4646E19036986D72BAC4CEC560();
    void Tick_6246EF4646E19036986D72BAC4CEC560(float Ratio);
    void ReceiveBeginPlay();
    void OnStartMovement_Event_0(bool IsOpen);
    void BndEvt__BP_Scratchable_ControlRoom_Desk_B_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_3_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_B12Flat_ExitDoor_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_0_AnimationStarted__DelegateSignature();
    void InstantOpen();
    void ExecuteUbergraph_BP_B12Flat_ExitDoor(int32 EntryPoint);
}; // Size: 0x3B1

#endif
