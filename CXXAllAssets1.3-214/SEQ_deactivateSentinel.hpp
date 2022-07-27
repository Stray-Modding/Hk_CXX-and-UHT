#ifndef UE4SS_SDK_SEQ_deactivateSentinel_HPP
#define UE4SS_SDK_SEQ_deactivateSentinel_HPP

class ASEQ_deactivateSentinel_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    bool HaveRikonium;                                                                // 0x0278 (size: 0x1)
    bool HasUpdatedMetState;                                                          // 0x0279 (size: 0x1)
    TArray<class ABP_SentinelAI_C*> SentinelsToActivate;                              // 0x0280 (size: 0x10)
    TArray<class AActor*> ActorsToActivate;                                           // 0x0290 (size: 0x10)
    TArray<class ABP_CatButton_ScratchableWallSpot_To_Dial_C*> Scratchable_Dial;      // 0x02A0 (size: 0x10)
    TArray<class ABP_Droid_C*> DroidsTodeactivate;                                    // 0x02B0 (size: 0x10)
    TArray<class ABP_Droid_C*> DroidsToActivate;                                      // 0x02C0 (size: 0x10)
    class ABP_Boombox_C* Boombox;                                                     // 0x02D0 (size: 0x8)
    TArray<class ABP_Droid_C*> DroidStreetDancerV1;                                   // 0x02D8 (size: 0x10)
    TArray<class ABP_Droid_C*> DroidStreetDancerV2;                                   // 0x02E8 (size: 0x10)
    class ABP_Truck_Truck_static_C* Truck;                                            // 0x02F8 (size: 0x8)
    class ABP_AlarmLight_C* Alarm;                                                    // 0x0300 (size: 0x8)
    class ABP_sfx_single_player_C* As BP Sfx Single Player;                           // 0x0308 (size: 0x8)
    class ABP_DisableIdle_Zone_C* DisableIdle_Zone;                                   // 0x0310 (size: 0x8)

    void LogicTrigger();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void DeactivateStreetDancersAfterFlat();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SEQ_deactivateSentinel(int32 EntryPoint);
}; // Size: 0x318

#endif
