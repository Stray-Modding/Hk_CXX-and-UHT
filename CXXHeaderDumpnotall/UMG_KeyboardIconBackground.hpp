#ifndef UE4SS_SDK_UMG_KeyboardIconBackground_HPP
#define UE4SS_SDK_UMG_KeyboardIconBackground_HPP

class UUMG_KeyboardIconBackground_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_82;
    class UImage* Left;
    class UImage* Right;
    class UCanvasPanel* Root;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UMG_KeyboardIconBackground(int32 EntryPoint);
};

#endif
