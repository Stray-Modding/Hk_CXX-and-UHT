#ifndef UE4SS_SDK_FloatingWindowWidgetChild_HPP
#define UE4SS_SDK_FloatingWindowWidgetChild_HPP

class UFloatingWindowWidgetChild_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* CloseButton;                                                       // 0x0268 (size: 0x8)
    class UTextBlock* CloseText;                                                      // 0x0270 (size: 0x8)
    class UImage* Color;                                                              // 0x0278 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0280 (size: 0x8)
    class UScrollBox* MainScrollBox;                                                  // 0x0288 (size: 0x8)
    class UButton* MinimizeButton;                                                    // 0x0290 (size: 0x8)
    class UTextBlock* MinimizeText;                                                   // 0x0298 (size: 0x8)
    class UButton* ScalingButton;                                                     // 0x02A0 (size: 0x8)
    class UMultiLineEditableText* TextBox;                                            // 0x02A8 (size: 0x8)
    class UImage* TopBackground;                                                      // 0x02B0 (size: 0x8)
    class UButton* TopWindowButton;                                                   // 0x02B8 (size: 0x8)
    FVector2D MousePosition;                                                          // 0x02C0 (size: 0x8)
    FVector2D DeltaPosition;                                                          // 0x02C8 (size: 0x8)
    bool Minimized?;                                                                  // 0x02D0 (size: 0x1)
    FVector2D MaximizedScale;                                                         // 0x02D4 (size: 0x8)

    void StopPositionTimer();
    void StartPositionTimer();
    void BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature();
    void StopScalingTimer();
    void StartScalingTimer();
    void BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_FloatingWindowWidgetChild(int32 EntryPoint);
}; // Size: 0x2DC

#endif
