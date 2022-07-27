#ifndef UE4SS_SDK_UMG_PauseMenu_HPP
#define UE4SS_SDK_UMG_PauseMenu_HPP

class UUMG_PauseMenu_C : public UPauseMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Black_Background;

    void Construct();
    void ExecuteUbergraph_UMG_PauseMenu(int32 EntryPoint);
};

#endif
