#ifndef UE4SS_SDK_UMG_BackpackScreen_IEM_HPP
#define UE4SS_SDK_UMG_BackpackScreen_IEM_HPP

class UUMG_BackpackScreen_IEM_C : public UBackpackScreenUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* Loot_done;                                                // 0x0270 (size: 0x8)
    class UWidgetAnimation* Dialog_InProgress;                                        // 0x0278 (size: 0x8)
    class UWidgetAnimation* Dialog_Available;                                         // 0x0280 (size: 0x8)
    class UWidgetAnimation* IEM_Scale;                                                // 0x0288 (size: 0x8)
    class UWidgetAnimation* PendingDialog_Pulse;                                      // 0x0290 (size: 0x8)
    class UWidgetAnimation* Use_InProgress;                                           // 0x0298 (size: 0x8)
    class UWidgetAnimation* Use_Pulse;                                                // 0x02A0 (size: 0x8)
    class UWidgetAnimation* Loot_InProgress;                                          // 0x02A8 (size: 0x8)
    class UWidgetAnimation* Loot_Pulse;                                               // 0x02B0 (size: 0x8)
    class UCanvasPanel* IEMCanvas;                                                    // 0x02B8 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UMG_BackpackScreen_IEM(int32 EntryPoint);
}; // Size: 0x2C0

#endif
