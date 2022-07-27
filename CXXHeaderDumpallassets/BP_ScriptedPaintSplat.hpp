#ifndef UE4SS_SDK_BP_ScriptedPaintSplat_HPP
#define UE4SS_SDK_BP_ScriptedPaintSplat_HPP

class ABP_ScriptedPaintSplat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0238 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    FVector BaseScale;                                                                // 0x0250 (size: 0xC)
    class UMaterialInstanceDynamic* DynaMat Paint;                                    // 0x0260 (size: 0x8)
    float Delay;                                                                      // 0x0268 (size: 0x4)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA52C6A03B();
    void Tick_6246EF4646E19036986D72BA52C6A03B(float Ratio);
    void GoSplash();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ScriptedPaintSplat(int32 EntryPoint);
}; // Size: 0x26C

#endif
