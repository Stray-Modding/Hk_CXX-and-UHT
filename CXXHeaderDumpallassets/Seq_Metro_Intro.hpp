#ifndef UE4SS_SDK_Seq_Metro_Intro_HPP
#define UE4SS_SDK_Seq_Metro_Intro_HPP

class ASeq_Metro_Intro_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UAudioComponent* PS5Vibration;                                              // 0x0270 (size: 0x8)
    class ABP_path_follow_C* Follow_Spline;                                           // 0x0278 (size: 0x8)
    class ABP_DoorSubwayToEnding_C* BP_DoorSubwayToEnding;                            // 0x0280 (size: 0x8)
    class ABP_Wagon_C* Wagon;                                                         // 0x0288 (size: 0x8)
    bool camshake;                                                                    // 0x0290 (size: 0x1)
    bool Activate;                                                                    // 0x0291 (size: 0x1)
    TArray<class UAudioComponent*> running sfx;                                       // 0x0298 (size: 0x10)
    TEnumAsByte<EStreamingState> NewVar_0;                                            // 0x02A8 (size: 0x1)
    bool Metro_At_Destination;                                                        // 0x02A9 (size: 0x1)
    FTransform Metro_Trans_To_Save;                                                   // 0x02B0 (size: 0x30)
    class UCurveFloat* forcefeedbackIntensity;                                        // 0x02E0 (size: 0x8)
    float Level;                                                                      // 0x02E8 (size: 0x4)
    bool CheckpointSubway;                                                            // 0x02EC (size: 0x1)
    bool IsGamePaused;                                                                // 0x02ED (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x02F0 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA885B56F3();
    void Tick_6246EF4646E19036986D72BA885B56F3(float Ratio);
    void LogicTrigger();
    void OnStartSequence();
    void Start ForceFeedback(float Intensity);
    void Stop Force Feedback();
    void Update Force Feedback(float Intensity);
    void Checkpoint();
    void Commit Ending();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Seq_Metro_Intro(int32 EntryPoint);
}; // Size: 0x2F8

#endif
