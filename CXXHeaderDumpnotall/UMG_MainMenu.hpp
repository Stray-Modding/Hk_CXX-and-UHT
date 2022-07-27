#ifndef UE4SS_SDK_UMG_MainMenu_HPP
#define UE4SS_SDK_UMG_MainMenu_HPP

class UUMG_MainMenu_C : public UMainMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Construct();
    void ExecuteUbergraph_UMG_MainMenu(int32 EntryPoint);
};

#endif
