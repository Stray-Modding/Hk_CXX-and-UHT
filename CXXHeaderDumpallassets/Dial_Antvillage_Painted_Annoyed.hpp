#ifndef UE4SS_SDK_Dial_Antvillage_Painted_Annoyed_HPP
#define UE4SS_SDK_Dial_Antvillage_Painted_Annoyed_HPP

class ADial_Antvillage_Painted_Annoyed_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* Look_At_painter;                                                    // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Antvillage_Painted_Annoyed(int32 EntryPoint);
}; // Size: 0x348

#endif
