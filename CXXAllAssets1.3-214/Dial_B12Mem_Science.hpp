#ifndef UE4SS_SDK_Dial_B12Mem_Science_HPP
#define UE4SS_SDK_Dial_B12Mem_Science_HPP

class ADial_B12Mem_Science_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* Look_At_Bookshelf;                                                  // 0x0340 (size: 0x8)
    class AActor* Look_At_Book_1;                                                     // 0x0348 (size: 0x8)
    class AActor* Look_At_Book_2;                                                     // 0x0350 (size: 0x8)
    class AActor* Look_At_Book_3;                                                     // 0x0358 (size: 0x8)

    void OnDialogBegan();
    void OnRequestDialog();
    void ExecuteUbergraph_Dial_B12Mem_Science(int32 EntryPoint);
}; // Size: 0x360

#endif
