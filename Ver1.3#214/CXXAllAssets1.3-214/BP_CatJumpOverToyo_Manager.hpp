#ifndef UE4SS_SDK_BP_CatJumpOverToyo_Manager_HPP
#define UE4SS_SDK_BP_CatJumpOverToyo_Manager_HPP

class ABP_CatJumpOverToyo_Manager_C : public ABP_CatSequenceBase_Manager_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class AActor* PlayerTriggerZone;                                                  // 0x02A8 (size: 0x8)
    bool CatPlayerIsInZone;                                                           // 0x02B0 (size: 0x1)

    void ReceiveBeginPlay();
    void BndEvt__BP_CatJumpOverToyo_Manager_PlayerTriggerZone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_BP_CatJumpOverToyo_Manager(int32 EntryPoint);
}; // Size: 0x2B1

#endif
