#ifndef UE4SS_SDK_DIAL_Clementine_Intro_HPP
#define UE4SS_SDK_DIAL_Clementine_Intro_HPP

class ADIAL_Clementine_Intro_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Clem;                                                          // 0x0348 (size: 0x8)
    class AActor* Lamp_InHand_SKM;                                                    // 0x0350 (size: 0x8)
    class ASeq_Clem_Flat_Intro_C* SEQ_Intro;                                          // 0x0358 (size: 0x8)
    class AActor* Drone target;                                                       // 0x0360 (size: 0x8)
    class AActor* Lamp_Ground;                                                        // 0x0368 (size: 0x8)
    class AActor* key_On_Wall;                                                        // 0x0370 (size: 0x8)
    class AStaticMeshActor* ScreenComputer;                                           // 0x0378 (size: 0x8)
    class AActor* Point_InFrontOfBoard;                                               // 0x0380 (size: 0x8)
    class AActor* Point_Computer;                                                     // 0x0388 (size: 0x8)
    bool WhatAreYouDoingHere?;                                                        // 0x0390 (size: 0x1)
    bool InFrontOfBoard;                                                              // 0x0391 (size: 0x1)
    bool GoFindBattery;                                                               // 0x0392 (size: 0x1)
    bool isInFrontOfComputer;                                                         // 0x0393 (size: 0x1)
    class AActor* ActorCol_Pillow;                                                    // 0x0398 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void AfterDial_computer();
    void BndEvt__DIAL_Clementine_Intro_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_DIAL_Clementine_Intro(int32 EntryPoint);
}; // Size: 0x3A0

#endif
