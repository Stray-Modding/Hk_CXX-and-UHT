#ifndef UE4SS_SDK_BP_CatButton_PushablePaintBucket_HPP
#define UE4SS_SDK_BP_CatButton_PushablePaintBucket_HPP

class ABP_CatButton_PushablePaintBucket_C : public ABP_CatButton_PushableMeshBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* LidMesh;
    class UBoxComponent* FootprintTrigger;
    bool Openable;
    bool Scripted Splash;
    TArray<class ABP_ScriptedPaintSplat_C*> SplashesToTrigger;
    TArray<class AActor*> ActorsToTrigger;
    FLinearColor PaintColor;
    class UMaterialInstanceDynamic* DynaMat Paint;

    void UserConstructionScript();
    void SpreadPaint(bool Scripted, FVector ImpactLocation, FVector ImpactNormal);
    void On Impact(FHitResult Hit);
    void BndEvt__BP_CatButton_PushablePaintBucket_Streaming_K2Node_ComponentBoundEvent_4_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_CatButton_PushablePaintBucket(int32 EntryPoint);
};

#endif
