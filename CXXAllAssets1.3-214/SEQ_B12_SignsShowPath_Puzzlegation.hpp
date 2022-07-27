#ifndef UE4SS_SDK_SEQ_B12_SignsShowPath_Puzzlegation_HPP
#define UE4SS_SDK_SEQ_B12_SignsShowPath_Puzzlegation_HPP

class ASEQ_B12_SignsShowPath_Puzzlegation_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UBoxComponent* zone;                                                        // 0x0278 (size: 0x8)
    class UMeowableComponent* Meowable;                                               // 0x0280 (size: 0x8)
    class ACACA_Guirlande_B12_Follow_C* Guirland_01;                                  // 0x0288 (size: 0x8)
    bool Activate;                                                                    // 0x0290 (size: 0x1)
    bool Miaou;                                                                       // 0x0291 (size: 0x1)
    class ABP_TutoZone_C* Tuto_Meow;                                                  // 0x0298 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* CameraModifier_Zone;                   // 0x02A0 (size: 0x8)
    class AActor* CameraModifier_TriggerZone;                                         // 0x02A8 (size: 0x8)

    void BndEvt__Meowable_K2Node_ComponentBoundEvent_1_NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void BndEvt__SEQ_B12_SignsShowPath_Puzzlegation_Zone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SEQ_B12_SignsShowPath_Puzzlegation_CameraModifier_TriggerZone_K2Node_ComponentBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_B12_SignsShowPath_Puzzlegation_CameraModifier_TriggerZone_K2Node_ComponentBoundEvent_5_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_SEQ_B12_SignsShowPath_Puzzlegation(int32 EntryPoint);
}; // Size: 0x2B0

#endif
