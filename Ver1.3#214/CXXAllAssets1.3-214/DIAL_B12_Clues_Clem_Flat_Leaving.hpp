#ifndef UE4SS_SDK_DIAL_B12_Clues_Clem_Flat_Leaving_HPP
#define UE4SS_SDK_DIAL_B12_Clues_Clem_Flat_Leaving_HPP

class ADIAL_B12_Clues_Clem_Flat_Leaving_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* Cat_Point_Dial;                                                     // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_B12_Clues_Clem_Flat_Leaving(int32 EntryPoint);
}; // Size: 0x348

#endif
