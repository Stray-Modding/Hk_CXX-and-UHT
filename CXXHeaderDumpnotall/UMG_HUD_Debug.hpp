#ifndef UE4SS_SDK_UMG_HUD_Debug_HPP
#define UE4SS_SDK_UMG_HUD_Debug_HPP

class UUMG_HUD_Debug_C : public UHUDDebugWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* AText;
    class UTextBlock* DescText;
    class UVerticalBox* Legend;
    class UUMG_DebugMenu_C* RootDebugMenu;
    class UTextBlock* XText;
    class UTextBlock* YText;
    class UBP_HKGameInstance_C* HKGameInstance;

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
};

#endif
