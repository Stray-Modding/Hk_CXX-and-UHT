#ifndef UE4SS_SDK_Seq_Intro_Club_HPP
#define UE4SS_SDK_Seq_Intro_Club_HPP

class ASeq_Intro_Club_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool [DEBUG] Load_Zone_In_Editor;                                                 // 0x0270 (size: 0x1)
    class ABP_Droid_C* Droid_Open;                                                    // 0x0278 (size: 0x8)
    class ABP_SplineRail_C* Rail_Window;                                              // 0x0280 (size: 0x8)
    class ABP_DoorWindowBase_C* Window;                                               // 0x0288 (size: 0x8)
    class AActor* Droid_Point_Turn_Toward;                                            // 0x0290 (size: 0x8)
    class AActor* Drois_Point_After_Seq;                                              // 0x0298 (size: 0x8)
    class ABP_CatButton_FrottableDroid_C* Frottable;                                  // 0x02A0 (size: 0x8)
    bool Cat_Has_Jumped_IN;                                                           // 0x02A8 (size: 0x1)
    bool Alex_Is_Waiting;                                                             // 0x02A9 (size: 0x1)
    TArray<FName> Transition Groups;                                                  // 0x02B0 (size: 0x10)
    TArray<class ABP_DiscoLight_C*> DiscoLight_To_activate;                           // 0x02C0 (size: 0x10)
    TArray<class AStaticMeshActor*> fakespotlight;                                    // 0x02D0 (size: 0x10)

    void LogicTrigger();
    void BeforeCatExited_Event_0(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void Alex_Move_Away_And_Wait_To_Close();
    void OnStartSequence();
    void AfterCatEntered_Event_0(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Seq_Intro_Club(int32 EntryPoint);
}; // Size: 0x2E0

#endif
