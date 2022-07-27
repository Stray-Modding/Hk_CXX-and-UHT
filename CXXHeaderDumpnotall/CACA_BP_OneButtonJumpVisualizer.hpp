#ifndef UE4SS_SDK_CACA_BP_OneButtonJumpVisualizer_HPP
#define UE4SS_SDK_CACA_BP_OneButtonJumpVisualizer_HPP

class ACACA_BP_OneButtonJumpVisualizer_C : public AManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget Down Out of bounds;
    class UWidgetComponent* Widget Up Out of bounds;
    class UWidgetComponent* Widget Jump Down;
    class UWidgetComponent* Widget Jump Up;
    class USceneComponent* Scene;
    float Timeline_1_NewTrack_0_5E04F08C4E834FE9AA35EF86A4F20428;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_5E04F08C4E834FE9AA35EF86A4F20428;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_NewTrack_0_B46F31014F95996F45E4B6B5D54D7135;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B46F31014F95996F45E4B6B5D54D7135;
    class UTimelineComponent* Timeline_0;
    FNoiseSmootherVector NoiseSmootherUP;
    FNoiseSmootherVector NoiseSmootherDOWN;
    FVector JumpUP+1;
    FVector JumpDown+1;
    class UMaterialInstanceDynamic* MatInstUP;
    class UMaterialInstanceDynamic* MatInstDOWN;
    FVector vector 0,0,2;
    class UWidgetComponent* UI UP;
    class UUserWidget* widget up;
    bool CouldJump;
    class ABP_CatPawn_C* cat;

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
};

#endif
