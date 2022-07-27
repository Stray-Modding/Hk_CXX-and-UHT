#ifndef UE4SS_SDK_BTT_DroidUseActor_HPP
#define UE4SS_SDK_BTT_DroidUseActor_HPP

class UBTT_DroidUseActor_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    FBlackboardKeySelector TargetActorKeySelector;                                    // 0x00C8 (size: 0x28)
    bool DoEndSuccess;                                                                // 0x00F0 (size: 0x1)
    class UDroidUsableComponent* DroidUsableComponent;                                // 0x00F8 (size: 0x8)

    void ReceiveExecute(class AActor* OwnerActor);
    void OnUsingEndedEvent(class UDroidUsableComponent* DroidUsableComponent, class ACharacterDroid* Droid);
    void ExecuteUbergraph_BTT_DroidUseActor(int32 EntryPoint);
}; // Size: 0x100

#endif
