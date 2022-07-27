#ifndef UE4SS_SDK_BP_Zurg_KillZone_HPP
#define UE4SS_SDK_BP_Zurg_KillZone_HPP

class ABP_Zurg_KillZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    TMap<AZurgPawnSlave*, float> InsideZoneZurgs;                                     // 0x0238 (size: 0x50)
    float DamageToApplyPerDelay;                                                      // 0x0288 (size: 0x4)
    float DamageApplicationDelayInSecond;                                             // 0x028C (size: 0x4)
    bool IsDynamicObstacle;                                                           // 0x0290 (size: 0x1)
    bool IsActive;                                                                    // 0x0291 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void PushZurg(const class AZurgPawnSlave*& Zurg Pawn);
    void PopZurg(const class AZurgPawnSlave*& Zurg Pawn);
    void LogicTrigger();
    void Activate();
    void Deactivate();
    void ExecuteUbergraph_BP_Zurg_KillZone(int32 EntryPoint);
}; // Size: 0x292

#endif
