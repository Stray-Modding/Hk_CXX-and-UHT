#ifndef UE4SS_SDK_BTT_DroidTakeActor_HPP
#define UE4SS_SDK_BTT_DroidTakeActor_HPP

class UBTT_DroidTakeActor_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetActor;
    bool DoEndSuccess;

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_BTT_DroidTakeActor(int32 EntryPoint);
};

#endif
