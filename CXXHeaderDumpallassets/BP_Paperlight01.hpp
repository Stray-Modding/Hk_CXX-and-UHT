#ifndef UE4SS_SDK_BP_Paperlight01_HPP
#define UE4SS_SDK_BP_Paperlight01_HPP

class ABP_Paperlight01_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0230 (size: 0x8)
    float Force_Multiplier;                                                           // 0x0238 (size: 0x4)
    FLinearColor Material Color;                                                      // 0x023C (size: 0x10)
    FLinearColor Material SI Color;                                                   // 0x024C (size: 0x10)
    float Random impulse X;                                                           // 0x025C (size: 0x4)
    float Random Time;                                                                // 0x0260 (size: 0x4)
    float Random impulse Y;                                                           // 0x0264 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x268

#endif
