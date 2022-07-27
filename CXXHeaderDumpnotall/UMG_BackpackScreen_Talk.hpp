#ifndef UE4SS_SDK_UMG_BackpackScreen_Talk_HPP
#define UE4SS_SDK_UMG_BackpackScreen_Talk_HPP

class UUMG_BackpackScreen_Talk_C : public UBackpackScreenUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* PendingDialog_Pulse;
    class UWidgetAnimation* Dialog_InProgress;
    class UWidgetAnimation* Dialog_Available;
    class UCanvasPanel* DialogCanvas;
    class UImage* Image_1;
    class UCanvasPanel* PendingDialogCanvas;
    bool Talking;
    bool IsCalling;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnBackpackSet();
    void ExecuteUbergraph_UMG_BackpackScreen_Talk(int32 EntryPoint);
};

#endif
