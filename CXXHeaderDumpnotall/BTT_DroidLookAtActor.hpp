#ifndef UE4SS_SDK_BTT_DroidLookAtActor_HPP
#define UE4SS_SDK_BTT_DroidLookAtActor_HPP

class UBTT_DroidLookAtActor_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LookAtActorKeySelector;

    void ReceiveExecute(class AActor* OwnerActor);
    void ReceiveAbort(class AActor* OwnerActor);
    void ExecuteUbergraph_BTT_DroidLookAtActor(int32 EntryPoint);
};

#endif
