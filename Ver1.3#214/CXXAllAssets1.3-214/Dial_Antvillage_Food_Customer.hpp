#ifndef UE4SS_SDK_Dial_Antvillage_Food_Customer_HPP
#define UE4SS_SDK_Dial_Antvillage_Food_Customer_HPP

class ADial_Antvillage_Food_Customer_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool TalkedOnce;                                                                  // 0x0340 (size: 0x1)
    class AActor* Look_At_Dreaming;                                                   // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Antvillage_Food_Customer(int32 EntryPoint);
}; // Size: 0x350

#endif
