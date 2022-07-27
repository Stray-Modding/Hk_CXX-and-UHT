#ifndef UE4SS_SDK_COMP_UsableDroneMemory_HPP
#define UE4SS_SDK_COMP_UsableDroneMemory_HPP

class UCOMP_UsableDroneMemory_C : public UTalkableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName memoryId;
    FB12MemoryData MemoryData;
    bool IsValid_0;
    bool IsInDialogPhase;
    class UUMG_Drone_MemoriesPopup_New_C* MemoriesPopupWidget;
    FName actorId of sfx to play;
    float sfx play delay;
    class UPointLightComponent* Light;
    class UParticleSystemComponent* FX;
    float LightIntensity;
    class UAudioComponent* FirefliesSoundLoop;

    bool IsEnabled();
    bool _CanStartUse();
    class USceneComponent* GetFinalUseSocket(FName& _outSocket);
    void Complete_6246EF4646E19036986D72BA2282118B();
    void Tick_6246EF4646E19036986D72BA2282118B(float Ratio);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void _OnDroneUseStarted(class ADrone* _drone);
    void _OnAfterUseDone(class ACatPawn* _cat);
    void _OnUseStarted(class ACatPawn* _cat);
    void ExecuteUbergraph_COMP_UsableDroneMemory(int32 EntryPoint);
};

#endif
