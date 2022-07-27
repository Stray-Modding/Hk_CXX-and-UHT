#ifndef UE4SS_SDK_BTS_Zurg_Sensing_HPP
#define UE4SS_SDK_BTS_Zurg_Sensing_HPP

class UBTS_Zurg_Sensing_C : public UBTS_Zurg_Leader_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector SeenActor_KeySelector;
    FBlackboardKeySelector SeenActorZurgDetector_KeySelector;
    FBlackboardKeySelector ProximitySensedActor_KeySelector;
    FBlackboardKeySelector ProximityZurgSensorActor_KeySelector;
    FBlackboardKeySelector HearedActor_KeySelector;
    FBlackboardKeySelector LastHearedLocation_KeySelector;
    FBlackboardKeySelector IsSeeingTarget_KeySelector;
    FBlackboardKeySelector CurrentStateKeySelector;
    FBlackboardKeySelector HasHearedSoundKeySelector;
    FBlackboardKeySelector LastSeenActorLocationKeySelector;
    FBlackboardKeySelector IsSlaveUnderLight_KeySelector;
    FBlackboardKeySelector CurrentEnlightingLight_KeySelector;

    void TickProximitySensing();
    void TickHearing();
    void TickVision();
    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void TickLightSensing();
    void ExecuteUbergraph_BTS_Zurg_Sensing(int32 EntryPoint);
};

#endif
