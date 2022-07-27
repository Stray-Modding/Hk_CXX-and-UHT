#ifndef UE4SS_SDK_CACA_Electric_Rail_HPP
#define UE4SS_SDK_CACA_Electric_Rail_HPP

class ACACA_Electric_Rail_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Chariot_roue_3;                                       // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Chariot_roue_4;                                       // 0x0238 (size: 0x8)
    class USceneComponent* Pivot_Wheel_2;                                             // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Chariot_roue_1;                                       // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Chariot_roue_2;                                       // 0x0250 (size: 0x8)
    class USceneComponent* Pivot_Wheel_1;                                             // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Chariot1;                                             // 0x0260 (size: 0x8)
    class UArrowComponent* CatMoveTo;                                                 // 0x0268 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0270 (size: 0x8)
    class UArrowComponent* DropPlug;                                                  // 0x0278 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0280 (size: 0x8)
    class UBoxComponent* repelZone;                                                   // 0x0288 (size: 0x8)
    class USceneComponent* ActorSnapPoint;                                            // 0x0290 (size: 0x8)
    class USceneComponent* MovePivot;                                                 // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    TEnumAsByte<E_ElectricRailState> State;                                           // 0x02A8 (size: 0x1)
    float [Debug] Chariot Pos;                                                        // 0x02AC (size: 0x4)
    float Rail_Length;                                                                // 0x02B0 (size: 0x4)
    float Duration;                                                                   // 0x02B4 (size: 0x4)
    class ACACA_DataServer_B12_C* ServerToAttach;                                     // 0x02B8 (size: 0x8)
    class ABP_SwitchWithJump_C* SwitchWithJump;                                       // 0x02C0 (size: 0x8)
    float Chariot_Offset;                                                             // 0x02C8 (size: 0x4)
    FTransform Trans_Repel_Temp;                                                      // 0x02D0 (size: 0x30)
    class ABP_Catbutton_Grabbable_EnergyPlug_C* PlugLerp_Temp;                        // 0x0300 (size: 0x8)
    class AActor* SafeCol_ToSwitch;                                                   // 0x0308 (size: 0x8)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA117AF1E0();
    void Tick_6246EF4646E19036986D72BA117AF1E0(float Ratio);
    void Complete_6246EF4646E19036986D72BA199CF78A();
    void Tick_6246EF4646E19036986D72BA199CF78A(float Ratio);
    void MVT_Forward();
    void MVT_Backward();
    void LogicTrigger();
    void SetActorAttached isMoving(bool IsMoving);
    void StartMoving();
    void StopMoving();
    void BndEvt__RepelZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CACA_Electric_Rail_Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Update_Chariot_Pos(float Alpha);
    void Enable/Disable Plug in server(bool _value);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_CACA_Electric_Rail(int32 EntryPoint);
}; // Size: 0x310

#endif
