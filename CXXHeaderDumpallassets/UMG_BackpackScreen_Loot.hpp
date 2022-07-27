#ifndef UE4SS_SDK_UMG_BackpackScreen_Loot_HPP
#define UE4SS_SDK_UMG_BackpackScreen_Loot_HPP

class UUMG_BackpackScreen_Loot_C : public UBackpackScreenUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* Loot_done;                                                // 0x0270 (size: 0x8)
    class UWidgetAnimation* Loot_InProgress;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Loot_Pulse;                                               // 0x0280 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0290 (size: 0x8)
    class UCanvasPanel* LootCanvas;                                                   // 0x0298 (size: 0x8)
    bool JustLootedSomething;                                                         // 0x02A0 (size: 0x1)
    bool Looting;                                                                     // 0x02A1 (size: 0x1)

    void Destruct();
    void ObjectLooted(class ABackpack* _backpack, class ULootableComponent* _loot);
    void OnLootDoneAnimationFinished();
    void OnBackpackSet();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UMG_BackpackScreen_Loot(int32 EntryPoint);
}; // Size: 0x2A2

#endif
