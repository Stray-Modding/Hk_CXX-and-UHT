#ifndef UE4SS_SDK_Dial_BeforeSewersNoGoBack_HPP
#define UE4SS_SDK_Dial_BeforeSewersNoGoBack_HPP

class ADial_BeforeSewersNoGoBack_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_BeforeSewersNoGoBack(int32 EntryPoint);
}; // Size: 0x340

#endif
