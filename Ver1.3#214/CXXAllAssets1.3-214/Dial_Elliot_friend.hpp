#ifndef UE4SS_SDK_Dial_Elliot_friend_HPP
#define UE4SS_SDK_Dial_Elliot_friend_HPP

class ADial_Elliot_friend_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Door_ElliotScratch_C* Door_scratch;                                     // 0x0348 (size: 0x8)
    class ADial_Elliot_C* Elliot_dial;                                                // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void DroneUseEnded_Event_0(class UDroneUsableComponent* Usable);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_Elliot_friend(int32 EntryPoint);
}; // Size: 0x358

#endif
