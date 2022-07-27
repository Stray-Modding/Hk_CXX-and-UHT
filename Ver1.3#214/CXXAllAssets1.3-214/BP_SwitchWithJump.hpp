#ifndef UE4SS_SDK_BP_SwitchWithJump_HPP
#define UE4SS_SDK_BP_SwitchWithJump_HPP

class ABP_SwitchWithJump_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* SwitchWithJump_Slide_VIBE;                                 // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Cylinder1;                                            // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0240 (size: 0x8)
    class USceneComponent* Spline_Socket;                                             // 0x0248 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0250 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0258 (size: 0x8)
    class USphereComponent* Drop_Point;                                               // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Lever;                                                // 0x0268 (size: 0x8)
    class UStaticMeshComponent* ElectricBox;                                          // 0x0270 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0278 (size: 0x8)
    class ABP_MovingSplineRail_C* Moving_Spline;                                      // 0x0280 (size: 0x8)
    float Delay_Before_Activation;                                                    // 0x0288 (size: 0x4)
    TArray<class AActor*> Actors_To_Trigger;                                          // 0x0290 (size: 0x10)
    bool Do_Auto_Reset_?;                                                             // 0x02A0 (size: 0x1)
    float Auto_Reset_Delay;                                                           // 0x02A4 (size: 0x4)
    float Init_Lever_Rotation;                                                        // 0x02A8 (size: 0x4)
    bool Is_Activated;                                                                // 0x02AC (size: 0x1)
    class UAudioComponent* sfx slide;                                                 // 0x02B0 (size: 0x8)
    class ACatPawn* cat;                                                              // 0x02B8 (size: 0x8)

    void isCatOnRail(bool& CatOnRail);
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BACA8317A7();
    void Tick_6246EF4646E19036986D72BACA8317A7(float Ratio);
    void Complete_6246EF4646E19036986D72BA83001E8E();
    void Tick_6246EF4646E19036986D72BA83001E8E(float Ratio);
    void ReceiveBeginPlay();
    void Jump_Switch_Activate();
    void Jump_Switch_Reset();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Set_Activated_Instantly();
    void Attach_Rail();
    void TurnON Glow();
    void TurnOFF Glow();
    void Drop Cat();
    void CatIsOnRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ExecuteUbergraph_BP_SwitchWithJump(int32 EntryPoint);
}; // Size: 0x2C0

#endif
