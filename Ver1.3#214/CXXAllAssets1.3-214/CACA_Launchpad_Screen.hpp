#ifndef UE4SS_SDK_CACA_Launchpad_Screen_HPP
#define UE4SS_SDK_CACA_Launchpad_Screen_HPP

class ACACA_Launchpad_Screen_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper working;                            // 0x0238 (size: 0x8)
    class UTextRenderComponent* Glitch_01011;                                         // 0x0240 (size: 0x8)
    class USceneComponent* Scene_Widget_Txt;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Screen_mesh;                                          // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    TEnumAsByte<E_Launchpad_Screen_mode> ScreenMode;                                  // 0x0260 (size: 0x1)
    class UMaterialInterface* RenderTargetMaterial;                                   // 0x0268 (size: 0x8)
    int32 Screen_Material_Element;                                                    // 0x0270 (size: 0x4)
    float TimerText;                                                                  // 0x0274 (size: 0x4)
    bool BoolGlitchActive;                                                            // 0x0278 (size: 0x1)
    int32 sfx_type;                                                                   // 0x027C (size: 0x4)
    float sfx_pitch;                                                                  // 0x0280 (size: 0x4)
    bool sfx_turned_on;                                                               // 0x0284 (size: 0x1)

    void UserConstructionScript();
    void Update_Screen_Mode(TEnumAsByte<E_Launchpad_Screen_mode> Mode);
    void ReceiveTick(float DeltaSeconds);
    void UpdateBoolGlitch();
    void ReceiveBeginPlay();
    void sfx_turn_on();
    void sfx_turn_off();
    void sfx_thinks();
    void init looper();
    void ExecuteUbergraph_CACA_Launchpad_Screen(int32 EntryPoint);
}; // Size: 0x285

#endif
