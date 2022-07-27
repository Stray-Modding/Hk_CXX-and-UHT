#ifndef UE4SS_SDK_BP_DoorAnalogBase_HPP
#define UE4SS_SDK_BP_DoorAnalogBase_HPP

class ABP_DoorAnalogBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* closing_loop;                                              // 0x0230 (size: 0x8)
    class UAudioComponent* opening_loop;                                              // 0x0238 (size: 0x8)
    class USphereComponent* Sphere_guizmo;                                            // 0x0240 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0248 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Door;                                                 // 0x0258 (size: 0x8)
    class USceneComponent* MovementPivot;                                             // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    float Preview_movement;                                                           // 0x0270 (size: 0x4)
    bool StartOpen;                                                                   // 0x0274 (size: 0x1)
    FTransform Closed_Transform;                                                      // 0x0280 (size: 0x30)
    FTransform Opened_Transform;                                                      // 0x02B0 (size: 0x30)
    bool IsOpen;                                                                      // 0x02E0 (size: 0x1)
    bool HasBeenInteractedOnce;                                                       // 0x02E1 (size: 0x1)
    FBP_DoorAnalogBase_COnStartMovement OnStartMovement;                              // 0x02E8 (size: 0x10)
    void OnStartMovement(bool IsOpen);
    FBP_DoorAnalogBase_COnEndMovement OnEndMovement;                                  // 0x02F8 (size: 0x10)
    void OnEndMovement(bool IsOpen);
    class USoundAttenuation* Attenuation;                                             // 0x0308 (size: 0x8)
    class USoundBase* opening_start_trigger;                                          // 0x0310 (size: 0x8)
    class USoundBase* closing_start_trigger;                                          // 0x0318 (size: 0x8)
    class USoundBase* opening_stop_trigger;                                           // 0x0320 (size: 0x8)
    class USoundBase* closing_stop_trigger;                                           // 0x0328 (size: 0x8)
    float opening loop fade out duration;                                             // 0x0330 (size: 0x4)
    float closing loop fade out duration;                                             // 0x0334 (size: 0x4)
    float OpeningRatio;                                                               // 0x0338 (size: 0x4)
    float OpeningSpeed;                                                               // 0x033C (size: 0x4)
    float ClosingSpeed;                                                               // 0x0340 (size: 0x4)
    float OpeningRatioTarget;                                                         // 0x0344 (size: 0x4)
    TArray<class AActor*> AttachObject;                                               // 0x0348 (size: 0x10)
    class UCurveFloat* OpenCurveAcceleration;                                         // 0x0358 (size: 0x8)
    class UCurveFloat* CloseCurveAcceleration;                                        // 0x0360 (size: 0x8)
    float Pitch;                                                                      // 0x0368 (size: 0x4)
    bool NeedToUpdate;                                                                // 0x036C (size: 0x1)

    void UserConstructionScript();
    void Open();
    void Close();
    void InstantOpen();
    void InstantClose();
    void LogicTrigger();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_DoorAnalogBase(int32 EntryPoint);
    void OnEndMovement__DelegateSignature(bool IsOpen);
    void OnStartMovement__DelegateSignature(bool IsOpen);
}; // Size: 0x36D

#endif
