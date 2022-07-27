#ifndef UE4SS_SDK_BP_Sign_Base_HPP
#define UE4SS_SDK_BP_Sign_Base_HPP

class ABP_Sign_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    bool Light on/off;                                                                // 0x0240 (size: 0x1)
    TEnumAsByte<ENUM_LightsIntensity> Intensity;                                      // 0x0241 (size: 0x1)
    FLinearColor SI_color;                                                            // 0x0244 (size: 0x10)
    int32 Nmb_Vertical;                                                               // 0x0254 (size: 0x4)
    int32 Nmb_Horizontal;                                                             // 0x0258 (size: 0x4)
    bool Seed;                                                                        // 0x025C (size: 0x1)
    FRandomStream Random_Stream;                                                      // 0x0260 (size: 0x8)
    float Random_0_1;                                                                 // 0x0268 (size: 0x4)
    bool Override_Texture;                                                            // 0x026C (size: 0x1)
    class UTexture* Texture;                                                          // 0x0270 (size: 0x8)
    float Flicker Speed;                                                              // 0x0278 (size: 0x4)
    float Flicker intensity;                                                          // 0x027C (size: 0x4)
    float Flicker add;                                                                // 0x0280 (size: 0x4)
    class UMaterialInstanceDynamic* MatInstance;                                      // 0x0288 (size: 0x8)

    void Init();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void LightOff();
    void ExecuteUbergraph_BP_Sign_Base(int32 EntryPoint);
}; // Size: 0x290

#endif
