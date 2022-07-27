#ifndef UE4SS_SDK_BTS_Zurg_Sensing_HPP
#define UE4SS_SDK_BTS_Zurg_Sensing_HPP

class UBTS_Zurg_Sensing_C : public UBTS_Zurg_Leader_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FBlackboardKeySelector SeenActor_KeySelector;                                     // 0x00B8 (size: 0x28)
    FBlackboardKeySelector SeenActorZurgDetector_KeySelector;                         // 0x00E0 (size: 0x28)
    FBlackboardKeySelector ProximitySensedActor_KeySelector;                          // 0x0108 (size: 0x28)
    FBlackboardKeySelector ProximityZurgSensorActor_KeySelector;                      // 0x0130 (size: 0x28)
    FBlackboardKeySelector HearedActor_KeySelector;                                   // 0x0158 (size: 0x28)
    FBlackboardKeySelector LastHearedLocation_KeySelector;                            // 0x0180 (size: 0x28)
    FBlackboardKeySelector IsSeeingTarget_KeySelector;                                // 0x01A8 (size: 0x28)
    FBlackboardKeySelector CurrentStateKeySelector;                                   // 0x01D0 (size: 0x28)
    FBlackboardKeySelector HasHearedSoundKeySelector;                                 // 0x01F8 (size: 0x28)
    FBlackboardKeySelector LastSeenActorLocationKeySelector;                          // 0x0220 (size: 0x28)
    FBlackboardKeySelector IsSlaveUnderLight_KeySelector;                             // 0x0248 (size: 0x28)
    FBlackboardKeySelector CurrentEnlightingLight_KeySelector;                        // 0x0270 (size: 0x28)

    void TickProximitySensing();
    void TickHearing();
    void TickVision();
    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void TickLightSensing();
    void ExecuteUbergraph_BTS_Zurg_Sensing(int32 EntryPoint);
}; // Size: 0x298

#endif
