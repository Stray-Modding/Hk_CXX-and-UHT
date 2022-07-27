#ifndef UE4SS_SDK_BP_CounterWeight_HPP
#define UE4SS_SDK_BP_CounterWeight_HPP

class ABP_CounterWeight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* BucketVibration;                                           // 0x0230 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0238 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0240 (size: 0x8)
    class UStaticMeshComponent* BagCollision;                                         // 0x0248 (size: 0x8)
    class UStaticMeshComponent* cable_knot1;                                          // 0x0250 (size: 0x8)
    class UStaticMeshComponent* cable_knot;                                           // 0x0258 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0260 (size: 0x8)
    class USpringFloat_C* Bucket_RotY;                                                // 0x0268 (size: 0x8)
    class USpringFloat_C* Bucket_RotX;                                                // 0x0270 (size: 0x8)
    class USpringFloat_C* BucketGizmo_RotY;                                           // 0x0278 (size: 0x8)
    class USpringFloat_C* BucketGizmo_RotX;                                           // 0x0280 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Bucket1;                                              // 0x0290 (size: 0x8)
    class USceneComponent* RopeBucketAttach;                                          // 0x0298 (size: 0x8)
    class USpringFloat_C* BucketCableAttach_RotY;                                     // 0x02A0 (size: 0x8)
    class USpringFloat_C* BucketCableAttach_RotX;                                     // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* WoodPlane09;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* WoodPlane08;                                          // 0x02B8 (size: 0x8)
    class USceneComponent* WeightCableEnd;                                            // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* bucket;                                               // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* RopeBetweenCableEnd;                                  // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* RopeBetweenCableStart;                                // 0x02E0 (size: 0x8)
    class UAudioComponent* sfx_rope;                                                  // 0x02E8 (size: 0x8)
    class USpringFloat_C* BucketCableRotation;                                        // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* RopeWeightAttach;                                     // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* Plastic_Bag_b;                                        // 0x0300 (size: 0x8)
    class UStaticMeshComponent* WeightGizmo;                                          // 0x0308 (size: 0x8)
    class UStaticMeshComponent* WeightDown;                                           // 0x0310 (size: 0x8)
    class USceneComponent* WeightScene;                                               // 0x0318 (size: 0x8)
    class UStaticMeshComponent* PoulieWeight;                                         // 0x0320 (size: 0x8)
    class USpringFloat_C* BucketZ;                                                    // 0x0328 (size: 0x8)
    class UStaticMeshComponent* BucketDown;                                           // 0x0330 (size: 0x8)
    class UStaticMeshComponent* BucketGizmo;                                          // 0x0338 (size: 0x8)
    class UStaticMeshComponent* BucketUp;                                             // 0x0340 (size: 0x8)
    class UStaticMeshComponent* PoulieBucket;                                         // 0x0348 (size: 0x8)
    class UEditorTickComponent* EditorTick;                                           // 0x0350 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0358 (size: 0x8)
    class ABP_MovingSplineRail_C* MovingSpline;                                       // 0x0360 (size: 0x8)
    bool CatIsOnBucket;                                                               // 0x0368 (size: 0x1)
    class USplineMeshComponent* CableBeetweenPoulie;                                  // 0x0370 (size: 0x8)
    class USplineMeshComponent* WeightCable;                                          // 0x0378 (size: 0x8)
    class USplineMeshComponent* BucketCable;                                          // 0x0380 (size: 0x8)
    float RotationAngleCable;                                                         // 0x0388 (size: 0x4)
    float CatForceOnCable;                                                            // 0x038C (size: 0x4)
    float WeightCableTension;                                                         // 0x0390 (size: 0x4)
    float StifnessCable;                                                              // 0x0394 (size: 0x4)
    FVector last bag location;                                                        // 0x0398 (size: 0xC)
    class USplineMeshComponent* BeetweenPoulieMesh;                                   // 0x03A8 (size: 0x8)
    class USplineMeshComponent* WeightCableMesh;                                      // 0x03B0 (size: 0x8)
    class USplineMeshComponent* BucketCableMesh;                                      // 0x03B8 (size: 0x8)
    class ACatPawn* cat;                                                              // 0x03C0 (size: 0x8)
    float Height;                                                                     // 0x03C8 (size: 0x4)
    float SpeedDown;                                                                  // 0x03CC (size: 0x4)
    float Damping;                                                                    // 0x03D0 (size: 0x4)
    bool isBagTouchGround;                                                            // 0x03D4 (size: 0x1)
    bool NeedToUpdate;                                                                // 0x03D5 (size: 0x1)
    float BucketAltitude;                                                             // 0x03D8 (size: 0x4)
    FVector BucketGizmoLocation;                                                      // 0x03DC (size: 0xC)
    bool BucketUpside;                                                                // 0x03E8 (size: 0x1)

    void CounterWeightNeedUpdate();
    void UserConstructionScript();
    void LogicTrigger();
    void BndEvt__EditorTick_K2Node_ComponentBoundEvent_0_EditorTickSignature__DelegateSignature(float DeltaTime);
    void ReceiveTick(float DeltaSeconds);
    void Construct Cable Between Poulie();
    void Construct Weight Cable();
    void Construct Bucket Cable();
    void Rotate Poulie();
    void Attach Spline Rail();
    void Update Bucket Cable();
    void Update Weigth Cable();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void UpdateBucket();
    void UpdateSound();
    void EnterInBucket();
    void ExitBucket();
    void CatEnterBucket(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ReceiveBeginPlay();
    void CatExitBucket(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void InitCounterWeight();
    void Update ForceFeedback(float Intensity);
    void ExecuteUbergraph_BP_CounterWeight(int32 EntryPoint);
}; // Size: 0x3E9

#endif
