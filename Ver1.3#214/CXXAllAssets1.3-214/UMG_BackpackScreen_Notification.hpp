#ifndef UE4SS_SDK_UMG_BackpackScreen_Notification_HPP
#define UE4SS_SDK_UMG_BackpackScreen_Notification_HPP

class UUMG_BackpackScreen_Notification_C : public UBackpackScreenUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* PendingDialog_Pulse;                                      // 0x0270 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0278 (size: 0x8)
    class UCanvasPanel* PendingDialogCanvas;                                          // 0x0280 (size: 0x8)

    void OnBackpackSet();
    void ExecuteUbergraph_UMG_BackpackScreen_Notification(int32 EntryPoint);
}; // Size: 0x288

#endif
