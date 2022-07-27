#ifndef UE4SS_SDK_Dial_Droid_LookAtSky_HPP
#define UE4SS_SDK_Dial_Droid_LookAtSky_HPP

class ADial_Droid_LookAtSky_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0348 (size: 0x8)
    class AActor* Spot_Telescope;                                                     // 0x0350 (size: 0x8)
    class AActor* Telescope;                                                          // 0x0358 (size: 0x8)
    class AActor* Spot_Lying;                                                         // 0x0360 (size: 0x8)
    class AActor* LyingLookAt;                                                        // 0x0368 (size: 0x8)
    class AActor* Book;                                                               // 0x0370 (size: 0x8)
    bool isInCouch;                                                                   // 0x0378 (size: 0x1)
    bool WasLookingForOutsiders;                                                      // 0x0379 (size: 0x1)
    class AActor* Chair;                                                              // 0x0380 (size: 0x8)
    class AActor* Collision;                                                          // 0x0388 (size: 0x8)
    bool BP_SnoreLooper;                                                              // 0x0390 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void EnableTelescope();
    void BndEvt__Dial_Droid_LookAtSky_Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_Droid_LookAtSky(int32 EntryPoint);
}; // Size: 0x391

#endif
