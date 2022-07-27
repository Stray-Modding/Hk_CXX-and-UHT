#ifndef UE4SS_SDK_SEQ_DocGoToTheBalcony_HPP
#define UE4SS_SDK_SEQ_DocGoToTheBalcony_HPP

class ASEQ_DocGoToTheBalcony_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBoxComponent* CatIsNearTheWindow_Zone;                                     // 0x0270 (size: 0x8)
    class UBoxComponent* CatIsNearTheGenerator_Zone;                                  // 0x0278 (size: 0x8)
    class UBoxComponent* CatIsUnderBalcony_Zone;                                      // 0x0280 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0288 (size: 0x8)
    class AActor* Droid_BalconyPos;                                                   // 0x0290 (size: 0x8)
    class AActor* Droid_BalconyTeleport;                                              // 0x0298 (size: 0x8)
    bool CatIsUnderTheBalcony;                                                        // 0x02A0 (size: 0x1)
    bool CatIsNearTheWindow;                                                          // 0x02A1 (size: 0x1)
    class AActor* Droid_RefillPos;                                                    // 0x02A8 (size: 0x8)
    bool Activate;                                                                    // 0x02B0 (size: 0x1)
    class AActor* Droid_WindowPos;                                                    // 0x02B8 (size: 0x8)
    class AActor* Droid_WindowTeleport;                                               // 0x02C0 (size: 0x8)
    bool CatLookDoc;                                                                  // 0x02C8 (size: 0x1)
    class AActor* Generator;                                                          // 0x02D0 (size: 0x8)
    class UAnimSequence* Anim_coucou;                                                 // 0x02D8 (size: 0x8)

    bool IsCatLookingAtDoc();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BoxNearGenerator_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CatIsNearTheWindow_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CancelMoveToBalcony();
    void ActivateSequence();
    void BndEvt__SEQ_DocGoToTheBalcony_m_saveComponent_K2Node_ComponentBoundEvent_3_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_SEQ_DocGoToTheBalcony(int32 EntryPoint);
}; // Size: 0x2E0

#endif
