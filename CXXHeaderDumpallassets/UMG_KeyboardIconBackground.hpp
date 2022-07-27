#ifndef UE4SS_SDK_UMG_KeyboardIconBackground_HPP
#define UE4SS_SDK_UMG_KeyboardIconBackground_HPP

class UUMG_KeyboardIconBackground_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UHorizontalBox* HorizontalBox_82;                                           // 0x0268 (size: 0x8)
    class UImage* Left;                                                               // 0x0270 (size: 0x8)
    class UImage* Right;                                                              // 0x0278 (size: 0x8)
    class UCanvasPanel* Root;                                                         // 0x0280 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UMG_KeyboardIconBackground(int32 EntryPoint);
}; // Size: 0x288

#endif
