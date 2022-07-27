#ifndef UE4SS_SDK_Seq_Roberto_Flat_HPP
#define UE4SS_SDK_Seq_Roberto_Flat_HPP

class ASeq_Roberto_Flat_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Droid_C* Seamus;
    class ADial_RobertoJr_Flat_C* Dial_Roberto_Flat;
    class ABP_CatButton_MoveToAnimFallingFrame_C* FallingFrame_Digicode;
    class ABP_CatButton_MoveToAnimFallingFrame_C* FallingFrame_Clue;
    class ABP_DigicodeTrigger_C* Digicode;
    class AActor* Pos_Secret_Room;
    class ABP_Actor_to_Translate_C* Clue_On_The_Wall;
    class AActor* Pos_Digicode;
    class ABP_DoorWindowBase_C* SecretDoor;
    bool Roberto_Enter_Secret_Room;
    class AActor* Pos_Cadre;
    class AActor* Pos_DoorToExit;
    bool ClueFound;
    bool DigicodeFound;
    class AActor* PosPlans;
    class AActor* LookAtPlans;
    class AActor* PosZurk;
    class AActor* LookAtZurk;
    class AActor* PosShelves;
    class AActor* LookAtShelves;
    bool TrackerFound;
    class ABP_DoorWindowBase_C* ExitDoor;
    class AActor* Book;
    class AActor* PosCadre;
    class AActor* Tracker_Actor;
    bool CancelledLoop;
    class AActor* Pos_OutSeamus;
    bool CodeEntered;
    bool DigicodePosReached;
    TEnumAsByte<E_Roberto_Flat_State> RobertoState;
    class AActor* FX_DoorDust;

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
};

#endif
