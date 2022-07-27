#ifndef UE4SS_SDK_SEQ_LootRikonium_HPP
#define UE4SS_SDK_SEQ_LootRikonium_HPP

class ASEQ_LootRikonium_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class ABP_FactoryMovingBoxes_C* MovingBox;                                        // 0x0278 (size: 0x8)
    class ABP_FactoryMovingBoxes_C* MovingBox_2;                                      // 0x0280 (size: 0x8)
    class AActor* Camera_MovingBox;                                                   // 0x0288 (size: 0x8)
    class AActor* Camera_Door;                                                        // 0x0290 (size: 0x8)
    class ADialog* DialB12;                                                           // 0x0298 (size: 0x8)
    class ABP_DoorAnalogBase_Rikonium_C* RikoniumColumn;                              // 0x02A0 (size: 0x8)
    TArray<class AEmitter*> FX;                                                       // 0x02A8 (size: 0x10)
    float SpeedBox;                                                                   // 0x02B8 (size: 0x4)
    class AActor* LaserCollision;                                                     // 0x02C0 (size: 0x8)
    class ABP_HKPlayerStart_C* Checkpoint;                                            // 0x02C8 (size: 0x8)
    class ABP_BarrelRollable_C* Barrel;                                               // 0x02D0 (size: 0x8)
    bool CheckpointActivated;                                                         // 0x02D8 (size: 0x1)

    void Complete_6246EF4646E19036986D72BA2A3E990F();
    void Tick_6246EF4646E19036986D72BA2A3E990F(float Ratio);
    void LogicTrigger();
    void EnterBarrel_Event();
    void BndEvt__SEQ_LootRikonium_m_streamingComponent_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExitBarrel_Event();
    void ExecuteUbergraph_SEQ_LootRikonium(int32 EntryPoint);
}; // Size: 0x2D9

#endif
