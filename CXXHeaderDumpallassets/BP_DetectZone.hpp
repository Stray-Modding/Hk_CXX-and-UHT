#ifndef UE4SS_SDK_BP_DetectZone_HPP
#define UE4SS_SDK_BP_DetectZone_HPP

class ABP_DetectZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0230 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0238 (size: 0x8)
    class UStaticMeshComponent* CancelLight;                                          // 0x0240 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0248 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Led;                                                  // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Dalle;                                                // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    class UMaterialInstanceDynamic* DetectColor_Material;                             // 0x0270 (size: 0x8)
    TArray<class ABP_DoorAnalogBase_C*> Door;                                         // 0x0278 (size: 0x10)
    class UMaterialInstanceDynamic* CancelColor_Material;                             // 0x0288 (size: 0x8)
    TArray<class UClass*> OverlapClass;                                               // 0x0290 (size: 0x10)
    int32 OverlapNumber;                                                              // 0x02A0 (size: 0x4)
    FVector InitLocation;                                                             // 0x02A4 (size: 0xC)
    bool CanCancel;                                                                   // 0x02B0 (size: 0x1)
    class AActor* CancelZone;                                                         // 0x02B8 (size: 0x8)
    bool CancelTrigger;                                                               // 0x02C0 (size: 0x1)
    bool Debug;                                                                       // 0x02C1 (size: 0x1)
    int32 OverlapNumberInCancelZone;                                                  // 0x02C4 (size: 0x4)
    TArray<class ABP_DetectZone_C*> OtherDetectZone;                                  // 0x02C8 (size: 0x10)
    bool CancelAnimation;                                                             // 0x02D8 (size: 0x1)
    FVector currentLocation;                                                          // 0x02DC (size: 0xC)
    bool CatIsOnTrigger;                                                              // 0x02E8 (size: 0x1)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA1FB0AF13();
    void Tick_6246EF4646E19036986D72BA1FB0AF13(float Ratio);
    void Complete_6246EF4646E19036986D72BA6CD83EB3();
    void Tick_6246EF4646E19036986D72BA6CD83EB3(float Ratio);
    void LogicTrigger();
    void BndEvt__BP_DetectZone_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_DetectZone_Box_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ChangeState(bool AlertOther, bool ChackCancel);
    void OnPressed();
    void BndEvt__BP_DetectZone_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnRelease();
    void BndEvt__BP_DetectZone_CancelZone_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__BP_DetectZone_CancelZone_K2Node_ComponentBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void UpdateCancelZone();
    void CancelBip();
    void CancelPressed();
    void CancelOnReleased();
    void ExecuteUbergraph_BP_DetectZone(int32 EntryPoint);
}; // Size: 0x2E9

#endif
