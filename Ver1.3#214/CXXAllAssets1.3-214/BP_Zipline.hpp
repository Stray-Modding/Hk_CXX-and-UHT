#ifndef UE4SS_SDK_BP_Zipline_HPP
#define UE4SS_SDK_BP_Zipline_HPP

class ABP_Zipline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* BucketVibration;                                           // 0x0230 (size: 0x8)
    class USpringFloat_C* CableDownRotateTangent;                                     // 0x0238 (size: 0x8)
    class UAudioComponent* wheel destination noise;                                   // 0x0240 (size: 0x8)
    class UAudioComponent* bucketpheric_move_loop_01;                                 // 0x0248 (size: 0x8)
    class UAudioComponent* wheel departure noise;                                     // 0x0250 (size: 0x8)
    class UStaticMeshComponent* RedLightCylinder;                                     // 0x0258 (size: 0x8)
    class UStaticMeshComponent* GreenLightCylinder;                                   // 0x0260 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0268 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0270 (size: 0x8)
    class USpringFloat_C* BucketTrans;                                                // 0x0278 (size: 0x8)
    class UStaticMeshComponent* rope_circleStart;                                     // 0x0280 (size: 0x8)
    class UStaticMeshComponent* WheelZiplineDest;                                     // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Dest;                                                 // 0x0290 (size: 0x8)
    class USpringFloat_C* BucketRotation;                                             // 0x0298 (size: 0x8)
    class USpringFloat_C* AttachRotation;                                             // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* bucket;                                               // 0x02A8 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* rope_circleDest;                                      // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* CableDownDest;                                        // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* CableUpDest;                                          // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* CableDownStart;                                       // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* CableUpStart;                                         // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* WheelZiplineStart;                                    // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Start;                                                // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* Zipline_Gear_B;                                       // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* ZiplineFrame_Dest;                                    // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* ZiplineFrame_Start;                                   // 0x0300 (size: 0x8)
    class UStaticMeshComponent* Attach;                                               // 0x0308 (size: 0x8)
    class USplineComponent* SplineCableDown1;                                         // 0x0310 (size: 0x8)
    class USplineComponent* SplineCableDown0;                                         // 0x0318 (size: 0x8)
    class UStaticMeshComponent* SM_ZiplinePlug;                                       // 0x0320 (size: 0x8)
    class UStaticMeshComponent* BucketOrigin;                                         // 0x0328 (size: 0x8)
    class UStaticMeshComponent* BucketDest;                                           // 0x0330 (size: 0x8)
    class USplineComponent* SplineCableUp;                                            // 0x0338 (size: 0x8)
    class UEditorTickComponent* EditorTick;                                           // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)
    bool Enable;                                                                      // 0x0350 (size: 0x1)
    bool IsMoving;                                                                    // 0x0351 (size: 0x1)
    FVector InitPos;                                                                  // 0x0354 (size: 0xC)
    FVector DestPos;                                                                  // 0x0360 (size: 0xC)
    bool CablesDownGenerated_0;                                                       // 0x036C (size: 0x1)
    bool CablesDownGenerated_1;                                                       // 0x036D (size: 0x1)
    float BucketOffset;                                                               // 0x0370 (size: 0x4)
    class USplineMeshComponent* cableUp;                                              // 0x0378 (size: 0x8)
    class USplineMeshComponent* cableDown_0;                                          // 0x0380 (size: 0x8)
    class USplineMeshComponent* cableDown_1;                                          // 0x0388 (size: 0x8)
    class USceneComponent* NewVar_0;                                                  // 0x0390 (size: 0x8)
    bool CablesUpGenerated;                                                           // 0x0398 (size: 0x1)
    float CableOffset;                                                                // 0x039C (size: 0x4)
    class ABP_MovingSplineRail_C* MovingSpline;                                       // 0x03A0 (size: 0x8)
    bool CatIsOnBucket;                                                               // 0x03A8 (size: 0x1)
    FVector CurrentPos;                                                               // 0x03AC (size: 0xC)
    float previousAlpha;                                                              // 0x03B8 (size: 0x4)
    bool Reverse;                                                                     // 0x03BC (size: 0x1)
    float AttachSpringTarget;                                                         // 0x03C0 (size: 0x4)
    float BucketSpringTarget;                                                         // 0x03C4 (size: 0x4)
    bool UpdateMesh;                                                                  // 0x03C8 (size: 0x1)
    class ACatPawn* cat;                                                              // 0x03D0 (size: 0x8)
    float WheelRotationSpeed;                                                         // 0x03D8 (size: 0x4)
    float StartOffset;                                                                // 0x03DC (size: 0x4)
    float EndOffset;                                                                  // 0x03E0 (size: 0x4)
    bool NeedToUpdate;                                                                // 0x03E4 (size: 0x1)
    FVector currentPosOffsetted;                                                      // 0x03E8 (size: 0xC)
    FRotator ZiplinePlug_rotation;                                                    // 0x03F4 (size: 0xC)
    float Alpha;                                                                      // 0x0400 (size: 0x4)
    float Delta Seconds;                                                              // 0x0404 (size: 0x4)
    float Speed;                                                                      // 0x0408 (size: 0x4)
    float SpeedFactor;                                                                // 0x040C (size: 0x4)
    FVector Trajectory;                                                               // 0x0410 (size: 0xC)
    float TrajectoryDistance;                                                         // 0x041C (size: 0x4)
    FVector TrajectoryNormalized;                                                     // 0x0420 (size: 0xC)
    float SpeedMax;                                                                   // 0x042C (size: 0x4)
    FVector TargetPos;                                                                // 0x0430 (size: 0xC)
    float currentSpeed;                                                               // 0x043C (size: 0x4)
    float PitchMultiplier;                                                            // 0x0440 (size: 0x4)
    float DistanceToTarget;                                                           // 0x0444 (size: 0x4)
    float DistanceStartToDecelerate;                                                  // 0x0448 (size: 0x4)
    float SpeedRatio;                                                                 // 0x044C (size: 0x4)
    float AngleTarget;                                                                // 0x0450 (size: 0x4)
    float RotationAngleCableUp;                                                       // 0x0454 (size: 0x4)
    FVector CableDown_0_Tangent;                                                      // 0x0458 (size: 0xC)
    FVector CableDown_1_Tangent;                                                      // 0x0464 (size: 0xC)
    FVector CableUp_Tangent;                                                          // 0x0470 (size: 0xC)
    float CableStifness;                                                              // 0x047C (size: 0x4)
    FVector CableRotationAxe;                                                         // 0x0480 (size: 0xC)

    float GetBucketTrajectoryZ();
    void ZiplineNeedUpdate();
    void SetEnable(bool Enable);
    void UserConstructionScript();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__EditorTick_K2Node_ComponentBoundEvent_0_EditorTickSignature__DelegateSignature(float DeltaTime);
    void UpdateCableDown_1();
    void UpdateCableDown_0();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Start_Moving();
    void Attach_Rail();
    void sfx start();
    void sfx stop();
    void CatIsOnRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void CatExitRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ReceiveBeginPlay();
    void UpdateBucket();
    void RotateWheel();
    void Update ForceFeedback(float Intensity);
    void UpdateMove();
    void ResetLight();
    void UpdateCableUp();
    void ExecuteUbergraph_BP_Zipline(int32 EntryPoint);
}; // Size: 0x48C

#endif
