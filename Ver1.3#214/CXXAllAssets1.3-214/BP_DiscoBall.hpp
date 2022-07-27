#ifndef UE4SS_SDK_BP_DiscoBall_HPP
#define UE4SS_SDK_BP_DiscoBall_HPP

class ABP_DiscoBall_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Ball;                                                 // 0x0230 (size: 0x8)
    class USceneComponent* GEAR_2_Down;                                               // 0x0238 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0240 (size: 0x8)
    class USceneComponent* GEAR_1_Side;                                               // 0x0248 (size: 0x8)
    class USceneComponent* GEAR_1_Top;                                                // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Gear_1_RopeCircle;                                    // 0x0258 (size: 0x8)
    class USplineComponent* Spline_Cable_3;                                           // 0x0260 (size: 0x8)
    class UStaticMeshComponent* CubeCableMovement;                                    // 0x0268 (size: 0x8)
    class USplineComponent* Spline_Cable_2;                                           // 0x0270 (size: 0x8)
    class UStaticMeshComponent* rope_circle12;                                        // 0x0278 (size: 0x8)
    class UStaticMeshComponent* rope_circle11;                                        // 0x0280 (size: 0x8)
    class UStaticMeshComponent* rope_circle10;                                        // 0x0288 (size: 0x8)
    class UStaticMeshComponent* rope_circle9;                                         // 0x0290 (size: 0x8)
    class UStaticMeshComponent* rope_circle8;                                         // 0x0298 (size: 0x8)
    class UStaticMeshComponent* rope_circle7;                                         // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* rope_circle6;                                         // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* rope_circle5;                                         // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* rope_circle4;                                         // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* rope_circle3;                                         // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* rope_circle2;                                         // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* rope_circle1;                                         // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Gear_2;                                               // 0x02D8 (size: 0x8)
    class USplineComponent* Spline_Cable_1;                                           // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Gear_1;                                               // 0x02E8 (size: 0x8)
    class USceneComponent* FX_point;                                                  // 0x02F0 (size: 0x8)
    class USceneComponent* BallPivot;                                                 // 0x02F8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0300 (size: 0x8)
    float LerpValue;                                                                  // 0x0308 (size: 0x4)
    bool IsBlocked;                                                                   // 0x030C (size: 0x1)
    float GEAR_1_To_2_Distance;                                                       // 0x0310 (size: 0x4)
    float GEAR_1_Zoffset;                                                             // 0x0314 (size: 0x4)
    float GEAR_2_Zoffset;                                                             // 0x0318 (size: 0x4)
    float BALL_Zoffset;                                                               // 0x031C (size: 0x4)
    float Ball_Down_Value;                                                            // 0x0320 (size: 0x4)
    bool isOn;                                                                        // 0x0324 (size: 0x1)
    class UMaterialInterface* Mat_Ball_On;                                            // 0x0328 (size: 0x8)
    class UMaterialInterface* Mat_Ball_Off;                                           // 0x0330 (size: 0x8)
    TArray<class ASpotLight*> DiscoLights;                                            // 0x0338 (size: 0x10)
    class ABP_SwitchWithJump_C* BP_SwitchWithJump;                                    // 0x0348 (size: 0x8)
    class ABP_PawPushable_DiscoBlocker_C* PushableBlocker;                            // 0x0350 (size: 0x8)
    class ABP_MovementScripter_C* MovementScripter;                                   // 0x0358 (size: 0x8)
    class AActor* Cam_1;                                                              // 0x0360 (size: 0x8)
    class AActor* Cam_2;                                                              // 0x0368 (size: 0x8)
    class UParticleSystem* FXBroke;                                                   // 0x0370 (size: 0x8)
    class USplineMeshComponent* CableMesh_1;                                          // 0x0378 (size: 0x8)
    bool ReGenerateCable_1;                                                           // 0x0380 (size: 0x1)
    class USplineMeshComponent* CableMesh_2;                                          // 0x0388 (size: 0x8)
    bool ReGenerateCable_2;                                                           // 0x0390 (size: 0x1)
    class USplineMeshComponent* CableMesh_3;                                          // 0x0398 (size: 0x8)
    bool ReGenerateCable_3;                                                           // 0x03A0 (size: 0x1)
    int32 MvtCount;                                                                   // 0x03A4 (size: 0x4)
    FBP_DiscoBall_CDiscoBallON DiscoBallON;                                           // 0x03A8 (size: 0x10)
    void DiscoBallON();

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA8CC088C5();
    void Tick_6246EF4646E19036986D72BA8CC088C5(float Ratio);
    void Complete_6246EF4646E19036986D72BA8AB6BABE();
    void Tick_6246EF4646E19036986D72BA8AB6BABE(float Ratio);
    void Complete_6246EF4646E19036986D72BAD4ACA71B();
    void Tick_6246EF4646E19036986D72BAD4ACA71B(float Ratio);
    void Complete_6246EF4646E19036986D72BA8BB0C5E1();
    void Tick_6246EF4646E19036986D72BA8BB0C5E1(float Ratio);
    void UpdateAllMVT(float Lerp);
    void MoveDown();
    void MoveBlocked();
    void LogicTrigger();
    void SwapBackToCamera(class AActor* _actor);
    void TurnON();
    void UpdateCables();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_3_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnPawPushed_Event_0(class UCOMP_CatPawPushable_C* PawPushableComponent);
    void MovementDone_Event_0(class ABP_MovementScripter_C* MovementScripter);
    void ExecuteUbergraph_BP_DiscoBall(int32 EntryPoint);
    void DiscoBallON__DelegateSignature();
}; // Size: 0x3B8

#endif
