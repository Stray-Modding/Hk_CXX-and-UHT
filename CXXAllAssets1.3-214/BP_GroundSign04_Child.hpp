#ifndef UE4SS_SDK_BP_GroundSign04_Child_HPP
#define UE4SS_SDK_BP_GroundSign04_Child_HPP

class ABP_GroundSign04_Child_C : public ABP_Sign_Base_C
{
    class USplineRailComponent* SplineRail;                                           // 0x0290 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x02A0 (size: 0x8)
    bool Jumpable?;                                                                   // 0x02A8 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x2A9

#endif
