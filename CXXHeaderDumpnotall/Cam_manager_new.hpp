#ifndef UE4SS_SDK_Cam_manager_new_HPP
#define UE4SS_SDK_Cam_manager_new_HPP

class ACam_manager_new_C : public APlayerCameraManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera;
    float Alpha_Alpha_C48C186643E1FC01E4FA158513C3931D;
    TEnumAsByte<ETimelineDirection::Type> Alpha__Direction_C48C186643E1FC01E4FA158513C3931D;
    class UTimelineComponent* Alpha;
    class UPostProcessComponent* PostProcess_Zurg;
    int32 nb_zurgs;
    float OverlayAlpha;

    void Alpha__FinishedFunc();
    void Alpha__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Shake();
    void FadeIn();
    void FadeOut();
    void ZurgAttached(class ACatPawn* cat, class AZurgPawn* Zurg);
    void ExecuteUbergraph_Cam_manager_new(int32 EntryPoint);
};

#endif
