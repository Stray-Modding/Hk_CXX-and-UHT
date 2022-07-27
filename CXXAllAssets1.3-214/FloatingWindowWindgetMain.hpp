#ifndef UE4SS_SDK_FloatingWindowWindgetMain_HPP
#define UE4SS_SDK_FloatingWindowWindgetMain_HPP

class UFloatingWindowWindgetMain_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0268 (size: 0x8)
    FKey ShowMouseButton;                                                             // 0x0270 (size: 0x18)
    FKey AddNewWindowButton;                                                          // 0x0288 (size: 0x18)

    void InputShowMouse();
    void InputAddNewWindow();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void AddChild();
    void InputMode(bool MouseCursorVisible);
    void ExecuteUbergraph_FloatingWindowWindgetMain(int32 EntryPoint);
}; // Size: 0x2A0

#endif
