#ifndef UE4SS_SDK_BP_path_follow_HPP
#define UE4SS_SDK_BP_path_follow_HPP

class ABP_path_follow_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class AActor* Actor_to_Move;                                                      // 0x0248 (size: 0x8)
    float Time;                                                                       // 0x0250 (size: 0x4)
    float Speed;                                                                      // 0x0254 (size: 0x4)
    bool constantSpeed_?;                                                             // 0x0258 (size: 0x1)
    float TimeStartChangeSpeed;                                                       // 0x025C (size: 0x4)
    float Speed_End;                                                                  // 0x0260 (size: 0x4)
    bool On/Off;                                                                      // 0x0264 (size: 0x1)
    bool Close_Spline_?;                                                              // 0x0265 (size: 0x1)
    bool Random_Start_?;                                                              // 0x0266 (size: 0x1)
    bool Rotation_?;                                                                  // 0x0267 (size: 0x1)
    float Base_Yaw;                                                                   // 0x0268 (size: 0x4)
    float Smooth Rotation ;                                                           // 0x026C (size: 0x4)
    float Smooth Location;                                                            // 0x0270 (size: 0x4)
    bool Loop?;                                                                       // 0x0274 (size: 0x1)
    bool EndReached;                                                                  // 0x0275 (size: 0x1)
    bool SetManualStart;                                                              // 0x0276 (size: 0x1)
    float ManualStartTime;                                                            // 0x0278 (size: 0x4)
    float currentSpeed;                                                               // 0x027C (size: 0x4)

    void UserConstructionScript();
    void LogicTrigger();
    void BndEvt__BP_path_follow_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_path_follow(int32 EntryPoint);
}; // Size: 0x280

#endif
