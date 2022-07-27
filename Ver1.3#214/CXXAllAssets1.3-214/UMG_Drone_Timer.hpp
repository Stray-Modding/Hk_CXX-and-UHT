#ifndef UE4SS_SDK_UMG_Drone_Timer_HPP
#define UE4SS_SDK_UMG_Drone_Timer_HPP

class UUMG_Drone_Timer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* AnimationImage;                                                     // 0x0268 (size: 0x8)
    float RenderScale;                                                                // 0x0270 (size: 0x4)
    FUMG_Drone_Timer_CSequenceEnded SequenceEnded;                                    // 0x0278 (size: 0x10)
    void SequenceEnded();
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x0288 (size: 0x8)
    class USoundBase* progress sfx;                                                   // 0x0290 (size: 0x8)

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
}; // Size: 0x298

#endif
