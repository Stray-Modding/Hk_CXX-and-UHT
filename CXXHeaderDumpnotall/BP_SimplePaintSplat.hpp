#ifndef UE4SS_SDK_BP_SimplePaintSplat_HPP
#define UE4SS_SDK_BP_SimplePaintSplat_HPP

class ABP_SimplePaintSplat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UArrowComponent* Arrow;
    class UDecalComponent* Decal;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* DynaMat Paint;
    FLinearColor Color;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SimplePaintSplat(int32 EntryPoint);
};

#endif
