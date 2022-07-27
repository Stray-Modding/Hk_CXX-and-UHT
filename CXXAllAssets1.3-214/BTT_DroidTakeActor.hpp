#ifndef UE4SS_SDK_BTT_DroidTakeActor_HPP
#define UE4SS_SDK_BTT_DroidTakeActor_HPP

class UBTT_DroidTakeActor_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    FBlackboardKeySelector TargetActor;                                               // 0x00C8 (size: 0x28)
    bool DoEndSuccess;                                                                // 0x00F0 (size: 0x1)

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_BTT_DroidTakeActor(int32 EntryPoint);
}; // Size: 0xF1

#endif
