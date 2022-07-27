#ifndef UE4SS_SDK_BP_SplineCamera_SnapToTarget_HPP
#define UE4SS_SDK_BP_SplineCamera_SnapToTarget_HPP

class ABP_SplineCamera_SnapToTarget_C : public ABP_SplineCamera_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    FVector SnapTargetPos;                                                            // 0x03D0 (size: 0xC)
    FVector SnapToTargetOffset;                                                       // 0x03DC (size: 0xC)
    FVector SnapCatPos;                                                               // 0x03E8 (size: 0xC)
    float Distance to target;                                                         // 0x03F4 (size: 0x4)
    FVector SnapHorizontalDirection;                                                  // 0x03F8 (size: 0xC)
    FVector SnapDirection;                                                            // 0x0404 (size: 0xC)
    float SnapYawOffset;                                                              // 0x0410 (size: 0x4)
    float SnapPitchOffset;                                                            // 0x0414 (size: 0x4)
    FVector SnapCameraDirection;                                                      // 0x0418 (size: 0xC)
    bool UseDepthOfField;                                                             // 0x0424 (size: 0x1)
    float Aperture (F-stop);                                                          // 0x0428 (size: 0x4)
    float DistMin;                                                                    // 0x042C (size: 0x4)
    float DistMax;                                                                    // 0x0430 (size: 0x4)
    float FocalMin;                                                                   // 0x0434 (size: 0x4)
    float FocalMax;                                                                   // 0x0438 (size: 0x4)
    float Snap Yaw Offset Init;                                                       // 0x043C (size: 0x4)
    float Snap Pitch Offset Init;                                                     // 0x0440 (size: 0x4)
    float RotationSpeedFactor;                                                        // 0x0444 (size: 0x4)
    float RotationSpeedFactorTemp;                                                    // 0x0448 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void Update Camera Rotation();
    void Input Joy On Camera();
    void Set Camera Rotation();
    void OnCameraFocus(float _blendTime);
    void Set Focal();
    void ChangeInputFactor(float Input Factor target);
    void ExecuteUbergraph_BP_SplineCamera_SnapToTarget(int32 EntryPoint);
}; // Size: 0x44C

#endif
