#ifndef UE4SS_SDK_SEQ_ClementineFree_HPP
#define UE4SS_SDK_SEQ_ClementineFree_HPP

class ASEQ_ClementineFree_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UBoxComponent* CatIsInCorridor_Zone;                                        // 0x0278 (size: 0x8)
    class UBoxComponent* CatEnterKey_Zone;                                            // 0x0280 (size: 0x8)
    class UBoxComponent* CatNearCell_Zone;                                            // 0x0288 (size: 0x8)
    TEnumAsByte<Enum_CellZone> Sequence;                                              // 0x0290 (size: 0x1)
    class ABP_Droid_C* Clementine;                                                    // 0x0298 (size: 0x8)
    class AActor* Clementine_OutsideCell_POS;                                         // 0x02A0 (size: 0x8)
    class AActor* Clementine_OpenZoneDoor_POS;                                        // 0x02A8 (size: 0x8)
    class AActor* Cat_NearCell_POS;                                                   // 0x02B0 (size: 0x8)
    class ABP_Key_CellNoPhys_C* Key;                                                  // 0x02B8 (size: 0x8)
    bool CatHaveKey;                                                                  // 0x02C0 (size: 0x1)
    bool KeyGive;                                                                     // 0x02C1 (size: 0x1)
    class ABP_DoorJail_CellZone_C* CellZone_Door;                                     // 0x02C8 (size: 0x8)
    class ABP_CellDoor_Jail_C* Door;                                                  // 0x02D0 (size: 0x8)
    class AActor* LightGreen;                                                         // 0x02D8 (size: 0x8)
    class AActor* LightRed;                                                           // 0x02E0 (size: 0x8)
    bool Activate;                                                                    // 0x02E8 (size: 0x1)
    bool CatIsInCorridor;                                                             // 0x02E9 (size: 0x1)
    bool CatIsInKeyZone;                                                              // 0x02EA (size: 0x1)
    bool CatIsInNearCell;                                                             // 0x02EB (size: 0x1)
    class ABP_SplineCameraCine_Simple_C* camera_Cell;                                 // 0x02F0 (size: 0x8)
    class AActor* Camera_Start;                                                       // 0x02F8 (size: 0x8)
    class AActor* Camera_Key;                                                         // 0x0300 (size: 0x8)
    bool KeyIsInNearCell;                                                             // 0x0308 (size: 0x1)
    bool KeyCanBeGive;                                                                // 0x0309 (size: 0x1)
    class AActor* NextSequence;                                                       // 0x0310 (size: 0x8)
    class AActor* LookAtTarget_Camera;                                                // 0x0318 (size: 0x8)
    class AActor* LookAtTarget_Door;                                                  // 0x0320 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0328 (size: 0x8)
    class AActor* Camera_Orient;                                                      // 0x0330 (size: 0x8)
    class UAnimSequence* Animation;                                                   // 0x0338 (size: 0x8)
    class UAnimSequence* Animation_0;                                                 // 0x0340 (size: 0x8)

    void Complete_6246EF4646E19036986D72BAA21B5789();
    void Tick_6246EF4646E19036986D72BAA21B5789(float Ratio);
    void Complete_6246EF4646E19036986D72BA4E079597();
    void Tick_6246EF4646E19036986D72BA4E079597(float Ratio);
    void OnStartSequence();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__CatIsInCorridor_Zone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CatIsInCorridor_Zone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__CatEnterKey_Zone_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CatEnterKey_Zone_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__CatNearCell_Zone_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CatNearCell_Zone_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Change Sequence();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_6_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_SEQ_ClementineFree(int32 EntryPoint);
}; // Size: 0x348

#endif
