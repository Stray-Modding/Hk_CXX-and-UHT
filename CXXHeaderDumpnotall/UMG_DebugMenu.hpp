#ifndef UE4SS_SDK_UMG_DebugMenu_HPP
#define UE4SS_SDK_UMG_DebugMenu_HPP

class UUMG_DebugMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Root;
    class UVerticalBox* VerticalBox_63;
    class UDebugMenuEntry* Entry;
    int32 CurrentFocus;
    class UUMG_DebugMenu_C* Child;
    class UUMG_DebugMenu_C* Parent;
    class UUMG_HUD_Debug_C* HUDDebug;
    int32 MaxDisplayedChildren;

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
};

#endif
