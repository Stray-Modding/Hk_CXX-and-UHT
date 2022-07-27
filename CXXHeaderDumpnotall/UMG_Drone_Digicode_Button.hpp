#ifndef UE4SS_SDK_UMG_Drone_Digicode_Button_HPP
#define UE4SS_SDK_UMG_Drone_Digicode_Button_HPP

class UUMG_Drone_Digicode_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Unlock;
    class UCanvasPanel* selectedPanel;
    class UTextBlock* TextBlock;
    class UTextBlock* TextBlock_103;
    class UCanvasPanel* unselectedPanel;
    TEnumAsByte<E_MemoryButtonState> CurrentState;
    int32 Number;
    bool selected;

    FText GetNumberText();
    void PlayUnlock();
    void SetSelected(bool selected);
    void ExecuteUbergraph_UMG_Drone_Digicode_Button(int32 EntryPoint);
};

#endif
