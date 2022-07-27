#ifndef UE4SS_SDK_BP_CoffreFort_digicod_HPP
#define UE4SS_SDK_BP_CoffreFort_digicod_HPP

class ABP_CoffreFort_digicod_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UPointLightComponent* Door_Light;                                           // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Door_Col;                                             // 0x0248 (size: 0x8)
    class UPointLightComponent* Inside_Light_2;                                       // 0x0250 (size: 0x8)
    class UPointLightComponent* Inside_Light_1;                                       // 0x0258 (size: 0x8)
    class USceneComponent* Door_Pivot;                                                // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Safe;                                                 // 0x0268 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Door_Mesh;                                            // 0x0278 (size: 0x8)
    class UAudioComponent* NewVar_1;                                                  // 0x0280 (size: 0x8)
    bool IsOpen;                                                                      // 0x0288 (size: 0x1)
    bool Debug_Door_visibility;                                                       // 0x0289 (size: 0x1)
    float MaxRotation;                                                                // 0x028C (size: 0x4)
    class ABP_DigicodeTrigger_C* Digicode;                                            // 0x0290 (size: 0x8)
    class ASeq_postit_clue_01_C* Seq_postit_clue_01;                                  // 0x0298 (size: 0x8)
    TArray<class ABP_BOOK_Physic_02_C*> BooksToPush;                                  // 0x02A0 (size: 0x10)

    void IsTriggered(bool& IsDestroyed);
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA904A17FC();
    void Tick_6246EF4646E19036986D72BA904A17FC(float Ratio);
    void Complete_6246EF4646E19036986D72BA05E61FD9();
    void Tick_6246EF4646E19036986D72BA05E61FD9(float Ratio);
    void LogicTrigger();
    void BndEvt__BP_CoffreFort_digicod_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_CoffreFort_digicod(int32 EntryPoint);
}; // Size: 0x2B0

#endif
