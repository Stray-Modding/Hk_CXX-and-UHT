#ifndef UE4SS_SDK_BP_InteractionFeedback_HPP
#define UE4SS_SDK_BP_InteractionFeedback_HPP

class ABP_InteractionFeedback_C : public AInteractionFeedback
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;
    class UUMG_InteractionFeedback_C* InteractionFeedbackWidget;

    void ReceiveBeginPlay();
    void OnUsableChanged(class UCatUsableComponentBase* _previousUsable, class UCatUsableComponentBase* _currentUsable);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_InteractionFeedback(int32 EntryPoint);
};

#endif
