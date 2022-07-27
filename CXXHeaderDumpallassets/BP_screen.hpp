#ifndef UE4SS_SDK_BP_screen_HPP
#define UE4SS_SDK_BP_screen_HPP

class ABP_screen_C : public AActor
{
    class UStaticMeshComponent* StaticMeshComponent0;                                 // 0x0228 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0230 (size: 0x8)
    bool Seed;                                                                        // 0x0238 (size: 0x1)
    FRandomStream RandomStream;                                                       // 0x023C (size: 0x8)
    class UMaterialInstance* ScreenMatInst_on;                                        // 0x0248 (size: 0x8)
    class UMaterialInstance* ScreenMatInst_off;                                       // 0x0250 (size: 0x8)
    bool On/Off;                                                                      // 0x0258 (size: 0x1)
    FLinearColor Color1;                                                              // 0x025C (size: 0x10)
    FLinearColor Color2;                                                              // 0x026C (size: 0x10)
    bool Color_Rand ?;                                                                // 0x027C (size: 0x1)
    FLinearColor Color;                                                               // 0x0280 (size: 0x10)
    float Intensity;                                                                  // 0x0290 (size: 0x4)
    float rand_Intensity;                                                             // 0x0294 (size: 0x4)
    float Pixel_intensity;                                                            // 0x0298 (size: 0x4)
    class UObject* Cat_manager;                                                       // 0x02A0 (size: 0x8)
    TArray<class USoundCue*> collision cues;                                          // 0x02A8 (size: 0x10)
    bool Override Screen Border Material;                                             // 0x02B8 (size: 0x1)
    class UMaterialInterface* Screen Border Material;                                 // 0x02C0 (size: 0x8)

    void InitScreen();
    void UserConstructionScript();
}; // Size: 0x2C8

#endif
