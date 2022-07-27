#ifndef UE4SS_SDK_SEQ_ClementineAskToOpenDoor_HPP
#define UE4SS_SDK_SEQ_ClementineAskToOpenDoor_HPP

class ASEQ_ClementineAskToOpenDoor_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class ABP_Droid_C* Clementine;                                                    // 0x0278 (size: 0x8)
    bool Activate;                                                                    // 0x0280 (size: 0x1)
    float TimeToSpeak;                                                                // 0x0284 (size: 0x4)
    float DelayBeetweenPhrase;                                                        // 0x0288 (size: 0x4)
    class ABP_Dialog_Zone_C* B12_DialogZone;                                          // 0x0290 (size: 0x8)

    void OnStartSequence();
    void LogicTrigger();
    void BndEvt__SEQ_ClementineAskToOpenDoor_m_saveComponent_K2Node_ComponentBoundEvent_1_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_SEQ_ClementineAskToOpenDoor(int32 EntryPoint);
}; // Size: 0x298

#endif
