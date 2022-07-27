#ifndef UE4SS_SDK_BP_UMG_BackPack_HPP
#define UE4SS_SDK_BP_UMG_BackPack_HPP

class UBP_UMG_BackPack_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* IEM_Scale;                                                // 0x0268 (size: 0x8)
    class UBorder* Border_blue;                                                       // 0x0270 (size: 0x8)
    class UBorder* Border_green;                                                      // 0x0278 (size: 0x8)
    class UOverlay* compass;                                                          // 0x0280 (size: 0x8)
    class UImage* compass_img;                                                        // 0x0288 (size: 0x8)
    class UImage* Dialogue;                                                           // 0x0290 (size: 0x8)
    class UImage* hacking;                                                            // 0x0298 (size: 0x8)
    class UImage* Idle;                                                               // 0x02A0 (size: 0x8)
    class UOverlay* IEM;                                                              // 0x02A8 (size: 0x8)
    class UImage* iem_back_2;                                                         // 0x02B0 (size: 0x8)
    class UImage* Inventory;                                                          // 0x02B8 (size: 0x8)
    int32 Backpack_index;                                                             // 0x02C0 (size: 0x4)
    float IEM_timer;                                                                  // 0x02C4 (size: 0x4)
    bool IEM_charged;                                                                 // 0x02C8 (size: 0x1)

    void Backpack_Set_Screen();
    void Construct();
    void ExecuteUbergraph_BP_UMG_BackPack(int32 EntryPoint);
}; // Size: 0x2C9

#endif
