#ifndef UE4SS_SDK_Dial_Translate_programmer_HPP
#define UE4SS_SDK_Dial_Translate_programmer_HPP

class ADial_Translate_programmer_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool isElliotOpen;

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Translate_programmer(int32 EntryPoint);
};

#endif
