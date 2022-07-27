#ifndef UE4SS_SDK_Dial_Momo_HPP
#define UE4SS_SDK_Dial_Momo_HPP

class ADial_Momo_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStreamingComponent* Streaming;
    class ABP_Droid_C* Momo;
    class ASkeletalMeshActor* Transceiver;
    class AActor* Tabouret;
    class AActor* TV;
    class AActor* fake notebook;
    class ADIAL_B12_OnLootNotebooks_C* Dia_B12_Notebooks;
    class ABP_Curtain_C* Curtain;
    class ABP_VerticalWindow_C* WindowToRooftop;
    class ABP_SplineRail_C* WindowToRooftop_Rail;
    class ABP_Droid_C* MomoCine;
    class ASkeletalMeshActor* TransceiverCine;
    class ALevelSequenceActor* CineMomo;
    class ABP_MomoWindowToSlums_C* MomoWindowToSlums;
    class ABP_SplineRail_C* RailOnWindowToSlums;
    class AActor* DroidPosAfterCine;
    class AActor* CatPosAfterCine;
    TEnumAsByte<E_Momo_Dialog_State> MomoDialState;
    TArray<FName> Transition Groups;
    class UAnimSequence* Anim_Momo_Repair;
    class UAnimSequence* Anim_Transceiver_Repair;
    class UAnimSequence* Anim_Momo_DoneRepair;
    FDial_Momo_COnGiveMomoNotebook OnGiveMomoNotebook;
    void OnGiveMomoNotebook();
    class AActor* DroneTargetIntro;
    class AActor* Cadre;
    class UAnimSequence* Line Advanced Animation;
    class ALevelSequenceActor* MeetMomo_Sequence;
    class ACameraActor* Cam_OutroMeetMomo;
    class AActor* TP_CatFenetre;
    class AActor* MoveToCat_DevantMomo;
    int32 Notebook_Given;
    class AActor* CamPos_AfterCinerepair;
    class AActor* PosDrone_AfterCineRepair;
    class AActor* CheckpointPosition;

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void SetMomoTweak_Loop();
    void PlaceElementsAtRightAnimPos();
    void LogicTrigger();
    void ExecuteUbergraph_Dial_Momo(int32 EntryPoint);
    void OnGiveMomoNotebook__DelegateSignature();
};

#endif
