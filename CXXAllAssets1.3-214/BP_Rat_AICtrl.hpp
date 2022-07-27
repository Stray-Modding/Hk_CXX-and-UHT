#ifndef UE4SS_SDK_BP_Rat_AICtrl_HPP
#define UE4SS_SDK_BP_Rat_AICtrl_HPP

class ABP_Rat_AICtrl_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    FVector Init Location;                                                            // 0x0338 (size: 0xC)
    float Distance to Cat;                                                            // 0x0344 (size: 0x4)
    bool IsFleeing;                                                                   // 0x0348 (size: 0x1)
    FVector Flee Location;                                                            // 0x034C (size: 0xC)
    FVector Roaming Location;                                                         // 0x0358 (size: 0xC)
    bool IsOnScreen;                                                                  // 0x0364 (size: 0x1)
    float Max Distance to Cat;                                                        // 0x0368 (size: 0x4)

    void UserConstructionScript();
    void OnFail_974B6B094B497CB18737DC88E44BF858(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_974B6B094B497CB18737DC88E44BF858(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_6C7DD80C4BF6149970F1C89F4035F4A9(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_6C7DD80C4BF6149970F1C89F4035F4A9(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void Roaming();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Flee();
    void ExecuteUbergraph_BP_Rat_AICtrl(int32 EntryPoint);
}; // Size: 0x36C

#endif
