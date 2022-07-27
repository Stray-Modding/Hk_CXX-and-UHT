#ifndef UE4SS_SDK_Seq_Barman_Club_HPP
#define UE4SS_SDK_Seq_Barman_Club_HPP

class ASeq_Barman_Club_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Barman;                                                        // 0x0270 (size: 0x8)
    TArray<class ABP_Droid_C*> Clients;                                               // 0x0278 (size: 0x10)
    class AActor* Cam_Intro_Global;                                                   // 0x0288 (size: 0x8)
    class AActor* Cam_Intro_BeerJauge;                                                // 0x0290 (size: 0x8)
    class ATriggerZone_C* TriggerZone_intro;                                          // 0x0298 (size: 0x8)
    class AActor* Cat_Pos_Intro;                                                      // 0x02A0 (size: 0x8)
    class AActor* Client_Pos_Serve;                                                   // 0x02A8 (size: 0x8)
    class AActor* Client_Pos_Back;                                                    // 0x02B0 (size: 0x8)
    class AActor* Barman_LookAt_DJ;                                                   // 0x02B8 (size: 0x8)
    class ABP_RandomDrinkInHand_C* DrinkServed;                                       // 0x02C0 (size: 0x8)
    class AActor* Drink_Pos_Counter;                                                  // 0x02C8 (size: 0x8)
    class ABP_Droid_C* Droid_Client2_date;                                            // 0x02D0 (size: 0x8)
    TArray<FS_ClientsClub> Clients_Info;                                              // 0x02D8 (size: 0x10)
    bool IsInCamBlazerCine;                                                           // 0x02E8 (size: 0x1)
    int32 Client_Selected;                                                            // 0x02EC (size: 0x4)
    int32 Previous_Client_Selected;                                                   // 0x02F0 (size: 0x4)
    FTransform DrinkTrans;                                                            // 0x0300 (size: 0x30)
    bool IsPuttingGlassAway;                                                          // 0x0330 (size: 0x1)

    void GetCurrentClient(class ABP_Droid_C*& Client, FTransform& Client Point in Club, class UAnimSequence*& Client Anim);
    void Complete_6246EF4646E19036986D72BA0E5F49E5();
    void Tick_6246EF4646E19036986D72BA0E5F49E5(float Ratio);
    void Complete_6246EF4646E19036986D72BA0C8E694A();
    void Tick_6246EF4646E19036986D72BA0C8E694A(float Ratio);
    void LogicTrigger();
    void OnStartSequence();
    void StartLoopServeDrink();
    void Cancel_loop_date();
    void Start_loop_date();
    void ExecuteUbergraph_Seq_Barman_Club(int32 EntryPoint);
}; // Size: 0x331

#endif
