#ifndef UE4SS_SDK_CACA_ClubSmallElevator_HPP
#define UE4SS_SDK_CACA_ClubSmallElevator_HPP

class ACACA_ClubSmallElevator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* PS5Vibration;                                              // 0x0230 (size: 0x8)
    class USceneComponent* Bottom_Pivot;                                              // 0x0238 (size: 0x8)
    class USceneComponent* Top_Pivot;                                                 // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Bottom_Visual;                                        // 0x0248 (size: 0x8)
    class UBoxComponent* ResetBox;                                                    // 0x0250 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Cube5;                                                // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Cube4;                                                // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Cube3;                                                // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Cube2;                                                // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Top;                                                  // 0x0280 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0288 (size: 0x8)
    class UBoxComponent* CatDetectionBox;                                             // 0x0290 (size: 0x8)
    class USceneComponent* MVT_pivot;                                                 // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    bool IsEnabled;                                                                   // 0x02A8 (size: 0x1)
    bool isUp;                                                                        // 0x02A9 (size: 0x1)
    bool WithCat;                                                                     // 0x02AA (size: 0x1)
    float Depth;                                                                      // 0x02AC (size: 0x4)
    float Lerp;                                                                       // 0x02B0 (size: 0x4)
    class AActor* CamUp;                                                              // 0x02B8 (size: 0x8)
    class AActor* CamDown;                                                            // 0x02C0 (size: 0x8)
    class AActor* Platform_Top;                                                       // 0x02C8 (size: 0x8)
    class AActor* Platform_Bottom;                                                    // 0x02D0 (size: 0x8)
    class AActor* CurrentCam;                                                         // 0x02D8 (size: 0x8)
    class ACameraThirdPerson* CamThirdPerson;                                         // 0x02E0 (size: 0x8)
    TArray<class ABP_DiscoLight_C*> DiscoLight;                                       // 0x02E8 (size: 0x10)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA152D2579();
    void Tick_6246EF4646E19036986D72BA152D2579(float Ratio);
    void LogicTrigger();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CamElevator(class AActor* NewCam);
    void ElevatorMovement(float StartDelay, float Time, bool MoveUp);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_7_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void SetCamDuringMovement();
    void BndEvt__ResetBox_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ResetBox_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateElevatorPos(float Lerp);
    void SetElevatorEnabled(bool IsEnabled);
    void ExecuteUbergraph_CACA_ClubSmallElevator(int32 EntryPoint);
}; // Size: 0x2F8

#endif
