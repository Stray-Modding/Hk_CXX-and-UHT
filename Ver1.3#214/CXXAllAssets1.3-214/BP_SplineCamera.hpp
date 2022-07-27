#ifndef UE4SS_SDK_BP_SplineCamera_HPP
#define UE4SS_SDK_BP_SplineCamera_HPP

class ABP_SplineCamera_C : public AHKCamera
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0240 (size: 0x8)
    class USplineComponent* LateralSpline;                                            // 0x0248 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0250 (size: 0x8)
    class USceneComponent* CameraScene;                                               // 0x0258 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0260 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0268 (size: 0x8)
    bool Debug;                                                                       // 0x0270 (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x0278 (size: 0x8)
    FRotator JoyWantedRotator;                                                        // 0x0280 (size: 0xC)
    float CatDistanceOnSpline;                                                        // 0x028C (size: 0x4)
    float CameraSpeed;                                                                // 0x0290 (size: 0x4)
    float JoyAngleAmplitudeX;                                                         // 0x0294 (size: 0x4)
    float OffsetDistance;                                                             // 0x0298 (size: 0x4)
    float WantedOffsetDistance;                                                       // 0x029C (size: 0x4)
    float OffsetDistanceOnSplineFront;                                                // 0x02A0 (size: 0x4)
    float OffsetDistanceOnSplineBack;                                                 // 0x02A4 (size: 0x4)
    float OffsetDistanceSpeed;                                                        // 0x02A8 (size: 0x4)
    bool UseCameraSpeedBack;                                                          // 0x02AC (size: 0x1)
    float CameraSpeedBack;                                                            // 0x02B0 (size: 0x4)
    bool UseCameraOrientation;                                                        // 0x02B4 (size: 0x1)
    float OrientationSign;                                                            // 0x02B8 (size: 0x4)
    bool UseLateralSpline;                                                            // 0x02BC (size: 0x1)
    float JoyAngleAmplitudeY;                                                         // 0x02C0 (size: 0x4)
    float JoyRotateSmooth;                                                            // 0x02C4 (size: 0x4)
    float CameraLateralSpeed;                                                         // 0x02C8 (size: 0x4)
    float DistanceOnSpline;                                                           // 0x02CC (size: 0x4)
    float WantedDistanceOnSpline;                                                     // 0x02D0 (size: 0x4)
    TEnumAsByte<CameraRotationMode> RotationMode;                                     // 0x02D4 (size: 0x1)
    float SplineOrientRatio;                                                          // 0x02D8 (size: 0x4)
    FRotator WantedCameraRotator;                                                     // 0x02DC (size: 0xC)
    bool UseScreenZoneRotationBlend;                                                  // 0x02E8 (size: 0x1)
    FVector2D ScreenZoneSize;                                                         // 0x02EC (size: 0x8)
    float CameraBlendInsideNeutralZone;                                               // 0x02F4 (size: 0x4)
    float CameraBlendRotationSpeedFront;                                              // 0x02F8 (size: 0x4)
    bool UseBlendRotationSpeedBack;                                                   // 0x02FC (size: 0x1)
    float CameraBlendRotationSpeedBack;                                               // 0x0300 (size: 0x4)
    class AActor* LookAtTarget;                                                       // 0x0308 (size: 0x8)
    FVector LookAtOffset;                                                             // 0x0310 (size: 0xC)
    FRotator InitRotator;                                                             // 0x031C (size: 0xC)
    FRotator CameraRotator;                                                           // 0x0328 (size: 0xC)
    float DistanceOnLateralSpline;                                                    // 0x0334 (size: 0x4)
    float WantedDistanceOnLateralSpline;                                              // 0x0338 (size: 0x4)
    FVector2D CurrentAngleTilt;                                                       // 0x033C (size: 0x8)
    FVector2D AngleTiltAmplitudeYaw;                                                  // 0x0344 (size: 0x8)
    FVector2D AngleTiltAmplitudePitch;                                                // 0x034C (size: 0x8)
    float OffsetDistanceOnLateralSpline;                                              // 0x0354 (size: 0x4)
    float Joy InputSpeed;                                                             // 0x0358 (size: 0x4)
    TEnumAsByte<CameraLookAtOnSplineLinkTo> SplineToLookAtLinkedTo;                   // 0x035C (size: 0x1)
    float LookAtOnSplineTarget Distance;                                              // 0x0360 (size: 0x4)
    class AActor* SplineToLookAt;                                                     // 0x0368 (size: 0x8)
    FVector LookAtOnSplineDirection;                                                  // 0x0370 (size: 0xC)
    float CatSpeedRatioBlended;                                                       // 0x037C (size: 0x4)
    bool UseSpeedAltitudeOffset;                                                      // 0x0380 (size: 0x1)
    float AltitudeMin;                                                                // 0x0384 (size: 0x4)
    float AltitudeMax;                                                                // 0x0388 (size: 0x4)
    float AltitudeCurrent;                                                            // 0x038C (size: 0x4)
    float CameraBlendRotationSpeedWanted;                                             // 0x0390 (size: 0x4)
    float LateralSplineOffset;                                                        // 0x0394 (size: 0x4)
    float LateralSplineDamp;                                                          // 0x0398 (size: 0x4)
    FRotator WantedJoyAngleRotator;                                                   // 0x039C (size: 0xC)
    bool ThirdCam;                                                                    // 0x03A8 (size: 0x1)
    float ThirdCamera_Timer;                                                          // 0x03AC (size: 0x4)
    FRotator CameraRotatorFinal;                                                      // 0x03B0 (size: 0xC)
    float LateralSplineDampSigned;                                                    // 0x03BC (size: 0x4)
    bool disableJoyInput;                                                             // 0x03C0 (size: 0x1)
    float BlendTimeIn;                                                                // 0x03C4 (size: 0x4)

    float GetTargetScreenRatio();
    float GetLateralRatio();
    void CheckCameraOrientation();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void OnCameraFocus(float _blendTime);
    void OnCameraFocusLost(float _blendTime);
    void UpdateCamera();
    void InitCamera();
    void Player Projection On Spline();
    void Update Camera Rotation();
    void Input Joy On Camera();
    void Set Camera Rotation();
    void Set Camera Location();
    void LerpDistanceOnSpline();
    void LerpDistanceOnLateralSpline();
    void SetCameraLocationWithLateralSpline();
    void LerpOffsetDistance();
    void SetWantedDistanceOnSpline();
    void Disengage_Camera();
    void Set Camera Orientation(bool UseCameraOrientation);
    void ExecuteUbergraph_BP_SplineCamera(int32 EntryPoint);
}; // Size: 0x3C8

#endif
