#ifndef UE4SS_SDK_BP_GroundSign01_Child_HPP
#define UE4SS_SDK_BP_GroundSign01_Child_HPP

class ABP_GroundSign01_Child_C : public ABP_Sign_Base_C
{
    class USplineRailComponent* SplineRail;                                           // 0x0290 (size: 0x8)
    bool Jumpable?;                                                                   // 0x0298 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x299

#endif
