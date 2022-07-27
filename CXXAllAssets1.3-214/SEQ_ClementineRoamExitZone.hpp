#ifndef UE4SS_SDK_SEQ_ClementineRoamExitZone_HPP
#define UE4SS_SDK_SEQ_ClementineRoamExitZone_HPP

class ASEQ_ClementineRoamExitZone_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class ABP_Droid_C* Clementine;                                                    // 0x0278 (size: 0x8)
    class AActor* Clementine_ControlRoom_POS;                                         // 0x0280 (size: 0x8)
    class AActor* Clementine_Door_POS;                                                // 0x0288 (size: 0x8)
    class AActor* Clementine_NearTruck_POS;                                           // 0x0290 (size: 0x8)
    class AActor* Clementine_Grass_POS;                                               // 0x0298 (size: 0x8)
    class ABP_TruckFollowSpline_C* Truck;                                             // 0x02A0 (size: 0x8)
    bool Activate;                                                                    // 0x02A8 (size: 0x1)
    TEnumAsByte<Enum_ClementineRoamingExitZone> Sequence;                             // 0x02A9 (size: 0x1)
    class AActor* InFrontOfTheExit_POS;                                               // 0x02B0 (size: 0x8)
    class ADial_Clementine_JailExit_C* dial_clementine;                               // 0x02B8 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x02C0 (size: 0x8)
    class AActor* Cat_Door_POS;                                                       // 0x02C8 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera Cine;                                 // 0x02D0 (size: 0x8)
    FSEQ_ClementineRoamExitZone_CDeactivateDispatch DeactivateDispatch;               // 0x02D8 (size: 0x10)
    void DeactivateDispatch();
    bool MoveToCancel;                                                                // 0x02E8 (size: 0x1)
    class ACameraActor* CameraDoor;                                                   // 0x02F0 (size: 0x8)

    void Complete_6246EF4646E19036986D72BABAC44995();
    void Tick_6246EF4646E19036986D72BABAC44995(float Ratio);
    void OnStartSequence();
    void LogicTrigger();
    void Change Sequence();
    void DeactivateMoveTocControlRool();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Deactivate MoveToDoor();
    void Deactivate MoveToTruck();
    void DeactivateMoveToGrass();
    void ExecuteUbergraph_SEQ_ClementineRoamExitZone(int32 EntryPoint);
    void DeactivateDispatch__DelegateSignature();
}; // Size: 0x2F8

#endif
