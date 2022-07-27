#ifndef UE4SS_SDK_BTT_DroidDropActor_HPP
#define UE4SS_SDK_BTT_DroidDropActor_HPP

class UBTT_DroidDropActor_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool DoEndSuccess;

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_BTT_DroidDropActor(int32 EntryPoint);
};

#endif
