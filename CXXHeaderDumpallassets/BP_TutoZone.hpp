#ifndef UE4SS_SDK_BP_TutoZone_HPP
#define UE4SS_SDK_BP_TutoZone_HPP

class ABP_TutoZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0230 (size: 0x8)
    class UBoxComponent* TriggerBox;                                                  // 0x0238 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0240 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0248 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0250 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0258 (size: 0x8)
    float Opacity_Opacity_053343FA49432B50FE0CB893EF475872;                           // 0x0260 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Opacity__Direction_053343FA49432B50FE0CB893EF475872; // 0x0264 (size: 0x1)
    class UTimelineComponent* Opacity;                                                // 0x0268 (size: 0x8)
    TEnumAsByte<TutoEnum> Tuto;                                                       // 0x0270 (size: 0x1)
    bool Activate;                                                                    // 0x0271 (size: 0x1)
    float DelayBeforeSkip;                                                            // 0x0274 (size: 0x4)
    float TimeInTuto;                                                                 // 0x0278 (size: 0x4)
    class UUserWidget* HUDWidget;                                                     // 0x0280 (size: 0x8)
    bool InTutoZone;                                                                  // 0x0288 (size: 0x1)
    TSubclassOf<class UUserWidget> Widget Class;                                      // 0x0290 (size: 0x8)
    bool TutoCleared;                                                                 // 0x0298 (size: 0x1)
    class ABP_Zurg_Counter_C* ZurgCounter;                                            // 0x02A0 (size: 0x8)
    class ABP_TutoZone_C* SecondTutoZoneChainJump;                                    // 0x02A8 (size: 0x8)
    class ABP_HKPlayerCameraManager_C* Camera Manager;                                // 0x02B0 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x02B8 (size: 0x8)

    bool IsLookingInTheDirection();
    void Opacity__FinishedFunc();
    void Opacity__UpdateFunc();
    void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Activate/Deactivate Tuto(bool Active);
    void Show Tuto();
    void Hide Tuto();
    void Tuto Fnished();
    void ReceiveTick(float DeltaSeconds);
    void InitWidget();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TutoZone(int32 EntryPoint);
}; // Size: 0x2C0

#endif
