#ifndef UE4SS_SDK_BP_SpeedModifier_Zone_HPP
#define UE4SS_SDK_BP_SpeedModifier_Zone_HPP

class ABP_SpeedModifier_Zone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UBillboardComponent* Billboard;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    bool Activate;
    float Custom Slow Ratio;
    TEnumAsByte<Enum_CatSpeed_Preset> Presets Slow Ratio;
    bool OnlyOnce;
    bool Smooth;
    float SmoothTime;
    bool Main;
    bool Last;
    bool push;
    bool Triggered;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void LogicTrigger();
    void Activate_SpeedModifier();
    void Deactivate_SpeedModifier();
    void ExecuteUbergraph_BP_SpeedModifier_Zone(int32 EntryPoint);
};

#endif
