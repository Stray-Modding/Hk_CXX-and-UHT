#ifndef UE4SS_SDK_Dial_consumer_HPP
#define UE4SS_SDK_Dial_consumer_HPP

class ADial_consumer_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    bool Dial_Once;                                                                   // 0x0348 (size: 0x1)
    class AActor* Barterman_Dir;                                                      // 0x0350 (size: 0x8)
    class ABP_Droid_C* Consumer;                                                      // 0x0358 (size: 0x8)
    class AActor* Caddie;                                                             // 0x0360 (size: 0x8)
    bool Anim_Change;                                                                 // 0x0368 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void Loop_Caddie();
    void ExecuteUbergraph_Dial_consumer(int32 EntryPoint);
}; // Size: 0x369

#endif
