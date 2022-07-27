#ifndef UE4SS_SDK_UMG_HUD_Debug_HPP
#define UE4SS_SDK_UMG_HUD_Debug_HPP

class UUMG_HUD_Debug_C : public UHUDDebugWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UTextBlock* AText;                                                          // 0x0298 (size: 0x8)
    class UTextBlock* DescText;                                                       // 0x02A0 (size: 0x8)
    class UVerticalBox* Legend;                                                       // 0x02A8 (size: 0x8)
    class UUMG_DebugMenu_C* RootDebugMenu;                                            // 0x02B0 (size: 0x8)
    class UTextBlock* XText;                                                          // 0x02B8 (size: 0x8)
    class UTextBlock* YText;                                                          // 0x02C0 (size: 0x8)
    class UBP_HKGameInstance_C* HKGameInstance;                                       // 0x02C8 (size: 0x8)

    void UpdateLegend();
    void GetCurrentEntry(class UDebugMenuEntry*& Entry);
    void OnGUIDown();
    void OnGUIUp();
    void OnGUIValidate();
    void OnGUICancel();
    void OnGUILeft();
    void OnGUIRight();
    void OnClosed();
    void OnOpened();
    void OnGUIX();
    void OnGUIY();
    void ExecuteUbergraph_UMG_HUD_Debug(int32 EntryPoint);
}; // Size: 0x2D0

#endif
