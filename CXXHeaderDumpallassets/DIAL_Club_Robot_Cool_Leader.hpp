#ifndef UE4SS_SDK_DIAL_Club_Robot_Cool_Leader_HPP
#define UE4SS_SDK_DIAL_Club_Robot_Cool_Leader_HPP

class ADIAL_Club_Robot_Cool_Leader_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0348 (size: 0x8)
    class AActor* LookAtMezzanine;                                                    // 0x0350 (size: 0x8)
    class AActor* FakeLever;                                                          // 0x0358 (size: 0x8)
    class AActor* FakeDrink;                                                          // 0x0360 (size: 0x8)
    bool DrinkGiven;                                                                  // 0x0368 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void BndEvt__DIAL_Club_Robot_Cool_Leader_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_DIAL_Club_Robot_Cool_Leader(int32 EntryPoint);
}; // Size: 0x369

#endif
