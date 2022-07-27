#ifndef UE4SS_SDK_BP_Parabol_03_HPP
#define UE4SS_SDK_BP_Parabol_03_HPP

class ABP_Parabol_03_C : public AActor
{
    class UStaticMeshComponent* Parabol_03_Stand;                                     // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Parabol_03;                                           // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    bool Seed;                                                                        // 0x0240 (size: 0x1)
    FRandomStream RandomStream;                                                       // 0x0244 (size: 0x8)
    float Rotation Min;                                                               // 0x024C (size: 0x4)
    float Rotation Max;                                                               // 0x0250 (size: 0x4)
    float Height Var Min;                                                             // 0x0254 (size: 0x4)
    float Height Var Max;                                                             // 0x0258 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x25C

#endif
