#ifndef UE4SS_SDK_TriggerAdventureState_HPP
#define UE4SS_SDK_TriggerAdventureState_HPP

class ATriggerAdventureState_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class AACH_006_BeginSentinelPatern_C* ACH_006;                                    // 0x0278 (size: 0x8)

    void LogicTrigger();
    void BndEvt__TriggerAdventureState_m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_TriggerAdventureState(int32 EntryPoint);
}; // Size: 0x280

#endif
