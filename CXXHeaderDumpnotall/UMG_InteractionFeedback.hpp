#ifndef UE4SS_SDK_UMG_InteractionFeedback_HPP
#define UE4SS_SDK_UMG_InteractionFeedback_HPP

class UUMG_InteractionFeedback_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fade_InOut;
    class UUMG_ButtonFeedback_C* ButtonFeedback;
    class UCanvasPanel* CanvasPanel_0;
    class UImage* Point;
    class ABP_InteractionFeedback_C* InteractionFeedback;
    bool HasDisplayedOnce;

    ESlateVisibility GetWidgetVisibility();
    void Finished_D04F56A74A3A5F82475763B2DA76118D();
    void Finished_1314BA2C437E4ACC7A4DA0996E315E58();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void UpdateDisplayState();
    void SetInteractionFeedback(class ABP_InteractionFeedback_C* InteractionFeedback);
    void ExecuteUbergraph_UMG_InteractionFeedback(int32 EntryPoint);
};

#endif
