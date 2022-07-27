#ifndef UE4SS_SDK_SEQ_B12_SignsShowPathAppart_HPP
#define UE4SS_SDK_SEQ_B12_SignsShowPathAppart_HPP

class ASEQ_B12_SignsShowPathAppart_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UMeowableComponent* Meowable;                                               // 0x0278 (size: 0x8)
    bool Activate;                                                                    // 0x0280 (size: 0x1)
    class ACACA_Guirlande_B12_Follow_C* Guirlande;                                    // 0x0288 (size: 0x8)
    class ACACA_Guirlande_B12_Follow_C* Guirlande_Stair;                              // 0x0290 (size: 0x8)
    class AActor* GuirlandeZone;                                                      // 0x0298 (size: 0x8)
    bool CatIsOnStair;                                                                // 0x02A0 (size: 0x1)
    class AActor* OutsideZone;                                                        // 0x02A8 (size: 0x8)
    bool CatIsOutside;                                                                // 0x02B0 (size: 0x1)
    class ABP_Sign_FollowLight_C* SignFollowLight;                                    // 0x02B8 (size: 0x8)

    void BndEvt__Meowable_K2Node_ComponentBoundEvent_1_NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void BndEvt__SEQ_B12_SignsShowPathAppart_GuirlandeZone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_B12_SignsShowPathAppart_GuirlandeZone_K2Node_ComponentBoundEvent_4_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_B12_SignsShowPathAppart_OutsideZone_K2Node_ComponentBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_SEQ_B12_SignsShowPathAppart(int32 EntryPoint);
}; // Size: 0x2C0

#endif
