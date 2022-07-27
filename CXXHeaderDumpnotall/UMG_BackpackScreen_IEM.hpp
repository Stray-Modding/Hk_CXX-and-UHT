#ifndef UE4SS_SDK_UMG_BackpackScreen_IEM_HPP
#define UE4SS_SDK_UMG_BackpackScreen_IEM_HPP

class UUMG_BackpackScreen_IEM_C : public UBackpackScreenUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Loot_done;
    class UWidgetAnimation* Dialog_InProgress;
    class UWidgetAnimation* Dialog_Available;
    class UWidgetAnimation* IEM_Scale;
    class UWidgetAnimation* PendingDialog_Pulse;
    class UWidgetAnimation* Use_InProgress;
    class UWidgetAnimation* Use_Pulse;
    class UWidgetAnimation* Loot_InProgress;
    class UWidgetAnimation* Loot_Pulse;
    class UCanvasPanel* IEMCanvas;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UMG_BackpackScreen_IEM(int32 EntryPoint);
};

#endif
