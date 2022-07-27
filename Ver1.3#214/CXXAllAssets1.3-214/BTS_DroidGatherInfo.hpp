#ifndef UE4SS_SDK_BTS_DroidGatherInfo_HPP
#define UE4SS_SDK_BTS_DroidGatherInfo_HPP

class UBTS_DroidGatherInfo_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    FBlackboardKeySelector CurrentMovementStateKeySelector;                           // 0x00A0 (size: 0x28)
    FBlackboardKeySelector HasStumbledKeySelector;                                    // 0x00C8 (size: 0x28)
    FBlackboardKeySelector InterlocutorKeySelector;                                   // 0x00F0 (size: 0x28)
    FBlackboardKeySelector IsRepellingKeySelector;                                    // 0x0118 (size: 0x28)
    FBlackboardKeySelector HasDialogAnimationKeySelector;                             // 0x0140 (size: 0x28)
    FBlackboardKeySelector IsWaitingForInteractionKeySelector;                        // 0x0168 (size: 0x28)
    class ABP_Droid_C* Droid;                                                         // 0x0190 (size: 0x8)
    class ABP_DroidAIController_C* DroidAI;                                           // 0x0198 (size: 0x8)

    void HasValidAnimationInArray(TArray<class UAnimSequence*>& Animations, bool& Valid);
    void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void OnRepellingChanged(bool Value);
    void OnWaitingForInteractionChanged(bool Value);
    void IsWithinDialogChanged(bool Condition);
    void OnPostureChanged(EDroidPosture newValue);
    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void OnMovementStateChanged(EDroidMovementState New Movement State);
    void OnDialogLineBegan(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    void ExecuteUbergraph_BTS_DroidGatherInfo(int32 EntryPoint);
}; // Size: 0x1A0

#endif
