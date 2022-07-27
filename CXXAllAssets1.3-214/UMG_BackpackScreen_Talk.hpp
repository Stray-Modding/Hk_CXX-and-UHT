#ifndef UE4SS_SDK_UMG_BackpackScreen_Talk_HPP
#define UE4SS_SDK_UMG_BackpackScreen_Talk_HPP

class UUMG_BackpackScreen_Talk_C : public UBackpackScreenUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* PendingDialog_Pulse;                                      // 0x0270 (size: 0x8)
    class UWidgetAnimation* Dialog_InProgress;                                        // 0x0278 (size: 0x8)
    class UWidgetAnimation* Dialog_Available;                                         // 0x0280 (size: 0x8)
    class UCanvasPanel* DialogCanvas;                                                 // 0x0288 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0290 (size: 0x8)
    class UCanvasPanel* PendingDialogCanvas;                                          // 0x0298 (size: 0x8)
    bool Talking;                                                                     // 0x02A0 (size: 0x1)
    bool IsCalling;                                                                   // 0x02A1 (size: 0x1)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnBackpackSet();
    void ExecuteUbergraph_UMG_BackpackScreen_Talk(int32 EntryPoint);
}; // Size: 0x2A2

#endif
