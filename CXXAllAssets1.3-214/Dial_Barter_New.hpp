#ifndef UE4SS_SDK_Dial_Barter_New_HPP
#define UE4SS_SDK_Dial_Barter_New_HPP

class ADial_Barter_New_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0348 (size: 0x8)
    class AActor* Drone target;                                                       // 0x0350 (size: 0x8)
    TArray<class ABP_TroccableBase_C*> Troccables;                                    // 0x0358 (size: 0x10)
    class UCOMP_Troccable_C* CurrentTroccable;                                        // 0x0368 (size: 0x8)
    class ABP_B12_SecondaryMemory_Scene_C* Memory;                                    // 0x0370 (size: 0x8)
    class ATriggerZone_C* CloseCat_Trigger_OUT;                                       // 0x0378 (size: 0x8)
    class ATriggerZone_C* CloseCat_Trigger_IN;                                        // 0x0380 (size: 0x8)
    bool DoIntroTalk?;                                                                // 0x0388 (size: 0x1)
    bool Already met;                                                                 // 0x0389 (size: 0x1)
    class ADial_Elliot_C* DialElliot;                                                 // 0x0390 (size: 0x8)

    void GetNumberOfSoldItems(int32& NbOfItemSold);
    void Remove_N_Item_From_Inventory(FName Loot, int32 Nb);
    void CalculateNbOfItemInventory(class ULootableComponent* LootToTest, int32& Nb);
    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void DisableBartermanDial();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnStartTroc_Event_0(class UCOMP_Troccable_C* Comp Troccable, TEnumAsByte<E_BartermanLoot> ObjectType);
    void OnComponentEndOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnComponentBeginOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Start Waving();
    void Stop Waving(bool KeepLookAt);
    void OnComponentBeginOverlap_Event_1(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnComponentEndOverlap_Event_1(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_Dial_Barter_New(int32 EntryPoint);
}; // Size: 0x398

#endif
