#ifndef UE4SS_SDK_UMG_Drone_Digicode_Button_HPP
#define UE4SS_SDK_UMG_Drone_Digicode_Button_HPP

class UUMG_Drone_Digicode_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Unlock;                                                   // 0x0268 (size: 0x8)
    class UCanvasPanel* selectedPanel;                                                // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_103;                                                  // 0x0280 (size: 0x8)
    class UCanvasPanel* unselectedPanel;                                              // 0x0288 (size: 0x8)
    TEnumAsByte<E_MemoryButtonState> CurrentState;                                    // 0x0290 (size: 0x1)
    int32 Number;                                                                     // 0x0294 (size: 0x4)
    bool selected;                                                                    // 0x0298 (size: 0x1)

    FText GetNumberText();
    void PlayUnlock();
    void SetSelected(bool selected);
    void ExecuteUbergraph_UMG_Drone_Digicode_Button(int32 EntryPoint);
}; // Size: 0x299

#endif
