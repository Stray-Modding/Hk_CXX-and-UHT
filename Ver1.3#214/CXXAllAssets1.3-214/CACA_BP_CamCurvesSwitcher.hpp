#ifndef UE4SS_SDK_CACA_BP_CamCurvesSwitcher_HPP
#define UE4SS_SDK_CACA_BP_CamCurvesSwitcher_HPP

class ACACA_BP_CamCurvesSwitcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float Cam_Target_Blend_NewTrack_0_6FE7F6BC46994E95831539ADAEF53B5F;               // 0x0238 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Cam_Target_Blend__Direction_6FE7F6BC46994E95831539ADAEF53B5F; // 0x023C (size: 0x1)
    class UTimelineComponent* Cam Target Blend;                                       // 0x0240 (size: 0x8)
    class ABP_CatPawn_C* CatPawn;                                                     // 0x0248 (size: 0x8)
    class ACameraThirdPerson* Camera Third Person;                                    // 0x0250 (size: 0x8)
    FCACA_CamCurvesSwitcherData CurrentCamData;                                       // 0x0258 (size: 0xA0)
    FCACA_CamCurvesSwitcherData CamRailData;                                          // 0x02F8 (size: 0xA0)
    FCACA_CamCurvesSwitcherData CamTorchlightData;                                    // 0x0398 (size: 0xA0)
    FCACA_CamCurvesSwitcherData CamRunData;                                           // 0x0438 (size: 0xA0)
    FCACA_CamCurvesSwitcherData CamCrouchData;                                        // 0x04D8 (size: 0xA0)
    FCACA_CamCurvesSwitcherData CamDialData;                                          // 0x0578 (size: 0xA0)
    FCACA_CamCurvesSwitcherData CamDialB12Data;                                       // 0x0618 (size: 0xA0)
    FName New Cam;                                                                    // 0x06B8 (size: 0x8)
    FName Current Cam;                                                                // 0x06C0 (size: 0x8)
    class AActor* TalkingOwner;                                                       // 0x06C8 (size: 0x8)
    class ABP_CameraThirdPerson_C* BP Camera Third;                                   // 0x06D0 (size: 0x8)
    bool Curves on/off;                                                               // 0x06D8 (size: 0x1)
    float Cam Target Alpha IN;                                                        // 0x06DC (size: 0x4)
    float Cam Target Alpha OUT;                                                       // 0x06E0 (size: 0x4)
    float InitDialZ;                                                                  // 0x06E4 (size: 0x4)

    void IntitDialogueTarget();
    void DialogueTarget();
    void BlendCam(FCACA_CamCurvesSwitcherData Data);
    void Cam Target Blend__FinishedFunc();
    void Cam Target Blend__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CACA_BP_CamCurvesSwitcher(int32 EntryPoint);
}; // Size: 0x6E8

#endif
