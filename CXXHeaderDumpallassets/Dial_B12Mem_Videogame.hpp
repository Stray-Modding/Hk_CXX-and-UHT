#ifndef UE4SS_SDK_Dial_B12Mem_Videogame_HPP
#define UE4SS_SDK_Dial_B12Mem_Videogame_HPP

class ADial_B12Mem_Videogame_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* Look_At_poster;                                                     // 0x0340 (size: 0x8)
    class AActor* Look_Away;                                                          // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void OnRequestDialog();
    void ExecuteUbergraph_Dial_B12Mem_Videogame(int32 EntryPoint);
}; // Size: 0x350

#endif
