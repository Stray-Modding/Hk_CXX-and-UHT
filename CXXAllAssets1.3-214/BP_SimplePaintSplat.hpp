#ifndef UE4SS_SDK_BP_SimplePaintSplat_HPP
#define UE4SS_SDK_BP_SimplePaintSplat_HPP

class ABP_SimplePaintSplat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0238 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    class UMaterialInstanceDynamic* DynaMat Paint;                                    // 0x0250 (size: 0x8)
    FLinearColor Color;                                                               // 0x0258 (size: 0x10)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SimplePaintSplat(int32 EntryPoint);
}; // Size: 0x268

#endif
