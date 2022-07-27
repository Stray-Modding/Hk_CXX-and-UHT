#ifndef UE4SS_SDK_BTS_DroidGatherInfo_HPP
#define UE4SS_SDK_BTS_DroidGatherInfo_HPP

class UBTS_DroidGatherInfo_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector CurrentMovementStateKeySelector;
    FBlackboardKeySelector HasStumbledKeySelector;
    FBlackboardKeySelector InterlocutorKeySelector;
    FBlackboardKeySelector IsRepellingKeySelector;
    FBlackboardKeySelector HasDialogAnimationKeySelector;
    FBlackboardKeySelector IsWaitingForInteractionKeySelector;
    class ABP_Droid_C* Droid;
    class ABP_DroidAIController_C* DroidAI;

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
};

#endif
