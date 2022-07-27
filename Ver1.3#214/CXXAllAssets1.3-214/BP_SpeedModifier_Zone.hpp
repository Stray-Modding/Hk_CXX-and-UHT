#ifndef UE4SS_SDK_BP_SpeedModifier_Zone_HPP
#define UE4SS_SDK_BP_SpeedModifier_Zone_HPP

class ABP_SpeedModifier_Zone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    bool Activate;                                                                    // 0x0250 (size: 0x1)
    float Custom Slow Ratio;                                                          // 0x0254 (size: 0x4)
    TEnumAsByte<Enum_CatSpeed_Preset> Presets Slow Ratio;                             // 0x0258 (size: 0x1)
    bool OnlyOnce;                                                                    // 0x0259 (size: 0x1)
    bool Smooth;                                                                      // 0x025A (size: 0x1)
    float SmoothTime;                                                                 // 0x025C (size: 0x4)
    bool Main;                                                                        // 0x0260 (size: 0x1)
    bool Last;                                                                        // 0x0261 (size: 0x1)
    bool push;                                                                        // 0x0262 (size: 0x1)
    bool Triggered;                                                                   // 0x0263 (size: 0x1)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void LogicTrigger();
    void Activate_SpeedModifier();
    void Deactivate_SpeedModifier();
    void ExecuteUbergraph_BP_SpeedModifier_Zone(int32 EntryPoint);
}; // Size: 0x264

#endif
