#ifndef UE4SS_SDK_Dial_B12_FinalGoodbye_HPP
#define UE4SS_SDK_Dial_B12_FinalGoodbye_HPP

class ADial_B12_FinalGoodbye_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UAudioComponent* vibration;                                                 // 0x0340 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0348 (size: 0x8)
    class ACameraActor* Camera_AlarmLarge;                                            // 0x0350 (size: 0x8)
    class ACameraActor* Camera_Station_1;                                             // 0x0358 (size: 0x8)
    class ACameraActor* Camera_Station_2;                                             // 0x0360 (size: 0x8)
    class ACameraActor* Camera_B12_Close;                                             // 0x0368 (size: 0x8)
    class ACameraActor* Camera_Sentinels;                                             // 0x0370 (size: 0x8)
    class ACameraActor* Camera_Final_Align;                                           // 0x0378 (size: 0x8)
    class ABP_AlarmTrigger_C* AlarmTrigger;                                           // 0x0380 (size: 0x8)
    class ABP_Station_DoorControl_C* Door_Console;                                    // 0x0388 (size: 0x8)
    class ABP_SplineRail_C* Rail_Cine_Chair;                                          // 0x0390 (size: 0x8)
    class ALevelSequenceActor* CameraSequencerGoodByeB12;                             // 0x0398 (size: 0x8)
    class AInvisiPoint_C* CatPos_Final;                                               // 0x03A0 (size: 0x8)
    class AStaticMeshActor* DeadB12;                                                  // 0x03A8 (size: 0x8)
    class ABP_CatButton_SleepSpot_WithCamera_C* SleepSpotEnd;                         // 0x03B0 (size: 0x8)
    class ASeq_City_Door_Opening_C* SEQ_CityDoorOpening;                              // 0x03B8 (size: 0x8)
    bool CineEnd;                                                                     // 0x03C0 (size: 0x1)
    class AActor* CatPos_BeforeJump;                                                  // 0x03C8 (size: 0x8)
    class ABP_RoofVibration_C* RoofVibration;                                         // 0x03D0 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA57FE220C();
    void Tick_6246EF4646E19036986D72BA57FE220C(float Ratio);
    void OnDialogBegan();
    void Turn_OFF_Alarm_And_Talk();
    void BndEvt__Dial_B12_FinalGoodbye_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Wait sitting();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Dial_B12_FinalGoodbye(int32 EntryPoint);
}; // Size: 0x3D8

#endif
