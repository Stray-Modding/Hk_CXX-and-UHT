#ifndef UE4SS_SDK_Seq_Slum_intro_Alarm_HPP
#define UE4SS_SDK_Seq_Slum_intro_Alarm_HPP

class ASeq_Slum_intro_Alarm_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class AActor* Pos_Sound;                                                          // 0x0270 (size: 0x8)
    class ABP_AlarmLight_C* BP_AlarmLight_1;                                          // 0x0278 (size: 0x8)
    class ABP_AlarmLight_C* BP_AlarmLight_2;                                          // 0x0280 (size: 0x8)
    class ABP_AlarmLight_C* BP_AlarmLight_3;                                          // 0x0288 (size: 0x8)
    class ABP_AlarmLight_C* BP_AlarmLight_4;                                          // 0x0290 (size: 0x8)
    class ABP_AlarmLight_C* BP_AlarmLight_5;                                          // 0x0298 (size: 0x8)
    class ABP_AlarmLight_C* BP_AlarmLight_6;                                          // 0x02A0 (size: 0x8)
    bool AlarmIsOn;                                                                   // 0x02A8 (size: 0x1)
    class UAudioComponent* lastSpawnedAlarm;                                          // 0x02B0 (size: 0x8)

    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void TurnAlarmOff();
    void Turn Alarm On();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Seq_Slum_intro_Alarm(int32 EntryPoint);
}; // Size: 0x2B8

#endif
