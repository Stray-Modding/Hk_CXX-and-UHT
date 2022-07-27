#ifndef UE4SS_SDK_DIAL_B12_Clues_Clem_Flat_4_HPP
#define UE4SS_SDK_DIAL_B12_Clues_Clem_Flat_4_HPP

class ADIAL_B12_Clues_Clem_Flat_4_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool ReadOnce;                                                                    // 0x0340 (size: 0x1)
    class AActor* Drone_Target;                                                       // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_B12_Clues_Clem_Flat_4(int32 EntryPoint);
}; // Size: 0x350

#endif
