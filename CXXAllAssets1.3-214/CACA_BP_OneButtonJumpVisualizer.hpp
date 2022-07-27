#ifndef UE4SS_SDK_CACA_BP_OneButtonJumpVisualizer_HPP
#define UE4SS_SDK_CACA_BP_OneButtonJumpVisualizer_HPP

class ACACA_BP_OneButtonJumpVisualizer_C : public AManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UWidgetComponent* Widget Down Out of bounds;                                // 0x0230 (size: 0x8)
    class UWidgetComponent* Widget Up Out of bounds;                                  // 0x0238 (size: 0x8)
    class UWidgetComponent* Widget Jump Down;                                         // 0x0240 (size: 0x8)
    class UWidgetComponent* Widget Jump Up;                                           // 0x0248 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0250 (size: 0x8)
    float Timeline_1_NewTrack_0_5E04F08C4E834FE9AA35EF86A4F20428;                     // 0x0258 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_5E04F08C4E834FE9AA35EF86A4F20428; // 0x025C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0260 (size: 0x8)
    float Timeline_0_NewTrack_0_B46F31014F95996F45E4B6B5D54D7135;                     // 0x0268 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B46F31014F95996F45E4B6B5D54D7135; // 0x026C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0270 (size: 0x8)
    FNoiseSmootherVector NoiseSmootherUP;                                             // 0x0278 (size: 0x40)
    FNoiseSmootherVector NoiseSmootherDOWN;                                           // 0x02B8 (size: 0x40)
    FVector JumpUP+1;                                                                 // 0x02F8 (size: 0xC)
    FVector JumpDown+1;                                                               // 0x0304 (size: 0xC)
    class UMaterialInstanceDynamic* MatInstUP;                                        // 0x0310 (size: 0x8)
    class UMaterialInstanceDynamic* MatInstDOWN;                                      // 0x0318 (size: 0x8)
    FVector vector 0,0,2;                                                             // 0x0320 (size: 0xC)
    class UWidgetComponent* UI UP;                                                    // 0x0330 (size: 0x8)
    class UUserWidget* widget up;                                                     // 0x0338 (size: 0x8)
    bool CouldJump;                                                                   // 0x0340 (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x0348 (size: 0x8)

    void ClampWorldPointWithinScreen(FVector Point, float Margin, float DistanceToCamera, FVector& ClampedPoint, bool& Success);
    void IsWorldPointWithinScreen(FVector Point, float Margin, bool& WithinScreen);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void UpdateOutOfBoundsFeedback(class UWidgetComponent* WorldWidget, class UWidgetComponent* OutOfBoundsWidget, bool Should show);
    void ExecuteUbergraph_CACA_BP_OneButtonJumpVisualizer(int32 EntryPoint);
}; // Size: 0x350

#endif
