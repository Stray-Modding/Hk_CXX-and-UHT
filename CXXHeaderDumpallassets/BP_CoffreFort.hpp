#ifndef UE4SS_SDK_BP_CoffreFort_HPP
#define UE4SS_SDK_BP_CoffreFort_HPP

class ABP_CoffreFort_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0240 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0248 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0250 (size: 0x8)
    class USceneComponent* DroneAnchor;                                               // 0x0258 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0260 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Safe;                                                 // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Safe_Lock;                                            // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Safe_Door;                                            // 0x0280 (size: 0x8)
    class UCOMP_UsableItem_C* COMP_UsableItem;                                        // 0x0288 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0290 (size: 0x8)
    class UAudioComponent* NewVar_1;                                                  // 0x0298 (size: 0x8)
    bool IsOpen;                                                                      // 0x02A0 (size: 0x1)
    bool DestroyItemAfterUse;                                                         // 0x02A1 (size: 0x1)
    FRotator initrot;                                                                 // 0x02A4 (size: 0xC)
    FName ItemId;                                                                     // 0x02B0 (size: 0x8)
    bool Door_visibility;                                                             // 0x02B8 (size: 0x1)
    class AActor* notebook;                                                           // 0x02C0 (size: 0x8)
    TArray<class ABP_BOOK_Physic_01_v2_C*> BooksToPush;                               // 0x02C8 (size: 0x10)

    void IsTriggered(bool& IsDestroyed);
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA161A0AB4();
    void Tick_6246EF4646E19036986D72BA161A0AB4(float Ratio);
    void Complete_6246EF4646E19036986D72BA91CF6A5F();
    void Tick_6246EF4646E19036986D72BA91CF6A5F(float Ratio);
    void BndEvt__COMP_UsableItem_K2Node_ComponentBoundEvent_1_ItemUsed__DelegateSignature(class ULootableComponent* Item);
    void BndEvt__BP_CoffreFort_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_CoffreFort(int32 EntryPoint);
}; // Size: 0x2D8

#endif
