#ifndef UE4SS_SDK_BP_Trigger_Titles_HPP
#define UE4SS_SDK_BP_Trigger_Titles_HPP

class ABP_Trigger_Titles_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    float Opacity_opa_24A6F15C41DDDDA12588EB8B7DCEBE08;                               // 0x0250 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Opacity__Direction_24A6F15C41DDDDA12588EB8B7DCEBE08; // 0x0254 (size: 0x1)
    class UTimelineComponent* Opacity;                                                // 0x0258 (size: 0x8)
    class UUMG_Titles_C* Widget_titles;                                               // 0x0260 (size: 0x8)
    class USoundWave* Sound;                                                          // 0x0268 (size: 0x8)
    FName Sound (actorId);                                                            // 0x0270 (size: 0x8)
    FText Text Big;                                                                   // 0x0278 (size: 0x18)
    FText Text Small;                                                                 // 0x0290 (size: 0x18)
    float Show time en s;                                                             // 0x02A8 (size: 0x4)
    bool TitleAlreadyShowed;                                                          // 0x02AC (size: 0x1)
    TArray<class AActor*> ActorToTrigger;                                             // 0x02B0 (size: 0x10)
    FString Text Subtitle;                                                            // 0x02C0 (size: 0x10)
    EChapter Chapter;                                                                 // 0x02D0 (size: 0x1)

    void Opacity__FinishedFunc();
    void Opacity__UpdateFunc();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void show title();
    void ExecuteUbergraph_BP_Trigger_Titles(int32 EntryPoint);
}; // Size: 0x2D1

#endif
