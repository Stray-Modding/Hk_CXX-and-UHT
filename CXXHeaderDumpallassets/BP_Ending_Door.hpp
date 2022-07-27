#ifndef UE4SS_SDK_BP_Ending_Door_HPP
#define UE4SS_SDK_BP_Ending_Door_HPP

class ABP_Ending_Door_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0238 (size: 0x8)
    class UAudioComponent* Elevator_DoorB_VIBE;                                       // 0x0240 (size: 0x8)
    class UAudioComponent* Elevator_DoorA_VIBE;                                       // 0x0248 (size: 0x8)
    class UAudioComponent* Elevator_stop_VIBE;                                        // 0x0250 (size: 0x8)
    class USceneComponent* FX_DustFall;                                               // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Col3;                                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Ending_Door_01_Hinge_C_R;                             // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Ending_Door_01_Hinge_C_L;                             // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Ending_Door_01_Door_R;                                // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Ending_Door_01_Door_L;                                // 0x0280 (size: 0x8)
    class UAudioComponent* door sfx B;                                                // 0x0288 (size: 0x8)
    class UAudioComponent* door sfx A;                                                // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Col2;                                                 // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Col1;                                                 // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* col;                                                  // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Ending_Ads_Screen_A1;                                 // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Ending_Ads_Screen_A;                                  // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Ending_Door_01_Hinge_B_R;                             // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Ending_Door_01_Hinge_B_L;                             // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Ending_Door_01_Hinge_A_L;                             // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Ending_Door_01_Hinge_A_R;                             // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Ending_Door_01_Frame;                                 // 0x02E0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02E8 (size: 0x8)
    float Lerp;                                                                       // 0x02F0 (size: 0x4)
    float Opening_Duration;                                                           // 0x02F4 (size: 0x4)
    bool IsOpen;                                                                      // 0x02F8 (size: 0x1)
    class UCurveFloat* OpeningAnimation;                                              // 0x0300 (size: 0x8)
    float VibrationLevel;                                                             // 0x0308 (size: 0x4)
    float vibrationDistanceStart;                                                     // 0x030C (size: 0x4)
    class ABP_CatPawn_C* cat;                                                         // 0x0310 (size: 0x8)

    void UserConstructionScript();
    void Complete_578069E64FB8DCA8E1905FB7D8AF5683();
    void Tick_578069E64FB8DCA8E1905FB7D8AF5683(float Ratio);
    void Open();
    void LogicTrigger();
    void SetScreenColors(class UMaterialInterface* Material);
    void ReceiveBeginPlay();
    void Update Movement();
    void StartVibrationDoorA();
    void StartVibrationDoorB();
    void VibrationDoorStop();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_Ending_Door_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void UpdateVibrationPS4();
    void ExecuteUbergraph_BP_Ending_Door(int32 EntryPoint);
}; // Size: 0x318

#endif
