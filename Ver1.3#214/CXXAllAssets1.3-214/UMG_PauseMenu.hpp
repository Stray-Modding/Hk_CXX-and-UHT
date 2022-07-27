#ifndef UE4SS_SDK_UMG_PauseMenu_HPP
#define UE4SS_SDK_UMG_PauseMenu_HPP

class UUMG_PauseMenu_C : public UPauseMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UImage* Black_Background;                                                   // 0x03E0 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_UMG_PauseMenu(int32 EntryPoint);
}; // Size: 0x3E8

#endif
