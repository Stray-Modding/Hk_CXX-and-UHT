#ifndef UE4SS_SDK_BP_UMG_BackPack_HPP
#define UE4SS_SDK_BP_UMG_BackPack_HPP

class UBP_UMG_BackPack_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* IEM_Scale;
    class UBorder* Border_blue;
    class UBorder* Border_green;
    class UOverlay* compass;
    class UImage* compass_img;
    class UImage* Dialogue;
    class UImage* hacking;
    class UImage* Idle;
    class UOverlay* IEM;
    class UImage* iem_back_2;
    class UImage* Inventory;
    int32 Backpack_index;
    float IEM_timer;
    bool IEM_charged;

    void Backpack_Set_Screen();
    void Construct();
    void ExecuteUbergraph_BP_UMG_BackPack(int32 EntryPoint);
};

#endif
