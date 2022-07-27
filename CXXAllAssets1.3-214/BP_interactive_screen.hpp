#ifndef UE4SS_SDK_BP_interactive_screen_HPP
#define UE4SS_SDK_BP_interactive_screen_HPP

class ABP_interactive_screen_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper cannon;                             // 0x0240 (size: 0x8)
    class UCOMP_ingame_player_C* COMP_ingame_player;                                  // 0x0248 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0250 (size: 0x8)
    class UIEMableComponent* IEMable;                                                 // 0x0258 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent0;                                 // 0x0260 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0268 (size: 0x8)
    bool Seed;                                                                        // 0x0270 (size: 0x1)
    FRandomStream RandomStream;                                                       // 0x0274 (size: 0x8)
    class UMaterialInstance* ScreenMatInst_on;                                        // 0x0280 (size: 0x8)
    class UMaterialInstance* ScreenMatInst_off;                                       // 0x0288 (size: 0x8)
    bool On/Off on start;                                                             // 0x0290 (size: 0x1)
    FLinearColor Color1;                                                              // 0x0294 (size: 0x10)
    FLinearColor Color2;                                                              // 0x02A4 (size: 0x10)
    bool Color_Rand ?;                                                                // 0x02B4 (size: 0x1)
    FLinearColor Color;                                                               // 0x02B8 (size: 0x10)
    float Intensity;                                                                  // 0x02C8 (size: 0x4)
    float rand_Intensity;                                                             // 0x02CC (size: 0x4)
    float Pixel_intensity;                                                            // 0x02D0 (size: 0x4)
    class UObject* Cat_manager;                                                       // 0x02D8 (size: 0x8)
    TArray<class USoundCue*> collision cues;                                          // 0x02E0 (size: 0x10)
    int32 current channel;                                                            // 0x02F0 (size: 0x4)
    bool is on;                                                                       // 0x02F4 (size: 0x1)
    class UMaterialInstance* Option 0;                                                // 0x02F8 (size: 0x8)
    class UMaterialInstance* Option 1;                                                // 0x0300 (size: 0x8)
    class UMaterialInstance* Option 2;                                                // 0x0308 (size: 0x8)
    class UMaterialInstance* Option 3;                                                // 0x0310 (size: 0x8)
    class UMaterialInstance* Option 4;                                                // 0x0318 (size: 0x8)
    class UMaterialInstance* Option 5;                                                // 0x0320 (size: 0x8)
    class UMaterialInstance* Option 6;                                                // 0x0328 (size: 0x8)
    class UMaterialInstance* Option 7;                                                // 0x0330 (size: 0x8)
    bool AllChannelsSeen;                                                             // 0x0338 (size: 0x1)

    void InitScreen();
    void UserConstructionScript();
    void Trigger();
    void BndEvt__Save_K2Node_ComponentBoundEvent_2_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void set the right channel();
    void ExecuteUbergraph_BP_interactive_screen(int32 EntryPoint);
}; // Size: 0x339

#endif
