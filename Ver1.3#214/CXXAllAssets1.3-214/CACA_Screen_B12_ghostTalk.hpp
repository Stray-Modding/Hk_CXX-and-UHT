#ifndef UE4SS_SDK_CACA_Screen_B12_ghostTalk_HPP
#define UE4SS_SDK_CACA_Screen_B12_ghostTalk_HPP

class ACACA_Screen_B12_ghostTalk_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UTextRenderComponent* Shadow;                                               // 0x0230 (size: 0x8)
    class UTextRenderComponent* Intensity;                                            // 0x0238 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0240 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0248 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper working;                            // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Screen_mesh;                                          // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    float Timeline_0_NewTrack_0_490327964CD45A1D0A6B5497260DF1B5;                     // 0x0268 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_490327964CD45A1D0A6B5497260DF1B5; // 0x026C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0270 (size: 0x8)
    bool On/Off;                                                                      // 0x0278 (size: 0x1)
    class UStaticMesh* screen mesh;                                                   // 0x0280 (size: 0x8)
    class UMaterialInstance* Screen_On;                                               // 0x0288 (size: 0x8)
    bool CastShadow;                                                                  // 0x0290 (size: 0x1)
    float Light_Intensity;                                                            // 0x0294 (size: 0x4)
    float Screen_SI;                                                                  // 0x0298 (size: 0x4)
    float Glitch speed ;                                                              // 0x029C (size: 0x4)
    class UTimelineComponent* Timeline_2;                                             // 0x02A0 (size: 0x8)
    bool flashed;                                                                     // 0x02A8 (size: 0x1)
    bool Init;                                                                        // 0x02A9 (size: 0x1)
    class UMaterialInstanceDynamic* Dynamic_Material;                                 // 0x02B0 (size: 0x8)
    float DelayBeforeTrigger;                                                         // 0x02B8 (size: 0x4)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void LogicTrigger();
    void On();
    void Off();
    void ReceiveBeginPlay();
    void Flash(float NewRate);
    void ExecuteUbergraph_CACA_Screen_B12_ghostTalk(int32 EntryPoint);
}; // Size: 0x2BC

#endif
