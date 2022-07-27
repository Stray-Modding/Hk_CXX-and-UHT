#ifndef UE4SS_SDK_Seq_BoomerShop_HPP
#define UE4SS_SDK_Seq_BoomerShop_HPP

class ASeq_BoomerShop_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UAudioComponent* music_intra_loud_music_loop_01_Cue;                        // 0x0278 (size: 0x8)
    TEnumAsByte<E_JacketShop_State> QuestState;                                       // 0x0280 (size: 0x1)
    class ABP_Droid_C* Shopkeeper;                                                    // 0x0288 (size: 0x8)
    class AActor* Shopkeeper_Idle_WalkPos1;                                           // 0x0290 (size: 0x8)
    class AActor* Shopkeeper_Idle_WalkPos2;                                           // 0x0298 (size: 0x8)
    class AActor* Shopkeeper_JacketPos;                                               // 0x02A0 (size: 0x8)
    class AActor* Shopkeeper_BoomerPos;                                               // 0x02A8 (size: 0x8)
    class AActor* Shopkeeper_GoBackPos;                                               // 0x02B0 (size: 0x8)
    class ACameraActor* CamShopkeeperReact;                                           // 0x02B8 (size: 0x8)
    class AActor* Cat_RepelPos;                                                       // 0x02C0 (size: 0x8)
    class ALOOT_Jacket_C* JacketToLoot;                                               // 0x02C8 (size: 0x8)
    class ABP_SwitchTrigger_C* FakeLootSwitch;                                        // 0x02D0 (size: 0x8)
    TArray<class AAmbientSound*> Baffles;                                             // 0x02D8 (size: 0x10)
    class USoundBase* sound base;                                                     // 0x02E8 (size: 0x8)
    float currentPlayhead;                                                            // 0x02F0 (size: 0x4)
    float gameTimeAtStart;                                                            // 0x02F4 (size: 0x4)
    bool isOn;                                                                        // 0x02F8 (size: 0x1)

    void OnStartSequence();
    void LogicTrigger();
    void JacketTaken(class ULootableComponent* _lootable);
    void DroneUseStarted_Event_0(class UDroneUsableComponent* Usable);
    void PlayBoombox distraction();
    void ShopKeeper_Repel();
    void IdleShopkeeper_Walk();
    void CancelShopkeeperIdle();
    void Shopkeeper jacket stolen idle();
    void Shopkeeper guard jacket idle();
    void Shopkeeper turn off boombox idle();
    void TurnOFFBoombox();
    void TurnONBommbox();
    void ExecuteUbergraph_Seq_BoomerShop(int32 EntryPoint);
}; // Size: 0x2F9

#endif
