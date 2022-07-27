#ifndef UE4SS_SDK_Dial_Antvillage_Child_FlowerQuest_HPP
#define UE4SS_SDK_Dial_Antvillage_Child_FlowerQuest_HPP

class ADial_Antvillage_Child_FlowerQuest_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class AActor* LookAtPlant;                                                        // 0x0348 (size: 0x8)
    class AActor* FakePlantRed;                                                       // 0x0350 (size: 0x8)
    class AActor* FakePlantYellow;                                                    // 0x0358 (size: 0x8)
    class AActor* FakePlantPurple;                                                    // 0x0360 (size: 0x8)
    bool FirstGreeting;                                                               // 0x0368 (size: 0x1)
    bool Gave_Badge;                                                                  // 0x0369 (size: 0x1)
    bool RedPlantGiven;                                                               // 0x036A (size: 0x1)
    bool YellowPlantGiven;                                                            // 0x036B (size: 0x1)
    bool MauvePlantGiven;                                                             // 0x036C (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void BndEvt__Dial_Antvillage_Malo_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_Antvillage_Child_FlowerQuest(int32 EntryPoint);
}; // Size: 0x36D

#endif
