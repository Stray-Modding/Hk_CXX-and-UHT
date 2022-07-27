#ifndef UE4SS_SDK_SEQ_CameraSplineChangeParameters_HPP
#define UE4SS_SDK_SEQ_CameraSplineChangeParameters_HPP

class ASEQ_CameraSplineChangeParameters_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Activate;                                                                    // 0x0270 (size: 0x1)
    class ABP_SplineCamera_C* cameraSpline;                                           // 0x0278 (size: 0x8)
    bool ChangeLookAtTarget;                                                          // 0x0280 (size: 0x1)
    class AActor* LookAtTarget;                                                       // 0x0288 (size: 0x8)
    float TimeToChangeTarget;                                                         // 0x0290 (size: 0x4)
    bool ChangeRotationMode;                                                          // 0x0294 (size: 0x1)
    TEnumAsByte<CameraRotationMode> RotationMode;                                     // 0x0295 (size: 0x1)
    float LookAtOnSplineTargetDistance;                                               // 0x0298 (size: 0x4)
    class AActor* Spline to Look At;                                                  // 0x02A0 (size: 0x8)
    bool ChangeDistance;                                                              // 0x02A8 (size: 0x1)
    float OffsetDistanceForward;                                                      // 0x02AC (size: 0x4)
    float OffsetDistanceForward_init;                                                 // 0x02B0 (size: 0x4)
    float OffsetDistanceBackward;                                                     // 0x02B4 (size: 0x4)
    float OffsetDistanceBackward_init;                                                // 0x02B8 (size: 0x4)
    float TimeToChangeDistance;                                                       // 0x02BC (size: 0x4)
    bool ChangeFOV;                                                                   // 0x02C0 (size: 0x1)
    float FOV;                                                                        // 0x02C4 (size: 0x4)
    float TimeToChangeFOV;                                                            // 0x02C8 (size: 0x4)
    float FOV_init;                                                                   // 0x02CC (size: 0x4)
    FVector LookAtTargetStart;                                                        // 0x02D0 (size: 0xC)
    FVector LookAtTargetEnd;                                                          // 0x02DC (size: 0xC)
    bool ChangeUseCameraOrientation;                                                  // 0x02E8 (size: 0x1)
    bool UseCameraOrientation;                                                        // 0x02E9 (size: 0x1)
    bool ChangeBlendRotationSpeed;                                                    // 0x02EA (size: 0x1)
    float BlendRotationSpeed;                                                         // 0x02EC (size: 0x4)
    bool ChangeUseSpeedAltitude;                                                      // 0x02F0 (size: 0x1)
    float AltitudeMin;                                                                // 0x02F4 (size: 0x4)
    float AltitudeMax;                                                                // 0x02F8 (size: 0x4)
    float TimeToChangeAltitude;                                                       // 0x02FC (size: 0x4)
    bool ChangeSpeed;                                                                 // 0x0300 (size: 0x1)
    float CameraSpeedInit;                                                            // 0x0304 (size: 0x4)
    float CameraSpeed;                                                                // 0x0308 (size: 0x4)
    float TimeToChangeSpeed;                                                          // 0x030C (size: 0x4)

    void Complete_6246EF4646E19036986D72BA51214147();
    void Tick_6246EF4646E19036986D72BA51214147(float Ratio);
    void Complete_6246EF4646E19036986D72BAFAA50284();
    void Tick_6246EF4646E19036986D72BAFAA50284(float Ratio);
    void Complete_6246EF4646E19036986D72BA3FC8587D();
    void Tick_6246EF4646E19036986D72BA3FC8587D(float Ratio);
    void Complete_6246EF4646E19036986D72BA52AF4351();
    void Tick_6246EF4646E19036986D72BA52AF4351(float Ratio);
    void Complete_6246EF4646E19036986D72BA161E3CD8();
    void Tick_6246EF4646E19036986D72BA161E3CD8(float Ratio);
    void Complete_6246EF4646E19036986D72BA6CB33DFD();
    void Tick_6246EF4646E19036986D72BA6CB33DFD(float Ratio);
    void LogicTrigger();
    void OnStartSequence();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void Change Camera Speed();
    void Change Rotation Mode();
    void Change LookAt Target();
    void Change Distance();
    void Change FOV();
    void Change Use speed Altitude();
    void ExecuteUbergraph_SEQ_CameraSplineChangeParameters(int32 EntryPoint);
}; // Size: 0x310

#endif
