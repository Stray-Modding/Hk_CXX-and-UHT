#ifndef UE4SS_SDK_BP_TiltingClubLamp_HPP
#define UE4SS_SDK_BP_TiltingClubLamp_HPP

class ABP_TiltingClubLamp_C : public ABP_TiltingBeam_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UAudioComponent* roof_decorations_move_loop_01;                             // 0x0298 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Chain_lowpoly1;                                       // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Chain_lowpoly;                                        // 0x02B8 (size: 0x8)
    float Lerp;                                                                       // 0x02C0 (size: 0x4)
    float StartZ;                                                                     // 0x02C4 (size: 0x4)
    float EndZ;                                                                       // 0x02C8 (size: 0x4)
    float Mvt_Duration;                                                               // 0x02CC (size: 0x4)
    bool AlwaysON;                                                                    // 0x02D0 (size: 0x1)
    bool isUp;                                                                        // 0x02D1 (size: 0x1)
    bool IsMoving;                                                                    // 0x02D2 (size: 0x1)
    float Pitch;                                                                      // 0x02D4 (size: 0x4)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BAD4770CC8();
    void Tick_6246EF4646E19036986D72BAD4770CC8(float Ratio);
    void Move(bool isUp);
    void Update Vertical Mvt(float Alpha);
    void LogicTrigger();
    void Instant_Move(bool move up);
    void BndEvt__BP_TiltingClubLamp_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_TiltingClubLamp(int32 EntryPoint);
}; // Size: 0x2D8

#endif
