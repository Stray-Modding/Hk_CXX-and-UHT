#ifndef UE4SS_SDK_UMG_MainMenu_HPP
#define UE4SS_SDK_UMG_MainMenu_HPP

class UUMG_MainMenu_C : public UMainMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_UMG_MainMenu(int32 EntryPoint);
}; // Size: 0x3E8

#endif
