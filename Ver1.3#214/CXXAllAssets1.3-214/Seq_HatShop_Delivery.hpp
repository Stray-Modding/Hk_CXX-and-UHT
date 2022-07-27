#ifndef UE4SS_SDK_Seq_HatShop_Delivery_HPP
#define UE4SS_SDK_Seq_HatShop_Delivery_HPP

class ASeq_HatShop_Delivery_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class ABP_Droid_C* Droid_Truck;                                                   // 0x0278 (size: 0x8)
    class ABP_Truck_Truck_C* Truck;                                                   // 0x0280 (size: 0x8)
    class AActor* Droid_Truck_FAKE_BOX;                                               // 0x0288 (size: 0x8)
    class ABP_Droid_C* Droid_Delivery;                                                // 0x0290 (size: 0x8)
    class AActor* Droid_Delivery_Pos_To_Hat_Shop;                                     // 0x0298 (size: 0x8)
    class AActor* Droid_Delivery_Pos_Pickup;                                          // 0x02A0 (size: 0x8)
    class AActor* Droid_Delivery_Pos_Shop;                                            // 0x02A8 (size: 0x8)
    class AActor* Droid_Delivery_Pos_Shop_With_Cat;                                   // 0x02B0 (size: 0x8)
    class ABP_CatButton_PushableBottleCrate_C* Bottle_Crate;                          // 0x02B8 (size: 0x8)
    class AActor* Pos_Beer_Spawn;                                                     // 0x02C0 (size: 0x8)
    TEnumAsByte<E_Hatshop_State> Hatshop_state;                                       // 0x02C8 (size: 0x1)
    bool BoxFallen;                                                                   // 0x02C9 (size: 0x1)
    bool LoopStarted;                                                                 // 0x02CA (size: 0x1)
    bool is_Cat_Inside;                                                               // 0x02CB (size: 0x1)
    bool Droid_Delivery_Is_Entering_Shop;                                             // 0x02CC (size: 0x1)
    class ALOOT_Helmet_C* Helmet loot;                                                // 0x02D0 (size: 0x8)
    class AActor* Box_Point_In_Shop_With_Cat;                                         // 0x02D8 (size: 0x8)
    TArray<class ABP_SplineRail_C*> RailsToActivate;                                  // 0x02E0 (size: 0x10)
    class AActor* Box_Point_Outside;                                                  // 0x02F0 (size: 0x8)
    TArray<class AActor*> Boxes_In_Shop;                                              // 0x02F8 (size: 0x10)
    class ACACA_CartonHideOut_C* Box_Outside;                                         // 0x0308 (size: 0x8)
    class ACACA_CartonHideOut_C* Box_In_Hand;                                         // 0x0310 (size: 0x8)
    class ACACA_CartonHideOut_C* Box_In_Spot_With_Cat;                                // 0x0318 (size: 0x8)
    class ABP_Droid_C* Droid_shopkeeper;                                              // 0x0320 (size: 0x8)
    FTransform BoxTransTemp;                                                          // 0x0330 (size: 0x30)
    class ABP_DoorWindowBase_C* Door_Shop;                                            // 0x0360 (size: 0x8)
    class ATriggerZone_C* Trigger_Zone_Repel;                                         // 0x0368 (size: 0x8)
    class AActor* Cat_Point_Jump_Repel;                                               // 0x0370 (size: 0x8)
    int32 Box_In_Shop_Count;                                                          // 0x0378 (size: 0x4)
    class AActor* Shopkeeper_Point_In_Store;                                          // 0x0380 (size: 0x8)
    class ABP_SimpleLooperHolder_C* BP_SnoreLoop;                                     // 0x0388 (size: 0x8)
    class AActor* Col_Leg_SleepingDroid;                                              // 0x0390 (size: 0x8)
    int32 Box_In_Shop_Max;                                                            // 0x0398 (size: 0x4)
    class ABP_CameraThirdPersonModifierZone_C* Truck_CamModifier;                     // 0x03A0 (size: 0x8)

    void Complete_6246EF4646E19036986D72BAB694ED9F();
    void Tick_6246EF4646E19036986D72BAB694ED9F(float Ratio);
    void OnStartSequence();
    void Restart_Droid_Truck_Loop();
    void Restart_Droid_Delivery_Loop();
    void LogicTrigger();
    void Add Box In Shop();
    void SPAWN_BOX();
    void ReceiveTick(float DeltaSeconds);
    void Update_ShopDelivery_State(TEnumAsByte<E_Hatshop_State> New Hatshop_state);
    void Repel Cat();
    void ExecuteUbergraph_Seq_HatShop_Delivery(int32 EntryPoint);
}; // Size: 0x3A8

#endif
