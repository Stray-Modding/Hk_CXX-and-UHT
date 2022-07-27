#ifndef UE4SS_SDK_BP_DoorWindowBase_HPP
#define UE4SS_SDK_BP_DoorWindowBase_HPP

class ABP_DoorWindowBase_C : public AActor
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
    float Mvt_Duration_Opening;                                                       // 0x02E0 (size: 0x4)
    TEnumAsByte<EEasingFunction> Easing_f_Opening;                                    // 0x02E4 (size: 0x1)
    float Mvt_Duration_Closing;                                                       // 0x02E8 (size: 0x4)
    TEnumAsByte<EEasingFunction> Easing_f_Closing;                                    // 0x02EC (size: 0x1)
    bool IsOpen;                                                                      // 0x02ED (size: 0x1)
    bool IsMoving;                                                                    // 0x02EE (size: 0x1)
    bool HasBeenInteractedOnce;                                                       // 0x02EF (size: 0x1)
    FBP_DoorWindowBase_COnStartMovement OnStartMovement;                              // 0x02F0 (size: 0x10)
    void OnStartMovement(bool IsOpen);
    FBP_DoorWindowBase_COnEndMovement OnEndMovement;                                  // 0x0300 (size: 0x10)
    void OnEndMovement(bool IsOpen);
    class USoundAttenuation* Attenuation;                                             // 0x0310 (size: 0x8)
    class USoundBase* opening_start_trigger;                                          // 0x0318 (size: 0x8)
    class USoundBase* closing_start_trigger;                                          // 0x0320 (size: 0x8)
    class USoundBase* opening_stop_trigger;                                           // 0x0328 (size: 0x8)
    class USoundBase* closing_stop_trigger;                                           // 0x0330 (size: 0x8)
    bool EmitGameplayNoise;                                                           // 0x0338 (size: 0x1)
    float NoiseDistance;                                                              // 0x033C (size: 0x4)
    float opening loop fade in duration;                                              // 0x0340 (size: 0x4)
    float opening loop fade out duration;                                             // 0x0344 (size: 0x4)
    float closing loop fade in duration;                                              // 0x0348 (size: 0x4)
    float closing loop fade out duration;                                             // 0x034C (size: 0x4)
    float Pitch;                                                                      // 0x0350 (size: 0x4)
    float random pitch;                                                               // 0x0354 (size: 0x4)
    bool Mesh_is_Static_bydefault;                                                    // 0x0358 (size: 0x1)
    float opening stop delay;                                                         // 0x035C (size: 0x4)
    float closing stop delay;                                                         // 0x0360 (size: 0x4)
    float opening start gain;                                                         // 0x0364 (size: 0x4)
    float opening stop gain;                                                          // 0x0368 (size: 0x4)
    float closing start gain;                                                         // 0x036C (size: 0x4)
    float closing stop gain;                                                          // 0x0370 (size: 0x4)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA664D7896();
    void Tick_6246EF4646E19036986D72BA664D7896(float Ratio);
    void Complete_6246EF4646E19036986D72BA902EDD56();
    void Tick_6246EF4646E19036986D72BA902EDD56(float Ratio);
    void Open();
    void Close();
    void InstantOpen();
    void InstantClose();
    void LogicTrigger();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void set mesh as movable();
    void ExecuteUbergraph_BP_DoorWindowBase(int32 EntryPoint);
    void OnEndMovement__DelegateSignature(bool IsOpen);
    void OnStartMovement__DelegateSignature(bool IsOpen);
}; // Size: 0x374

#endif
