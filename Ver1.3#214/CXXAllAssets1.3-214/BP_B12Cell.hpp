#ifndef UE4SS_SDK_BP_B12Cell_HPP
#define UE4SS_SDK_BP_B12Cell_HPP

class ABP_B12Cell_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Jail_B12_Cage_Lights;                                 // 0x0238 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0240 (size: 0x8)
    class UBoxComponent* Collision;                                                   // 0x0248 (size: 0x8)
    class UStaticMeshComponent* TechRoom_Box_E;                                       // 0x0250 (size: 0x8)
    class UStaticMeshComponent* TechRoom_TV_Small;                                    // 0x0258 (size: 0x8)
    class UStaticMeshComponent* TechRoom_TV_Small1;                                   // 0x0260 (size: 0x8)
    class UStaticMeshComponent* TechRoom_Box_A;                                       // 0x0268 (size: 0x8)
    class USceneComponent* TV;                                                        // 0x0270 (size: 0x8)
    class UStaticMeshComponent* B12_glitch;                                           // 0x0278 (size: 0x8)
    class UStaticMeshComponent* B12_Hologram;                                         // 0x0280 (size: 0x8)
    class USceneComponent* B12;                                                       // 0x0288 (size: 0x8)
    class UStaticMeshComponent* hologram_proj;                                        // 0x0290 (size: 0x8)
    class UStaticMeshComponent* hologram_proj1;                                       // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Jail_B12_cage_ext;                                    // 0x02A0 (size: 0x8)
    class USceneComponent* Neons;                                                     // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Cage;                                                 // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    class ABP_SplineRail_C* spline rail;                                              // 0x02C0 (size: 0x8)
    class ARectLight* Light;                                                          // 0x02C8 (size: 0x8)
    class UMaterialInstanceDynamic* NeonMaterial;                                     // 0x02D0 (size: 0x8)
    class UMaterialInstanceDynamic* TVMaterial;                                       // 0x02D8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void Deactivate Cage();
    void Deactivate TV();
    void ExecuteUbergraph_BP_B12Cell(int32 EntryPoint);
}; // Size: 0x2E0

#endif
