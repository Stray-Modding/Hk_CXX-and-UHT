#ifndef UE4SS_SDK_CACA_RatController_HPP
#define UE4SS_SDK_CACA_RatController_HPP

class ACACA_RatController_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    TArray<class AActor*> Waypoints;                                                  // 0x0338 (size: 0x10)
    class AActor* MyPawn;                                                             // 0x0348 (size: 0x8)
    bool Grabbed;                                                                     // 0x0350 (size: 0x1)
    bool Flee;                                                                        // 0x0351 (size: 0x1)
    bool Screamer;                                                                    // 0x0352 (size: 0x1)

    void FleeActor(class AActor* ActorToFlee);
    void GoToRandomWaypoint();
    void GetRandomWaypoint(class AActor*& Waypoint);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_CACA_RatController(int32 EntryPoint);
}; // Size: 0x353

#endif
