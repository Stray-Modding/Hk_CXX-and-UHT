#ifndef UE4SS_SDK_UMG_InteractionFeedback_HPP
#define UE4SS_SDK_UMG_InteractionFeedback_HPP

class UUMG_InteractionFeedback_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Fade_InOut;                                               // 0x0268 (size: 0x8)
    class UUMG_ButtonFeedback_C* ButtonFeedback;                                      // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0278 (size: 0x8)
    class UImage* Point;                                                              // 0x0280 (size: 0x8)
    class ABP_InteractionFeedback_C* InteractionFeedback;                             // 0x0288 (size: 0x8)
    bool HasDisplayedOnce;                                                            // 0x0290 (size: 0x1)

    ESlateVisibility GetWidgetVisibility();
    void Finished_D04F56A74A3A5F82475763B2DA76118D();
    void Finished_1314BA2C437E4ACC7A4DA0996E315E58();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void UpdateDisplayState();
    void SetInteractionFeedback(class ABP_InteractionFeedback_C* InteractionFeedback);
    void ExecuteUbergraph_UMG_InteractionFeedback(int32 EntryPoint);
}; // Size: 0x291

#endif
