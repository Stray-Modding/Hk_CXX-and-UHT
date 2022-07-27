#ifndef UE4SS_SDK_BP_CatButton_PushablePaintBucket_HPP
#define UE4SS_SDK_BP_CatButton_PushablePaintBucket_HPP

class ABP_CatButton_PushablePaintBucket_C : public ABP_CatButton_PushableMeshBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* LidMesh;                                              // 0x02E8 (size: 0x8)
    class UBoxComponent* FootprintTrigger;                                            // 0x02F0 (size: 0x8)
    bool Openable;                                                                    // 0x02F8 (size: 0x1)
    bool Scripted Splash;                                                             // 0x02F9 (size: 0x1)
    TArray<class ABP_ScriptedPaintSplat_C*> SplashesToTrigger;                        // 0x0300 (size: 0x10)
    TArray<class AActor*> ActorsToTrigger;                                            // 0x0310 (size: 0x10)
    FLinearColor PaintColor;                                                          // 0x0320 (size: 0x10)
    class UMaterialInstanceDynamic* DynaMat Paint;                                    // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void SpreadPaint(bool Scripted, FVector ImpactLocation, FVector ImpactNormal);
    void On Impact(FHitResult Hit);
    void BndEvt__BP_CatButton_PushablePaintBucket_Streaming_K2Node_ComponentBoundEvent_4_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_CatButton_PushablePaintBucket(int32 EntryPoint);
}; // Size: 0x338

#endif
