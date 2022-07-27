#ifndef UE4SS_SDK_BP_DigicodeTrigger_HPP
#define UE4SS_SDK_BP_DigicodeTrigger_HPP

class ABP_DigicodeTrigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0230 (size: 0x8)
    class UArrowComponent* DroneAnchor;                                               // 0x0238 (size: 0x8)
    class UCOMP_UsableDigicode_C* UsableDigicodeComponent;                            // 0x0240 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0248 (size: 0x8)
    class UStaticMeshComponent* ElectricBox00;                                        // 0x0250 (size: 0x8)
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x0258 (size: 0x8)
    TArray<class AActor*> ActorsToTrigger;                                            // 0x0260 (size: 0x10)
    class UMaterialInstanceDynamic* Dynamat_on_off;                                   // 0x0270 (size: 0x8)
    class UAudioComponent* NewVar_1;                                                  // 0x0278 (size: 0x8)
    bool code_Valid;                                                                  // 0x0280 (size: 0x1)
    class USceneComponent* NewVar_0;                                                  // 0x0288 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__UsableDigicodeComponent_K2Node_ComponentBoundEvent_1_DigicodeValid__DelegateSignature();
    void ExecuteUbergraph_BP_DigicodeTrigger(int32 EntryPoint);
}; // Size: 0x290

#endif
