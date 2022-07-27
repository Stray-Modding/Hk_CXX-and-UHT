#ifndef UE4SS_SDK_ModloaderMainWidget_HPP
#define UE4SS_SDK_ModloaderMainWidget_HPP

class UModloaderMainWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0268 (size: 0x8)
    class UEditableTextBox* EditableTextBox_137;                                      // 0x0270 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x0278 (size: 0x8)
    class UModLoaderSave_C* ModLoaderSave;                                            // 0x0280 (size: 0x8)
    FVector Location;                                                                 // 0x0288 (size: 0xC)
    FRotator Rotation;                                                                // 0x0294 (size: 0xC)
    class UModloaderChildWidget_C* ChildWidget;                                       // 0x02A0 (size: 0x8)
    int32 ChildCount;                                                                 // 0x02A8 (size: 0x4)

    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ChildrenCountTimer();
    void LoadEvent();
    void AddChild(FText Text);
    void F1Event();
    void BndEvt__EditableTextBox_137_K2Node_ComponentBoundEvent_24_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void SaveEvent();
    void Construct();
    void CountChildrenEvent();
    void KeyboardFocusEvent();
    void ExecuteUbergraph_ModloaderMainWidget(int32 EntryPoint);
}; // Size: 0x2AC

#endif
