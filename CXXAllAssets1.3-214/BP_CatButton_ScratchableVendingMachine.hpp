#ifndef UE4SS_SDK_BP_CatButton_ScratchableVendingMachine_HPP
#define UE4SS_SDK_BP_CatButton_ScratchableVendingMachine_HPP

class ABP_CatButton_ScratchableVendingMachine_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UChildActorComponent* BP_SpeedModifier_Zone;                                // 0x0230 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0238 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0240 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatButtonMoveToAnim;                            // 0x0248 (size: 0x8)
    class UArrowComponent* Cat_point;                                                 // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Digicode;                                             // 0x0258 (size: 0x8)
    class UStaticMeshComponent* LightBlocker_2;                                       // 0x0260 (size: 0x8)
    class UStaticMeshComponent* LightBlocker_1;                                       // 0x0268 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0270 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0278 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Stickers;                                             // 0x0288 (size: 0x8)
    class UStaticMeshComponent* props;                                                // 0x0290 (size: 0x8)
    class UArrowComponent* SpawnPosition;                                             // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Machine;                                              // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x02A8 (size: 0x8)
    bool Interaction enabled;                                                         // 0x02B0 (size: 0x1)
    TSubclassOf<class AActor> CLASS_Item_To_Spawn;                                    // 0x02B8 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x02C0 (size: 0x8)
    bool ShowProps;                                                                   // 0x02C8 (size: 0x1)
    bool Light On / Off;                                                              // 0x02C9 (size: 0x1)
    float Light_Intensity;                                                            // 0x02CC (size: 0x4)
    bool IsPrecise;                                                                   // 0x02D0 (size: 0x1)
    bool HasBeenUsedOnce;                                                             // 0x02D1 (size: 0x1)

    void UserConstructionScript();
    void Turn OFF();
    void BndEvt__BP_CatButton_ScratchableVendingMachine_COMP_CatButtonMoveToAnim_K2Node_ComponentBoundEvent_3_AfterUseDone__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_CatButton_ScratchableVendingMachine_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void CanWasLooted(class ULootableComponent* _lootable);
    void BndEvt__BP_CatButton_ScratchableVendingMachine_COMP_CatButtonMoveToAnim_K2Node_ComponentBoundEvent_1_AnimationStarted__DelegateSignature();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CatButton_ScratchableVendingMachine(int32 EntryPoint);
}; // Size: 0x2D2

#endif
