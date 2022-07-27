#ifndef UE4SS_SDK_BTT_DroidUseActor_HPP
#define UE4SS_SDK_BTT_DroidUseActor_HPP

class UBTT_DroidUseActor_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetActorKeySelector;
    bool DoEndSuccess;
    class UDroidUsableComponent* DroidUsableComponent;

    void ReceiveExecute(class AActor* OwnerActor);
    void OnUsingEndedEvent(class UDroidUsableComponent* DroidUsableComponent, class ACharacterDroid* Droid);
    void ExecuteUbergraph_BTT_DroidUseActor(int32 EntryPoint);
};

#endif
