#ifndef UE4SS_SDK_UMG_VerticalScrollbar_New_HPP
#define UE4SS_SDK_UMG_VerticalScrollbar_New_HPP

class UUMG_VerticalScrollbar_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_85;                                                         // 0x0268 (size: 0x8)
    class UBorder* ScrollBar;                                                         // 0x0270 (size: 0x8)
    class UCanvasPanel* scrollbarContainer;                                           // 0x0278 (size: 0x8)
    float MaximumHeight;                                                              // 0x0280 (size: 0x4)
    float ViewHeight;                                                                 // 0x0284 (size: 0x4)
    float ViewPosition;                                                               // 0x0288 (size: 0x4)
    float ContainerHeight;                                                            // 0x028C (size: 0x4)
    float ScrollbarSizeRatio;                                                         // 0x0290 (size: 0x4)
    float ScrollbarPositionRatio;                                                     // 0x0294 (size: 0x4)

    void UpdateVisibility();
    void SetViewPosition(float Position);
    void SetViewHeight(float ViewHeight);
    void SetMaximumHeight(float MaximumHeight);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UMG_VerticalScrollbar_New(int32 EntryPoint);
}; // Size: 0x298

#endif
