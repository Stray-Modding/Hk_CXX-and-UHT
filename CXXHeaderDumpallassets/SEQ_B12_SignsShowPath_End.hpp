#ifndef UE4SS_SDK_SEQ_B12_SignsShowPath_End_HPP
#define UE4SS_SDK_SEQ_B12_SignsShowPath_End_HPP

class ASEQ_B12_SignsShowPath_End_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UBoxComponent* Zone3;                                                       // 0x0278 (size: 0x8)
    class UBoxComponent* Zone2;                                                       // 0x0280 (size: 0x8)
    class UBoxComponent* Zone1;                                                       // 0x0288 (size: 0x8)
    class UBoxComponent* Zone0;                                                       // 0x0290 (size: 0x8)
    class UMeowableComponent* Meowable;                                               // 0x0298 (size: 0x8)
    class ACACA_Guirlande_B12_Follow_C* Guirland_01;                                  // 0x02A0 (size: 0x8)
    class ACACA_Guirlande_B12_Follow_C* Guirland_02;                                  // 0x02A8 (size: 0x8)
    class ACACA_Guirlande_B12_Follow_C* Guirland_03;                                  // 0x02B0 (size: 0x8)
    class ACACA_Guirlande_B12_Follow_C* Guirland_04;                                  // 0x02B8 (size: 0x8)
    bool Activate;                                                                    // 0x02C0 (size: 0x1)
    bool Miaou;                                                                       // 0x02C1 (size: 0x1)
    class ABP_Sign_FollowLight_C* Sign;                                               // 0x02C8 (size: 0x8)
    class AActor* TriggerZone;                                                        // 0x02D0 (size: 0x8)
    class ACACA_Guirlande_B12_Follow_C* Guirland_05;                                  // 0x02D8 (size: 0x8)
    int32 CatZone;                                                                    // 0x02E0 (size: 0x4)

    void BndEvt__Meowable_K2Node_ComponentBoundEvent_1_NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void BndEvt__SEQ_B12_SignsShowPath_End_TriggerZone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_B12_SignsShowPath_End_Zone0_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SEQ_B12_SignsShowPath_End_Zone1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SEQ_B12_SignsShowPath_End_Zone2_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SEQ_B12_SignsShowPath_End_Zone3_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_SEQ_B12_SignsShowPath_End(int32 EntryPoint);
}; // Size: 0x2E4

#endif
