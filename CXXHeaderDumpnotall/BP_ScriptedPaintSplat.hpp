#ifndef UE4SS_SDK_BP_ScriptedPaintSplat_HPP
#define UE4SS_SDK_BP_ScriptedPaintSplat_HPP

class ABP_ScriptedPaintSplat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UArrowComponent* Arrow;
    class UDecalComponent* Decal;
    class USceneComponent* DefaultSceneRoot;
    FVector BaseScale;
    class UMaterialInstanceDynamic* DynaMat Paint;
    float Delay;

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA52C6A03B();
    void Tick_6246EF4646E19036986D72BA52C6A03B(float Ratio);
    void GoSplash();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ScriptedPaintSplat(int32 EntryPoint);
};

#endif
