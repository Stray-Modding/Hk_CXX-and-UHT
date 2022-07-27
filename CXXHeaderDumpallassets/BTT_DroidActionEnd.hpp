#ifndef UE4SS_SDK_BTT_DroidActionEnd_HPP
#define UE4SS_SDK_BTT_DroidActionEnd_HPP

class UBTT_DroidActionEnd_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    bool Success;                                                                     // 0x00C8 (size: 0x1)

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_BTT_DroidActionEnd(int32 EntryPoint);
}; // Size: 0xC9

#endif
