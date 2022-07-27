#ifndef UE4SS_SDK_Cam_manager_new_HPP
#define UE4SS_SDK_Cam_manager_new_HPP

class ACam_manager_new_C : public APlayerCameraManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x2820 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x2828 (size: 0x8)
    float Alpha_Alpha_C48C186643E1FC01E4FA158513C3931D;                               // 0x2830 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Alpha__Direction_C48C186643E1FC01E4FA158513C3931D; // 0x2834 (size: 0x1)
    class UTimelineComponent* Alpha;                                                  // 0x2838 (size: 0x8)
    class UPostProcessComponent* PostProcess_Zurg;                                    // 0x2840 (size: 0x8)
    int32 nb_zurgs;                                                                   // 0x2848 (size: 0x4)
    float OverlayAlpha;                                                               // 0x284C (size: 0x4)

    void Alpha__FinishedFunc();
    void Alpha__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Shake();
    void FadeIn();
    void FadeOut();
    void ZurgAttached(class ACatPawn* cat, class AZurgPawn* Zurg);
    void ExecuteUbergraph_Cam_manager_new(int32 EntryPoint);
}; // Size: 0x2850

#endif
