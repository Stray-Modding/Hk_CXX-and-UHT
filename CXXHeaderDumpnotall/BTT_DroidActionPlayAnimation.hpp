#ifndef UE4SS_SDK_BTT_DroidActionPlayAnimation_HPP
#define UE4SS_SDK_BTT_DroidActionPlayAnimation_HPP

class UBTT_DroidActionPlayAnimation_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector Animation;
    FBlackboardKeySelector Duration;
    FBlackboardKeySelector IsLooping;
    FBlackboardKeySelector PlayPosition;
    FBlackboardKeySelector IsSynchronized;
    FBlackboardKeySelector AnimationSynchronizedObject;
    class UAnimSequence* CurrentDroidSynchronizedAnimation;
    class UBP_Object_Animation_Synchronized_C* SynchronizedObjectAnimation;
    int32 CurrentDroidAnimationIndex;
    class UAnimSequence* CurrentSynchronizedDroidAnim;
    bool ShouldLoop;

    void ReceiveExecute(class AActor* OwnerActor);
    void ReceiveAbort(class AActor* OwnerActor);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void CustomEvent_0();
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void OnLocomotionBehaviorChangedEvent(EDroidLocomotionBehavior newLocomotionBehavior);
    void ExecuteUbergraph_BTT_DroidActionPlayAnimation(int32 EntryPoint);
};

#endif
