#ifndef UE4SS_SDK_BP_TouchpadCat_Club_HPP
#define UE4SS_SDK_BP_TouchpadCat_Club_HPP

class ABP_TouchpadCat_Club_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0238 (size: 0x8)
    class UStaticMeshComponent* big_screen;                                           // 0x0240 (size: 0x8)
    class UArrowComponent* Pos;                                                       // 0x0248 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatButtonMoveToAnim;                            // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Alarm_Button;                                         // 0x0258 (size: 0x8)
    class USceneComponent* Pivot;                                                     // 0x0260 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)
    float Activation_Duration;                                                        // 0x0278 (size: 0x4)
    class UMaterialInterface* Color_Inactif;                                          // 0x0280 (size: 0x8)
    class UMaterialInterface* Color_Activation;                                       // 0x0288 (size: 0x8)
    class UMaterialInterface* Color_Actif;                                            // 0x0290 (size: 0x8)
    TArray<class ABP_TouchpadCat_Club_C*> OtherTouchpad;                              // 0x0298 (size: 0x10)
    TArray<class AActor*> ActorsToTrigger;                                            // 0x02A8 (size: 0x10)
    bool IsActive;                                                                    // 0x02B8 (size: 0x1)
    bool Activation;                                                                  // 0x02B9 (size: 0x1)
    bool IsDown;                                                                      // 0x02BA (size: 0x1)

    void Complete_6246EF4646E19036986D72BA2016CB92();
    void Tick_6246EF4646E19036986D72BA2016CB92(float Ratio);
    void Complete_6246EF4646E19036986D72BADB282DC4();
    void Tick_6246EF4646E19036986D72BADB282DC4(float Ratio);
    void BndEvt__BP_TouchpadCat_Club_Streaming_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Reset touchpad();
    void Set touchpad activation();
    void BndEvt__BP_TouchpadCat_Club_COMP_CatButtonMoveToAnim_K2Node_ComponentBoundEvent_3_AnimationStarted__DelegateSignature();
    void ExecuteUbergraph_BP_TouchpadCat_Club(int32 EntryPoint);
}; // Size: 0x2BB

#endif
