#ifndef UE4SS_SDK_Dial_Antvillage_Outsider_Meditating_HPP
#define UE4SS_SDK_Dial_Antvillage_Outsider_Meditating_HPP

class ADial_Antvillage_Outsider_Meditating_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UCOMP_CatFrottableComponent_C* COMP_CatFrottableComponent;                  // 0x0340 (size: 0x8)
    class UStaticMeshComponent* GUIFeedbackPosition;                                  // 0x0348 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0350 (size: 0x8)
    class UCapsuleComponent* FrottableCapsule;                                        // 0x0358 (size: 0x8)
    class UMeowableComponent* Meowable;                                               // 0x0360 (size: 0x8)
    float Timeline_0_Alpha_42F323E0419F836E6DF5CE8C1B1CC688;                          // 0x0368 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_42F323E0419F836E6DF5CE8C1B1CC688; // 0x036C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0370 (size: 0x8)
    class ABP_Droid_C* Gerard;                                                        // 0x0378 (size: 0x8)
    class AActor* DialZone;                                                           // 0x0380 (size: 0x8)
    bool TalkedOnce;                                                                  // 0x0388 (size: 0x1)
    TArray<class ABP_screen_C*> TV_Screens;                                           // 0x0390 (size: 0x10)
    class ABP_SplineCameraCine_Simple_C* Camera_Spline1;                              // 0x03A0 (size: 0x8)
    class ACameraActor* Camera_Static1;                                               // 0x03A8 (size: 0x8)
    class AActor* cat_TP_Pos;                                                         // 0x03B0 (size: 0x8)
    class AActor* CatPos;                                                             // 0x03B8 (size: 0x8)
    class AActor* CatPos2;                                                            // 0x03C0 (size: 0x8)
    class AActor* DronePos1;                                                          // 0x03C8 (size: 0x8)
    class AActor* DronePos2;                                                          // 0x03D0 (size: 0x8)
    class ASeq_Antvillage_B12Breakdown_C* Seq_B12Breakdown;                           // 0x03D8 (size: 0x8)
    FColor InitPrimaryColor;                                                          // 0x03E0 (size: 0x4)
    FColor InitSecondaryColor;                                                        // 0x03E4 (size: 0x4)
    class UAnimSequence* CatFear;                                                     // 0x03E8 (size: 0x8)
    class UMaterialInterface* InitScreen;                                             // 0x03F0 (size: 0x8)
    class AActor* tv_held_by_Zb;                                                      // 0x03F8 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Complete_6246EF4646E19036986D72BAF5BE7D8E();
    void Tick_6246EF4646E19036986D72BAF5BE7D8E(float Ratio);
    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void SetTvMaterial(class UMaterialInterface* Material);
    void OnRequestDialog();
    void B12 Line();
    void Gerard Line();
    void ReceiveBeginPlay();
    void BndEvt__Dial_Antvillage_Outsider_Meditating_Meowable_K2Node_ComponentBoundEvent_0_NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void BndEvt__Dial_Antvillage_Outsider_Meditating_COMP_CatFrottableComponent_K2Node_ComponentBoundEvent_1_CatFrottableDelegate__DelegateSignature(class UCatFrottableComponent* _component);
    void CatButtonReaction(class UMaterialInterface* Screen);
    void ExecuteUbergraph_Dial_Antvillage_Outsider_Meditating(int32 EntryPoint);
}; // Size: 0x400

#endif
