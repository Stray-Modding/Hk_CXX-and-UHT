#ifndef UE4SS_SDK_SEQ_Ending_TurnOnComputers_HPP
#define UE4SS_SDK_SEQ_Ending_TurnOnComputers_HPP

class ASEQ_Ending_TurnOnComputers_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TArray<class ABP_ComputerBoard_C*> ComputerPool;                                  // 0x0270 (size: 0x10)
    TArray<int32> Array_Of_Valid_Screens_ID;                                          // 0x0280 (size: 0x10)
    TArray<class AStaticMeshActor*> MainConsoleScreens;                               // 0x0290 (size: 0x10)
    TArray<class UMaterialInterface*> ScreenMatArray;                                 // 0x02A0 (size: 0x10)
    class AStaticMeshActor* SmallScreen;                                              // 0x02B0 (size: 0x8)
    int32 MainConsoleInitScreenLoop;                                                  // 0x02B8 (size: 0x4)
    bool TurnOnAll;                                                                   // 0x02BC (size: 0x1)
    TArray<class AStaticMeshActor*> CircleOnMap;                                      // 0x02C0 (size: 0x10)
    class ADial_B12_ControlRoom_C* Dial_B12;                                          // 0x02D0 (size: 0x8)
    TArray<class ABP_Counter_C*> Upper_Screens;                                       // 0x02D8 (size: 0x10)
    TArray<int32> Array_Of_All_Screens_ID;                                            // 0x02E8 (size: 0x10)
    TArray<int32> ArrayTemp_to_compare;                                               // 0x02F8 (size: 0x10)
    FString NewVar_0;                                                                 // 0x0308 (size: 0x10)
    FString NewVar_1;                                                                 // 0x0318 (size: 0x10)
    bool PuzzleDone;                                                                  // 0x0328 (size: 0x1)

    void UserConstructionScript();
    void AllComputersTurnedON ();
    void Start_WaitForComputersToBeTurnedON();
    void Init Main Computer();
    void BndEvt__SEQ_Ending_TurnOnComputers_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void StopSmallScreenBlink();
    void ComputerOn_Event_0(class ABP_ComputerBoard_C* computer);
    void ComputerOff_Event_0(class ABP_ComputerBoard_C* computer);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SEQ_Ending_TurnOnComputers(int32 EntryPoint);
}; // Size: 0x329

#endif
