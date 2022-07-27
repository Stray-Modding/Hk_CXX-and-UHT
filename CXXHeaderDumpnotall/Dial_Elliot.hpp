#ifndef UE4SS_SDK_Dial_Elliot_HPP
#define UE4SS_SDK_Dial_Elliot_HPP

class ADial_Elliot_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStreamingComponent* Streaming;
    class ABP_Droid_C* Elliot;
    bool Elliot_Met;
    bool Elliot_need_a_poncho;
    bool Elliot_has_the_poncho;
    bool Cold;
    class AActor* Fake_Tracker;
    class AActor* poncho;
    class ASeq_Roberto_Tracking_C* Seq_Roberto_Tracking;

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_Elliot(int32 EntryPoint);
};

#endif
