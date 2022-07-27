#ifndef UE4SS_SDK_BTT_DroidActionEnd_HPP
#define UE4SS_SDK_BTT_DroidActionEnd_HPP

class UBTT_DroidActionEnd_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Success;

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_BTT_DroidActionEnd(int32 EntryPoint);
};

#endif
