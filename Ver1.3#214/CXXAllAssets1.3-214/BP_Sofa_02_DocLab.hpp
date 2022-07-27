#ifndef UE4SS_SDK_BP_Sofa_02_DocLab_HPP
#define UE4SS_SDK_BP_Sofa_02_DocLab_HPP

class ABP_Sofa_02_DocLab_C : public ABP_Sofa_02_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USplineRailComponent* SplineBanketSeamusInCenter2;                          // 0x02B0 (size: 0x8)
    class USplineRailComponent* SplineBanketSeamusInCenter1;                          // 0x02B8 (size: 0x8)
    class UBoxComponent* SeamusCollisonInCenter;                                      // 0x02C0 (size: 0x8)
    class UBoxComponent* SeamusCollisonOnSide;                                        // 0x02C8 (size: 0x8)
    class USplineRailComponent* SplineBanketSeamusOnSide;                             // 0x02D0 (size: 0x8)
    bool SplineForSeamusOnSide;                                                       // 0x02D8 (size: 0x1)
    bool BanketDisable;                                                               // 0x02D9 (size: 0x1)
    bool SeamusOnSideCollision;                                                       // 0x02DA (size: 0x1)
    bool SeamusInCenterCollision;                                                     // 0x02DB (size: 0x1)
    bool SplineForSeamusInCenter;                                                     // 0x02DC (size: 0x1)

    void ActivateBanketSpline(bool _enabled);
    void BndEvt__BP_Sofa_02_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ActivateSeamusSplineOnSide(bool SplineForSeamus);
    void ActivateSeamusCollisionInCenter(bool bNewActorEnableCollision);
    void ActivateSeamusCollisionOnSide(bool bNewActorEnableCollision);
    void ActivateSemusSplineInCenter(bool SplineForSeamusInCenter);
    void ExecuteUbergraph_BP_Sofa_02_DocLab(int32 EntryPoint);
}; // Size: 0x2DD

#endif
