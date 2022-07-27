#ifndef UE4SS_SDK_Seq_CatInjuredAfterFall_HPP
#define UE4SS_SDK_Seq_CatInjuredAfterFall_HPP

class ASeq_CatInjuredAfterFall_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UAudioComponent* CatLick_VIBE;                                              // 0x0270 (size: 0x8)
    class UAudioComponent* CatInjuredWalk_VIBE;                                       // 0x0278 (size: 0x8)
    class UBoxComponent* ActiveZone;                                                  // 0x0280 (size: 0x8)
    bool Active;                                                                      // 0x0288 (size: 0x1)
    int32 cry;                                                                        // 0x028C (size: 0x4)
    float SpeedMin;                                                                   // 0x0290 (size: 0x4)
    float SpeedMax;                                                                   // 0x0294 (size: 0x4)
    float Speed;                                                                      // 0x0298 (size: 0x4)
    float speed_Target;                                                               // 0x029C (size: 0x4)
    float TimeChangeSpeedMin;                                                         // 0x02A0 (size: 0x4)
    float TimeChangeSpeedMax;                                                         // 0x02A4 (size: 0x4)
    class UAnimSequence* Animation;                                                   // 0x02A8 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x02B0 (size: 0x8)
    bool Init;                                                                        // 0x02B8 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void BndEvt__ActiveZone_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Cancel Delay();
    void OnStartSequence();
    void DeactivateInjured();
    void Play Cat Custom Animation(class UAnimSequence* _animation);
    void ActivateInjured();
    void Init_Injured();
    void BndEvt__Seq_CatInjuredAfterFall_m_saveComponent_K2Node_ComponentBoundEvent_4_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_Seq_CatInjuredAfterFall(int32 EntryPoint);
}; // Size: 0x2B9

#endif
