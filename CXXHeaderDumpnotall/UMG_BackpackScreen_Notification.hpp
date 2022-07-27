#ifndef UE4SS_SDK_UMG_BackpackScreen_Notification_HPP
#define UE4SS_SDK_UMG_BackpackScreen_Notification_HPP

class UUMG_BackpackScreen_Notification_C : public UBackpackScreenUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* PendingDialog_Pulse;
    class UImage* Image_1;
    class UCanvasPanel* PendingDialogCanvas;

    void OnBackpackSet();
    void ExecuteUbergraph_UMG_BackpackScreen_Notification(int32 EntryPoint);
};

#endif
