#ifndef UE4SS_SDK_BP_BarrelRollable_WithZurgKillZone_HPP
#define UE4SS_SDK_BP_BarrelRollable_WithZurgKillZone_HPP

class ABP_BarrelRollable_WithZurgKillZone_C : public ABP_BarrelRollable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UChildActorComponent* ZurgKillZone1;                                        // 0x0380 (size: 0x8)
    class UChildActorComponent* ZurgKillZone;                                         // 0x0388 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void Apply_Damage();
    void ShowDebug();
    void ExecuteUbergraph_BP_BarrelRollable_WithZurgKillZone(int32 EntryPoint);
}; // Size: 0x390

#endif
