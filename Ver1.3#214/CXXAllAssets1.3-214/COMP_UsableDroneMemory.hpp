#ifndef UE4SS_SDK_COMP_UsableDroneMemory_HPP
#define UE4SS_SDK_COMP_UsableDroneMemory_HPP

class UCOMP_UsableDroneMemory_C : public UTalkableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    FName memoryId;                                                                   // 0x0678 (size: 0x8)
    FB12MemoryData MemoryData;                                                        // 0x0680 (size: 0x50)
    bool IsValid_0;                                                                   // 0x06D0 (size: 0x1)
    bool IsInDialogPhase;                                                             // 0x06D1 (size: 0x1)
    class UUMG_Drone_MemoriesPopup_New_C* MemoriesPopupWidget;                        // 0x06D8 (size: 0x8)
    FName actorId of sfx to play;                                                     // 0x06E0 (size: 0x8)
    float sfx play delay;                                                             // 0x06E8 (size: 0x4)
    class UPointLightComponent* Light;                                                // 0x06F0 (size: 0x8)
    class UParticleSystemComponent* FX;                                               // 0x06F8 (size: 0x8)
    float LightIntensity;                                                             // 0x0700 (size: 0x4)
    class UAudioComponent* FirefliesSoundLoop;                                        // 0x0708 (size: 0x8)

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
}; // Size: 0x710

#endif
