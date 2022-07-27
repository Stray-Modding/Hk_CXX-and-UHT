#ifndef UE4SS_SDK_Seq_ActivateSentinelBySector_HPP
#define UE4SS_SDK_Seq_ActivateSentinelBySector_HPP

class ASeq_ActivateSentinelBySector_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    bool Enable;                                                                      // 0x0278 (size: 0x1)
    TArray<class ABP_SentinelAI_C*> Sentinels;                                        // 0x0280 (size: 0x10)
    TArray<class ABP_Droid_C*> Droids;                                                // 0x0290 (size: 0x10)
    class ABP_CatPawn_C* cat;                                                         // 0x02A0 (size: 0x8)
    class AActor* ZoneActivate;                                                       // 0x02A8 (size: 0x8)
    class AActor* ZoneDeactivate;                                                     // 0x02B0 (size: 0x8)
    bool Activate;                                                                    // 0x02B8 (size: 0x1)
    bool Debug;                                                                       // 0x02B9 (size: 0x1)
    FString Secteur;                                                                  // 0x02C0 (size: 0x10)

    void BndEvt__Seq_ActivateSentinelGate_Zone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Seq_ActivateSentinelCells_ZoneExit_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ActorsActivation();
    void BndEvt__Seq_ActivateSentinelBySector_m_saveComponent_K2Node_ComponentBoundEvent_2_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_Seq_ActivateSentinelBySector(int32 EntryPoint);
}; // Size: 0x2D0

#endif
