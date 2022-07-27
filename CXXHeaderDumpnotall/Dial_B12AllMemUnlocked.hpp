#ifndef UE4SS_SDK_Dial_B12AllMemUnlocked_HPP
#define UE4SS_SDK_Dial_B12AllMemUnlocked_HPP

class ADial_B12AllMemUnlocked_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_B12AllMemUnlocked(int32 EntryPoint);
};

#endif
