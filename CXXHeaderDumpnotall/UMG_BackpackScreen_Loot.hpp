#ifndef UE4SS_SDK_UMG_BackpackScreen_Loot_HPP
#define UE4SS_SDK_UMG_BackpackScreen_Loot_HPP

class UUMG_BackpackScreen_Loot_C : public UBackpackScreenUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Loot_done;
    class UWidgetAnimation* Loot_InProgress;
    class UWidgetAnimation* Loot_Pulse;
    class UImage* Image_3;
    class UImage* Image_9;
    class UCanvasPanel* LootCanvas;
    bool JustLootedSomething;
    bool Looting;

    void Destruct();
    void ObjectLooted(class ABackpack* _backpack, class ULootableComponent* _loot);
    void OnLootDoneAnimationFinished();
    void OnBackpackSet();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UMG_BackpackScreen_Loot(int32 EntryPoint);
};

#endif
