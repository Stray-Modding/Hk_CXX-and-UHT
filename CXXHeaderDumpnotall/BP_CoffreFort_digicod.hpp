#ifndef UE4SS_SDK_BP_CoffreFort_digicod_HPP
#define UE4SS_SDK_BP_CoffreFort_digicod_HPP

class ABP_CoffreFort_digicod_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStreamingComponent* Streaming;
    class USaveComponent* Save;
    class UPointLightComponent* Door_Light;
    class UStaticMeshComponent* Door_Col;
    class UPointLightComponent* Inside_Light_2;
    class UPointLightComponent* Inside_Light_1;
    class USceneComponent* Door_Pivot;
    class UStaticMeshComponent* Safe;
    class USceneComponent* Root;
    class UStaticMeshComponent* Door_Mesh;
    class UAudioComponent* NewVar_1;
    bool IsOpen;
    bool Debug_Door_visibility;
    float MaxRotation;
    class ABP_DigicodeTrigger_C* Digicode;
    class ASeq_postit_clue_01_C* Seq_postit_clue_01;
    TArray<class ABP_BOOK_Physic_02_C*> BooksToPush;

    void IsTriggered(bool& IsDestroyed);
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA904A17FC();
    void Tick_6246EF4646E19036986D72BA904A17FC(float Ratio);
    void Complete_6246EF4646E19036986D72BA05E61FD9();
    void Tick_6246EF4646E19036986D72BA05E61FD9(float Ratio);
    void LogicTrigger();
    void BndEvt__BP_CoffreFort_digicod_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_CoffreFort_digicod(int32 EntryPoint);
};

#endif
