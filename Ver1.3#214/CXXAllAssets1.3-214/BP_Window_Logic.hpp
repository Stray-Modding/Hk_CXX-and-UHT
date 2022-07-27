#ifndef UE4SS_SDK_BP_Window_Logic_HPP
#define UE4SS_SDK_BP_Window_Logic_HPP

class ABP_Window_Logic_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Windows_100x80_cadre;                                 // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Door04_rotate_Door04_rotate;                          // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    float Timeline_0_NewTrack_0_838484714D130C394C3A8394F0443889;                     // 0x0258 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_838484714D130C394C3A8394F0443889; // 0x025C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0260 (size: 0x8)
    FRotator Rotation;                                                                // 0x0268 (size: 0xC)
    FRotator Base_Rotation;                                                           // 0x0274 (size: 0xC)
    FRotator Rotation_Current;                                                        // 0x0280 (size: 0xC)
    bool Open;                                                                        // 0x028C (size: 0x1)
    class ABP_SplineRail_C* Rail;                                                     // 0x0290 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void LogicTrigger();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OpenWindow();
    void CloseWindow();
    void InstantCloseWindow();
    void InstantOpenWindow();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Window_Logic(int32 EntryPoint);
}; // Size: 0x298

#endif
