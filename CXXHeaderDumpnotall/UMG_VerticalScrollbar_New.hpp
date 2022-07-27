#ifndef UE4SS_SDK_UMG_VerticalScrollbar_New_HPP
#define UE4SS_SDK_UMG_VerticalScrollbar_New_HPP

class UUMG_VerticalScrollbar_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_85;
    class UBorder* ScrollBar;
    class UCanvasPanel* scrollbarContainer;
    float MaximumHeight;
    float ViewHeight;
    float ViewPosition;
    float ContainerHeight;
    float ScrollbarSizeRatio;
    float ScrollbarPositionRatio;

    void UpdateVisibility();
    void SetViewPosition(float Position);
    void SetViewHeight(float ViewHeight);
    void SetMaximumHeight(float MaximumHeight);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UMG_VerticalScrollbar_New(int32 EntryPoint);
};

#endif
