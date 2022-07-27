#ifndef UE4SS_SDK_UMG_DebugMenu_HPP
#define UE4SS_SDK_UMG_DebugMenu_HPP

class UUMG_DebugMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* Root;                                                         // 0x0268 (size: 0x8)
    class UVerticalBox* VerticalBox_63;                                               // 0x0270 (size: 0x8)
    class UDebugMenuEntry* Entry;                                                     // 0x0278 (size: 0x8)
    int32 CurrentFocus;                                                               // 0x0280 (size: 0x4)
    class UUMG_DebugMenu_C* Child;                                                    // 0x0288 (size: 0x8)
    class UUMG_DebugMenu_C* Parent;                                                   // 0x0290 (size: 0x8)
    class UUMG_HUD_Debug_C* HUDDebug;                                                 // 0x0298 (size: 0x8)
    int32 MaxDisplayedChildren;                                                       // 0x02A0 (size: 0x4)

    void SetItemFocus(int32 Index);
    void GetCurrentFocusEntry(class UDebugMenuEntry*& Entry);
    void UpdateFocus();
    void OnUpdate(class UDebugMenuEntry* Entry);
    void Update();
    void Init(class UDebugMenuEntry* Entry, class UUMG_DebugMenu_C* Parent, class UUMG_HUD_Debug_C* HUDDebug);
    void Destruct();
    void OnGUIValidate();
    void OnGUICancel();
    void OnGUILeft();
    void OnGUIRight();
    void OnGUIUp();
    void OnGUIDown();
    void OnGUIX();
    void OnGUIY();
    void OpenChild();
    void CloseChild();
    void ExecuteUbergraph_UMG_DebugMenu(int32 EntryPoint);
}; // Size: 0x2A4

#endif
