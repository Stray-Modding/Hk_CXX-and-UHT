#ifndef UE4SS_SDK_BP_InteractionFeedback_HPP
#define UE4SS_SDK_BP_InteractionFeedback_HPP

class ABP_InteractionFeedback_C : public AInteractionFeedback
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    class UUMG_InteractionFeedback_C* InteractionFeedbackWidget;                      // 0x0250 (size: 0x8)

    void ReceiveBeginPlay();
    void OnUsableChanged(class UCatUsableComponentBase* _previousUsable, class UCatUsableComponentBase* _currentUsable);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_InteractionFeedback(int32 EntryPoint);
}; // Size: 0x258

#endif
