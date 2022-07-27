#ifndef UE4SS_SDK_TechRoom_Chair_Bottom_HPP
#define UE4SS_SDK_TechRoom_Chair_Bottom_HPP

class ATechRoom_Chair_Bottom_C : public AActor
{
    class USplineRailComponent* SplineRailBottom;                                     // 0x0228 (size: 0x8)
    class USplineRailComponent* SplineRailTop;                                        // 0x0230 (size: 0x8)
    class UStaticMeshComponent* TechRoom_Chair_Top;                                   // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)
    bool Random;                                                                      // 0x0248 (size: 0x1)
    bool Seed;                                                                        // 0x0249 (size: 0x1)
    FRandomStream RandomStream;                                                       // 0x024C (size: 0x8)
    FTransform ResultTransform;                                                       // 0x0260 (size: 0x30)

    void UserConstructionScript();
}; // Size: 0x290

#endif
