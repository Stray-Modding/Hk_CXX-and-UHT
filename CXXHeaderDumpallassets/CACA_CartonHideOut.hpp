#ifndef UE4SS_SDK_CACA_CartonHideOut_HPP
#define UE4SS_SDK_CACA_CartonHideOut_HPP

class ACACA_CartonHideOut_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* PS5Vibration;                                              // 0x0230 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0238 (size: 0x8)
    class USceneComponent* HideSocket;                                                // 0x0240 (size: 0x8)
    class UCOMP_CartonUsableComponent_C* CartonUsableComponent;                       // 0x0248 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0250 (size: 0x8)

    void SetExitEnabled(bool Enabled);
    void ReceiveBeginPlay();
    void BndEvt__CACA_CartonHideOut_CartonUsableComponent_K2Node_ComponentBoundEvent_0_CartonImpact_Enter__DelegateSignature();
    void BndEvt__CACA_CartonHideOut_CartonUsableComponent_K2Node_ComponentBoundEvent_1_CartonImpact_Leave__DelegateSignature();
    void ExecuteUbergraph_CACA_CartonHideOut(int32 EntryPoint);
}; // Size: 0x258

#endif
