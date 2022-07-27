#ifndef UE4SS_SDK_SEQ_EndingMetroInGame_HPP
#define UE4SS_SDK_SEQ_EndingMetroInGame_HPP

class ASEQ_EndingMetroInGame_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class AActor* Cat_TPFromJail_POS;                                                 // 0x0278 (size: 0x8)
    class AActor* Cat_InFrontGrid_POS;                                                // 0x0280 (size: 0x8)
    class AActor* Drone_InFrontGrid_POS;                                              // 0x0288 (size: 0x8)
    class ABP_Droid_C* Clementine;                                                    // 0x0290 (size: 0x8)
    class AActor* MetroDoor;                                                          // 0x0298 (size: 0x8)
    class AActor* Truck Outro;                                                        // 0x02A0 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x02A8 (size: 0x8)
    bool Init;                                                                        // 0x02B0 (size: 0x1)
    class ABP_SplineCameraCine_Simple_C* Camera_PlanGrid_Cine;                        // 0x02B8 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_PlanSentinel;                         // 0x02C0 (size: 0x8)
    TArray<class ABP_SentinelAI_C*> Sentinels;                                        // 0x02C8 (size: 0x10)
    class ABP_SplineCameraCine_Simple_C* Camera_PlanOpenCar;                          // 0x02D8 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_PlanOnCat;                            // 0x02E0 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_PlanOnCatFocus;                       // 0x02E8 (size: 0x8)
    class AActor* Target Actor;                                                       // 0x02F0 (size: 0x8)
    class AActor* Drone Target POS;                                                   // 0x02F8 (size: 0x8)
    class AActor* Cat_TPToMetro_POS;                                                  // 0x0300 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_PlanSentinel_Focus;                   // 0x0308 (size: 0x8)
    TArray<FName> Transition Groups;                                                  // 0x0310 (size: 0x10)
    TArray<TSoftObjectPtr<UWorld>> Preloaded Levels;                                  // 0x0320 (size: 0x10)
    bool CheckpointJailToEnding;                                                      // 0x0330 (size: 0x1)

    void SetAcceleration(float Acceleration);
    void SetSpeed(float SpeedTarget);
    void Complete_6246EF4646E19036986D72BAC713C9EF();
    void Tick_6246EF4646E19036986D72BAC713C9EF(float Ratio);
    void Complete_6246EF4646E19036986D72BA1ADA612D();
    void Tick_6246EF4646E19036986D72BA1ADA612D(float Ratio);
    void Complete_6246EF4646E19036986D72BA0F20FD49();
    void Tick_6246EF4646E19036986D72BA0F20FD49(float Ratio);
    void Complete_6246EF4646E19036986D72BABDE3E354();
    void Tick_6246EF4646E19036986D72BABDE3E354(float Ratio);
    void Complete_6246EF4646E19036986D72BA6128DEA2();
    void Tick_6246EF4646E19036986D72BA6128DEA2(float Ratio);
    void LogicTrigger();
    void BndEvt__SEQ_CineMetro_m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void InitSequence();
    void Zoom On Sentinel(float Ratio);
    void Checkpoint();
    void ExecuteUbergraph_SEQ_EndingMetroInGame(int32 EntryPoint);
}; // Size: 0x331

#endif
