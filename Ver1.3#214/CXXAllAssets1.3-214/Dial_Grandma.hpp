#ifndef UE4SS_SDK_Dial_Grandma_HPP
#define UE4SS_SDK_Dial_Grandma_HPP

class ADial_Grandma_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid_GrandMa;                                                 // 0x0348 (size: 0x8)
    class AActor* SewingCloth;                                                        // 0x0350 (size: 0x8)
    class AActor* Elliot_Door_Loc;                                                    // 0x0358 (size: 0x8)
    class ADial_Elliot_C* Dial_Elliot;                                                // 0x0360 (size: 0x8)
    bool Dial_Once;                                                                   // 0x0368 (size: 0x1)
    bool AfterSewing;                                                                 // 0x0369 (size: 0x1)
    FRotator ClothStartRot;                                                           // 0x036C (size: 0xC)
    bool isSewing;                                                                    // 0x0378 (size: 0x1)
    bool ponchoGiven;                                                                 // 0x0379 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Dial_Grandma(int32 EntryPoint);
}; // Size: 0x37A

#endif
