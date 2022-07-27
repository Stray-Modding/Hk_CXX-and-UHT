#ifndef UE4SS_SDK_BP_DigicodeTrigger_HPP
#define UE4SS_SDK_BP_DigicodeTrigger_HPP

class ABP_DigicodeTrigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArrowComponent* Arrow;
    class UArrowComponent* DroneAnchor;
    class UCOMP_UsableDigicode_C* UsableDigicodeComponent;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* ElectricBox00;
    class UMaterialBillboardComponent* MaterialBillboard;
    TArray<class AActor*> ActorsToTrigger;
    class UMaterialInstanceDynamic* Dynamat_on_off;
    class UAudioComponent* NewVar_1;
    bool code_Valid;
    class USceneComponent* NewVar_0;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__UsableDigicodeComponent_K2Node_ComponentBoundEvent_1_DigicodeValid__DelegateSignature();
    void ExecuteUbergraph_BP_DigicodeTrigger(int32 EntryPoint);
};

#endif
