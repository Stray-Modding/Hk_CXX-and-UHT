#ifndef UE4SS_SDK_Seq_Roberto_Flat_HPP
#define UE4SS_SDK_Seq_Roberto_Flat_HPP

class ASeq_Roberto_Flat_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Seamus;                                                        // 0x0270 (size: 0x8)
    class ADial_RobertoJr_Flat_C* Dial_Roberto_Flat;                                  // 0x0278 (size: 0x8)
    class ABP_CatButton_MoveToAnimFallingFrame_C* FallingFrame_Digicode;              // 0x0280 (size: 0x8)
    class ABP_CatButton_MoveToAnimFallingFrame_C* FallingFrame_Clue;                  // 0x0288 (size: 0x8)
    class ABP_DigicodeTrigger_C* Digicode;                                            // 0x0290 (size: 0x8)
    class AActor* Pos_Secret_Room;                                                    // 0x0298 (size: 0x8)
    class ABP_Actor_to_Translate_C* Clue_On_The_Wall;                                 // 0x02A0 (size: 0x8)
    class AActor* Pos_Digicode;                                                       // 0x02A8 (size: 0x8)
    class ABP_DoorWindowBase_C* SecretDoor;                                           // 0x02B0 (size: 0x8)
    bool Roberto_Enter_Secret_Room;                                                   // 0x02B8 (size: 0x1)
    class AActor* Pos_Cadre;                                                          // 0x02C0 (size: 0x8)
    class AActor* Pos_DoorToExit;                                                     // 0x02C8 (size: 0x8)
    bool ClueFound;                                                                   // 0x02D0 (size: 0x1)
    bool DigicodeFound;                                                               // 0x02D1 (size: 0x1)
    class AActor* PosPlans;                                                           // 0x02D8 (size: 0x8)
    class AActor* LookAtPlans;                                                        // 0x02E0 (size: 0x8)
    class AActor* PosZurk;                                                            // 0x02E8 (size: 0x8)
    class AActor* LookAtZurk;                                                         // 0x02F0 (size: 0x8)
    class AActor* PosShelves;                                                         // 0x02F8 (size: 0x8)
    class AActor* LookAtShelves;                                                      // 0x0300 (size: 0x8)
    bool TrackerFound;                                                                // 0x0308 (size: 0x1)
    class ABP_DoorWindowBase_C* ExitDoor;                                             // 0x0310 (size: 0x8)
    class AActor* Book;                                                               // 0x0318 (size: 0x8)
    class AActor* PosCadre;                                                           // 0x0320 (size: 0x8)
    class AActor* Tracker_Actor;                                                      // 0x0328 (size: 0x8)
    bool CancelledLoop;                                                               // 0x0330 (size: 0x1)
    class AActor* Pos_OutSeamus;                                                      // 0x0338 (size: 0x8)
    bool CodeEntered;                                                                 // 0x0340 (size: 0x1)
    bool DigicodePosReached;                                                          // 0x0341 (size: 0x1)
    TEnumAsByte<E_Roberto_Flat_State> RobertoState;                                   // 0x0342 (size: 0x1)
    class AActor* FX_DoorDust;                                                        // 0x0348 (size: 0x8)

    void GetWantedRobertoFlatState(TEnumAsByte<E_Roberto_Flat_State>& State);
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void RobertoMoveToExitDoor();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnFall_Event_0();
    void OnFall_Event_1();
    void OnEndMovement_Event_0(bool IsOpen);
    void OnStartMovement_Event_0(bool IsOpen);
    void CancelSeamusMoveToLoop();
    void OnLooted_Event_0(class ULootableComponent* _lootable);
    void UpdateStateMachine();
    void ClueFound_Enter();
    void ClueFound_Exit();
    void ReceiveBeginPlay();
    void CancelMoveToDoor();
    void ExecuteUbergraph_Seq_Roberto_Flat(int32 EntryPoint);
}; // Size: 0x350

#endif
