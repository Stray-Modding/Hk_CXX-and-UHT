#ifndef UE4SS_SDK_BP_Sewer_1x2_Railing_HPP
#define UE4SS_SDK_BP_Sewer_1x2_Railing_HPP

class ABP_Sewer_1x2_Railing_C : public AActor
{
    class UStaticMeshComponent* Sewer_2x4_Railing_R1;                                 // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Sewer_2x4_Railing1;                                   // 0x0230 (size: 0x8)
    class USplineRailComponent* SplineRail1;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Sewer_2x4_Railing_R;                                  // 0x0240 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Sewer_2x4_Railing;                                    // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Sewer_Walkway_2x4;                                    // 0x0258 (size: 0x8)
    bool Railing_Left;                                                                // 0x0260 (size: 0x1)
    bool Railing_Right;                                                               // 0x0261 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x262

#endif
