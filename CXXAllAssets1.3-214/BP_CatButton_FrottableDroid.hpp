#ifndef UE4SS_SDK_BP_CatButton_FrottableDroid_HPP
#define UE4SS_SDK_BP_CatButton_FrottableDroid_HPP

class ABP_CatButton_FrottableDroid_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* PurrSound;                                                 // 0x0230 (size: 0x8)
    class UAudioComponent* PurrVibe;                                                  // 0x0238 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0240 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0248 (size: 0x8)
    class UStaticMeshComponent* GUIFeedbackPosition;                                  // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0258 (size: 0x8)
    class UCapsuleComponent* capsule;                                                 // 0x0260 (size: 0x8)
    class UCOMP_CatFrottableComponent_C* COMP_CatFrottableComponent;                  // 0x0268 (size: 0x8)
    float ReactionTime;                                                               // 0x0270 (size: 0x4)
    class ABP_Droid_C* Droid;                                                         // 0x0278 (size: 0x8)
    class UMaterialInstance* ScreenReaction;                                          // 0x0280 (size: 0x8)
    class ABP_CameraThirdPerson_C* CamThird;                                          // 0x0288 (size: 0x8)
    bool AutocamwasOn ?;                                                              // 0x0290 (size: 0x1)
    bool UseAnimation;                                                                // 0x0291 (size: 0x1)
    class UAnimSequence* AnimationReaction;                                           // 0x0298 (size: 0x8)
    class USoundBase* SoundReaction;                                                  // 0x02A0 (size: 0x8)
    bool Frotted;                                                                     // 0x02A8 (size: 0x1)
    class UAudioComponent* PurrSoundInstance;                                         // 0x02B0 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_CatButton_FrottableRobot_COMP_CatFrottableComponent_K2Node_ComponentBoundEvent_0_CatFrottableDelegate__DelegateSignature(class UCatFrottableComponent* _component);
    void Reaction End();
    void BndEvt__BP_CatButton_FrottableDroid_COMP_CatFrottableComponent_K2Node_ComponentBoundEvent_1_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_CatButton_FrottableDroid_COMP_CatFrottableComponent_K2Node_ComponentBoundEvent_2_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void Purr();
    void Reset Purr Delay();
    void ExecuteUbergraph_BP_CatButton_FrottableDroid(int32 EntryPoint);
}; // Size: 0x2B8

#endif
