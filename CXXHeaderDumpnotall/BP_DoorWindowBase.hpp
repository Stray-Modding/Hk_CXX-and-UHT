#ifndef UE4SS_SDK_BP_DoorWindowBase_HPP
#define UE4SS_SDK_BP_DoorWindowBase_HPP

class ABP_DoorWindowBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* closing_loop;
    class UAudioComponent* opening_loop;
    class USphereComponent* Sphere_guizmo;
    class UStreamingComponent* Streaming;
    class USaveComponent* Save;
    class UStaticMeshComponent* Door;
    class USceneComponent* MovementPivot;
    class USceneComponent* DefaultSceneRoot;
    float Preview_movement;
    bool StartOpen;
    FTransform Closed_Transform;
    FTransform Opened_Transform;
    float Mvt_Duration_Opening;
    TEnumAsByte<EEasingFunction> Easing_f_Opening;
    float Mvt_Duration_Closing;
    TEnumAsByte<EEasingFunction> Easing_f_Closing;
    bool IsOpen;
    bool IsMoving;
    bool HasBeenInteractedOnce;
    FBP_DoorWindowBase_COnStartMovement OnStartMovement;
    void OnStartMovement(bool IsOpen);
    FBP_DoorWindowBase_COnEndMovement OnEndMovement;
    void OnEndMovement(bool IsOpen);
    class USoundAttenuation* Attenuation;
    class USoundBase* opening_start_trigger;
    class USoundBase* closing_start_trigger;
    class USoundBase* opening_stop_trigger;
    class USoundBase* closing_stop_trigger;
    bool EmitGameplayNoise;
    float NoiseDistance;
    float opening loop fade in duration;
    float opening loop fade out duration;
    float closing loop fade in duration;
    float closing loop fade out duration;
    float Pitch;
    float random pitch;
    bool Mesh_is_Static_bydefault;
    float opening stop delay;
    float closing stop delay;
    float opening start gain;
    float opening stop gain;
    float closing start gain;
    float closing stop gain;

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
};

#endif
