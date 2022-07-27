#ifndef UE4SS_SDK_BP_WaterPlateform_Base_HPP
#define UE4SS_SDK_BP_WaterPlateform_Base_HPP

class ABP_WaterPlateform_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* vibration;                                                 // 0x0230 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0238 (size: 0x8)
    class USpringFloat_C* Spring_RotY;                                                // 0x0240 (size: 0x8)
    class USpringFloat_C* Spring_RotX;                                                // 0x0248 (size: 0x8)
    class USpringFloat_C* Spring_Z;                                                   // 0x0250 (size: 0x8)
    class UMovingActorComponent* MovingActor;                                         // 0x0258 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    float Timer;                                                                      // 0x0270 (size: 0x4)
    float TargetOffsetZ;                                                              // 0x0274 (size: 0x4)
    bool CatIsOnPlateform;                                                            // 0x0278 (size: 0x1)
    FVector InitLocation;                                                             // 0x027C (size: 0xC)
    bool RotX;                                                                        // 0x0288 (size: 0x1)
    bool RotY;                                                                        // 0x0289 (size: 0x1)
    bool TransZ;                                                                      // 0x028A (size: 0x1)
    float Rotation;                                                                   // 0x028C (size: 0x4)
    FRotator Init_Rotator;                                                            // 0x0290 (size: 0xC)
    class USoundBase* sound to play when cat lands;                                   // 0x02A0 (size: 0x8)
    float Volume Multiplier;                                                          // 0x02A8 (size: 0x4)
    class ACatPawn* cat;                                                              // 0x02B0 (size: 0x8)
    FVector CatFromCenter;                                                            // 0x02B8 (size: 0xC)
    bool NeedToUpdate;                                                                // 0x02C4 (size: 0x1)

    void NeedToUpdatePlatform();
    void Update(float& Output_Get);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Rotation Axe X();
    void Rotation Axe Y();
    void Translation Z();
    void BndEvt__BP_WaterPlateform_Base_Streaming_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void UpdateRotationPlateform();
    void Update Sound();
    void ExecuteUbergraph_BP_WaterPlateform_Base(int32 EntryPoint);
}; // Size: 0x2C5

#endif
