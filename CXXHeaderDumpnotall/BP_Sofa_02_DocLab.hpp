#ifndef UE4SS_SDK_BP_Sofa_02_DocLab_HPP
#define UE4SS_SDK_BP_Sofa_02_DocLab_HPP

class ABP_Sofa_02_DocLab_C : public ABP_Sofa_02_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USplineRailComponent* SplineBanketSeamusInCenter2;
    class USplineRailComponent* SplineBanketSeamusInCenter1;
    class UBoxComponent* SeamusCollisonInCenter;
    class UBoxComponent* SeamusCollisonOnSide;
    class USplineRailComponent* SplineBanketSeamusOnSide;
    bool SplineForSeamusOnSide;
    bool BanketDisable;
    bool SeamusOnSideCollision;
    bool SeamusInCenterCollision;
    bool SplineForSeamusInCenter;

    void ActivateBanketSpline(bool _enabled);
    void BndEvt__BP_Sofa_02_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ActivateSeamusSplineOnSide(bool SplineForSeamus);
    void ActivateSeamusCollisionInCenter(bool bNewActorEnableCollision);
    void ActivateSeamusCollisionOnSide(bool bNewActorEnableCollision);
    void ActivateSemusSplineInCenter(bool SplineForSeamusInCenter);
    void ExecuteUbergraph_BP_Sofa_02_DocLab(int32 EntryPoint);
};

#endif
