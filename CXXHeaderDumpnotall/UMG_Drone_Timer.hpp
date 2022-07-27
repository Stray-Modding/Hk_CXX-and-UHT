#ifndef UE4SS_SDK_UMG_Drone_Timer_HPP
#define UE4SS_SDK_UMG_Drone_Timer_HPP

class UUMG_Drone_Timer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* AnimationImage;
    float RenderScale;
    FUMG_Drone_Timer_CSequenceEnded SequenceEnded;
    void SequenceEnded();
    class UMaterialInstanceDynamic* DynamicMaterial;
    class USoundBase* progress sfx;

    void Complete_6246EF4646E19036986D72BA0358BA16();
    void Tick_6246EF4646E19036986D72BA0358BA16(float Ratio);
    void Complete_6246EF4646E19036986D72BA89100C86();
    void Tick_6246EF4646E19036986D72BA89100C86(float Ratio);
    void Complete_6246EF4646E19036986D72BA5C35FD37();
    void Tick_6246EF4646E19036986D72BA5C35FD37(float Ratio);
    void OnInitialized();
    void PlaySequence(float Time);
    void StopSequence();
    void ExecuteUbergraph_UMG_Drone_Timer(int32 EntryPoint);
    void SequenceEnded__DelegateSignature();
};

#endif
