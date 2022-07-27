#ifndef UE4SS_SDK_BTT_DroidDropActor_HPP
#define UE4SS_SDK_BTT_DroidDropActor_HPP

class UBTT_DroidDropActor_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    bool DoEndSuccess;                                                                // 0x00C8 (size: 0x1)

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_BTT_DroidDropActor(int32 EntryPoint);
}; // Size: 0xC9

#endif
