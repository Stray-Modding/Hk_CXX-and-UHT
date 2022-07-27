#ifndef UE4SS_SDK_DIAL_NPC_Subway_HPP
#define UE4SS_SDK_DIAL_NPC_Subway_HPP

class ADIAL_NPC_Subway_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class AActor* LookAtArrest;                                                       // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_DIAL_NPC_Subway(int32 EntryPoint);
}; // Size: 0x350

#endif
