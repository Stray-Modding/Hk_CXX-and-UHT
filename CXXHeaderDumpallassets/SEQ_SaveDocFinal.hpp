#ifndef UE4SS_SDK_SEQ_SaveDocFinal_HPP
#define UE4SS_SDK_SEQ_SaveDocFinal_HPP

class ASEQ_SaveDocFinal_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBoxComponent* CatNearStore_Zone;                                           // 0x0270 (size: 0x8)
    class ABP_Doc_C* Doc;                                                             // 0x0278 (size: 0x8)
    bool Activate;                                                                    // 0x0280 (size: 0x1)
    TEnumAsByte<SaveTheDocFinal> SequenceState;                                       // 0x0281 (size: 0x1)
    class ABP_VerticalStore_C* Store;                                                 // 0x0288 (size: 0x8)
    class ABP_DocDefluxor_C* Torchlight;                                              // 0x0290 (size: 0x8)
    class AZurgPawnSlave* ClosestSlave;                                               // 0x0298 (size: 0x8)
    class ABP_ZurgPawn_Leader_C* ZurgsAttackDOC_1;                                    // 0x02A0 (size: 0x8)
    bool Dial_FinalZurgsWaveIsFinished;                                               // 0x02A8 (size: 0x1)
    class ABP_ZurgPawn_Leader_C* ZurgsAttackDOC_2;                                    // 0x02B0 (size: 0x8)
    TArray<class ABP_ZurgPawn_Leader_C*> ZurgsToKillInTheCorridors;                   // 0x02B8 (size: 0x10)
    bool CatIsNearStore;                                                              // 0x02C8 (size: 0x1)
    bool ZurgsInCorridorAreDead;                                                      // 0x02C9 (size: 0x1)
    bool DoorIsClosing;                                                               // 0x02CA (size: 0x1)
    class AActor* DroidOnGroundAttackedByZurg_POS;                                    // 0x02D0 (size: 0x8)
    TSoftObjectPtr<UWorld> Zone;                                                      // 0x02D8 (size: 0x28)
    TArray<FName> Transition Groups;                                                  // 0x0300 (size: 0x10)
    class ABP_VerticalStore_C* FirstDoor;                                             // 0x0310 (size: 0x8)
    class AActor* DroidIdleAttackedByZurg_POS;                                        // 0x0318 (size: 0x8)
    class ASEQ_ZurgSpawnManager_C* LastZurgsSpawner_1;                                // 0x0320 (size: 0x8)
    class ASEQ_ZurgSpawnManager_C* LastZurgsSpawner_2;                                // 0x0328 (size: 0x8)
    class ABP_Zurg_Counter_C* ZurgsCounter;                                           // 0x0330 (size: 0x8)
    class AActor* DocFear_POS;                                                        // 0x0338 (size: 0x8)
    class AActor* SecondDoorSpline;                                                   // 0x0340 (size: 0x8)
    class AActor* FinalSpline;                                                        // 0x0348 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0350 (size: 0x8)
    bool GoToSlumDelayPassed;                                                         // 0x0358 (size: 0x1)
    bool isCatNearFirstDoor;                                                          // 0x0359 (size: 0x1)
    class AActor* CatNearFirstDoor;                                                   // 0x0360 (size: 0x8)
    bool isCatNearSlumSAS;                                                            // 0x0368 (size: 0x1)
    class AActor* CatNearSlumSAS;                                                     // 0x0370 (size: 0x8)
    class ABP_Door_Sas_C* DoorSas;                                                    // 0x0378 (size: 0x8)
    bool CheckpointSaveDoc;                                                           // 0x0380 (size: 0x1)

    void GetZurgsOnDoc(int32& Count);
    bool GetSlaveCountLessThan(class AZurgPawnLeader* Target, int32 Slave Count);
    void GetClosestZurgFromThisLoc(TArray<class ABP_ZurgPawn_Leader_C*>& Array, FVector Pos, class AZurgPawnSlave*& ClosestSlave1);
    void LogicTrigger();
    void Change State();
    void BndEvt__CatNearStore_Zone_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CatNearStore_Zone_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnStartSequence();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__SEQ_SaveDocFinal_CatNearSlumSAS_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_SaveDocFinal_CatNearSlumSAS_K2Node_ComponentBoundEvent_4_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_SaveDocFinal_CatNearFirstDoor_K2Node_ComponentBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_SaveDocFinal_CatNearFirstDoor_K2Node_ComponentBoundEvent_6_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_SEQ_SaveDocFinal(int32 EntryPoint);
}; // Size: 0x381

#endif
