#ifndef UE4SS_SDK_BTT_DroidLookAtActor_HPP
#define UE4SS_SDK_BTT_DroidLookAtActor_HPP

class UBTT_DroidLookAtActor_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    FBlackboardKeySelector LookAtActorKeySelector;                                    // 0x00C8 (size: 0x28)

    void ReceiveExecute(class AActor* OwnerActor);
    void ReceiveAbort(class AActor* OwnerActor);
    void ExecuteUbergraph_BTT_DroidLookAtActor(int32 EntryPoint);
}; // Size: 0xF0

#endif
