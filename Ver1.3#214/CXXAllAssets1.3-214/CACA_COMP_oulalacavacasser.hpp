#ifndef UE4SS_SDK_CACA_COMP_oulalacavacasser_HPP
#define UE4SS_SDK_CACA_COMP_oulalacavacasser_HPP

class UCACA_COMP_oulalacavacasser_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    bool Cat on Rail;                                                                 // 0x00B8 (size: 0x1)
    FVector BaseLocation;                                                             // 0x00BC (size: 0xC)
    FRotator BaseRotation;                                                            // 0x00C8 (size: 0xC)
    FVector AddLocation;                                                              // 0x00D4 (size: 0xC)
    FRotator AddRotation;                                                             // 0x00E0 (size: 0xC)
    float DelayBeforeBreak;                                                           // 0x00EC (size: 0x4)
    float AnimationTime;                                                              // 0x00F0 (size: 0x4)
    float AnimationTimeRandom;                                                        // 0x00F4 (size: 0x4)
    bool FallOnExit?;                                                                 // 0x00F8 (size: 0x1)
    bool PhysicsOnExit?;                                                              // 0x00F9 (size: 0x1)
    class USplineRailComponent* Rail;                                                 // 0x0100 (size: 0x8)
    class ACatPawn* Cat Pawn;                                                         // 0x0108 (size: 0x8)
    class ABP_SplineRail_C* RailThatValidatedTheBreak;                                // 0x0110 (size: 0x8)
    bool Broken;                                                                      // 0x0118 (size: 0x1)

    void Complete_6246EF4646E19036986D72BA40074821();
    void Tick_6246EF4646E19036986D72BA40074821(float Ratio);
    void Complete_6246EF4646E19036986D72BAAADEB2AF();
    void Tick_6246EF4646E19036986D72BAAADEB2AF(float Ratio);
    void AfterCatEntered(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ReceiveBeginPlay();
    void BeforeCatExited(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void AfterCatJumpToNextRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void DeactivateAll();
    void ExecuteUbergraph_CACA_COMP_oulalacavacasser(int32 EntryPoint);
}; // Size: 0x119

#endif
