#ifndef UE4SS_SDK_CACA_BP_CamCurvesSwitcher_HPP
#define UE4SS_SDK_CACA_BP_CamCurvesSwitcher_HPP

class ACACA_BP_CamCurvesSwitcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float Cam_Target_Blend_NewTrack_0_6FE7F6BC46994E95831539ADAEF53B5F;
    TEnumAsByte<ETimelineDirection::Type> Cam_Target_Blend__Direction_6FE7F6BC46994E95831539ADAEF53B5F;
    class UTimelineComponent* Cam Target Blend;
    class ABP_CatPawn_C* CatPawn;
    class ACameraThirdPerson* Camera Third Person;
    FCACA_CamCurvesSwitcherData CurrentCamData;
    FCACA_CamCurvesSwitcherData CamRailData;
    FCACA_CamCurvesSwitcherData CamTorchlightData;
    FCACA_CamCurvesSwitcherData CamRunData;
    FCACA_CamCurvesSwitcherData CamCrouchData;
    FCACA_CamCurvesSwitcherData CamDialData;
    FCACA_CamCurvesSwitcherData CamDialB12Data;
    FName New Cam;
    FName Current Cam;
    class AActor* TalkingOwner;
    class ABP_CameraThirdPerson_C* BP Camera Third;
    bool Curves on/off;
    float Cam Target Alpha IN;
    float Cam Target Alpha OUT;
    float InitDialZ;

    void IntitDialogueTarget();
    void DialogueTarget();
    void BlendCam(FCACA_CamCurvesSwitcherData Data);
    void Cam Target Blend__FinishedFunc();
    void Cam Target Blend__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CACA_BP_CamCurvesSwitcher(int32 EntryPoint);
};

#endif
