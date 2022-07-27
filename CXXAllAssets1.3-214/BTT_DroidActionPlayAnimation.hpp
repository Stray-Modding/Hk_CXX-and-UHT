#ifndef UE4SS_SDK_BTT_DroidActionPlayAnimation_HPP
#define UE4SS_SDK_BTT_DroidActionPlayAnimation_HPP

class UBTT_DroidActionPlayAnimation_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    FBlackboardKeySelector Animation;                                                 // 0x00C8 (size: 0x28)
    FBlackboardKeySelector Duration;                                                  // 0x00F0 (size: 0x28)
    FBlackboardKeySelector IsLooping;                                                 // 0x0118 (size: 0x28)
    FBlackboardKeySelector PlayPosition;                                              // 0x0140 (size: 0x28)
    FBlackboardKeySelector IsSynchronized;                                            // 0x0168 (size: 0x28)
    FBlackboardKeySelector AnimationSynchronizedObject;                               // 0x0190 (size: 0x28)
    class UAnimSequence* CurrentDroidSynchronizedAnimation;                           // 0x01B8 (size: 0x8)
    class UBP_Object_Animation_Synchronized_C* SynchronizedObjectAnimation;           // 0x01C0 (size: 0x8)
    int32 CurrentDroidAnimationIndex;                                                 // 0x01C8 (size: 0x4)
    class UAnimSequence* CurrentSynchronizedDroidAnim;                                // 0x01D0 (size: 0x8)
    bool ShouldLoop;                                                                  // 0x01D8 (size: 0x1)

    void ReceiveExecute(class AActor* OwnerActor);
    void ReceiveAbort(class AActor* OwnerActor);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void CustomEvent_0();
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void OnLocomotionBehaviorChangedEvent(EDroidLocomotionBehavior newLocomotionBehavior);
    void ExecuteUbergraph_BTT_DroidActionPlayAnimation(int32 EntryPoint);
}; // Size: 0x1D9

#endif
