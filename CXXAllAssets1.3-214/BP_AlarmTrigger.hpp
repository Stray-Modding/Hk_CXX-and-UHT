#ifndef UE4SS_SDK_BP_AlarmTrigger_HPP
#define UE4SS_SDK_BP_AlarmTrigger_HPP

class ABP_AlarmTrigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    TArray<class AStaticMeshActor*> ScreensToTurnRed;                                 // 0x0240 (size: 0x10)
    TArray<class ABP_AlarmLight_C*> Alarm_Lights;                                     // 0x0250 (size: 0x10)
    TArray<class ABP_FollowingCamera_C*> SecurityCameras;                             // 0x0260 (size: 0x10)
    TArray<class ABP_Counter_C*> AlertScreens;                                        // 0x0270 (size: 0x10)
    TArray<class ABP_Ending_SasDoor_C*> SasDoors;                                     // 0x0280 (size: 0x10)

    void Start Alarm();
    void TurnScreensRed();
    void ShutDownScreens();
    void Stop Alarm();
    void BndEvt__BP_AlarmTrigger_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_AlarmTrigger(int32 EntryPoint);
}; // Size: 0x290

#endif
