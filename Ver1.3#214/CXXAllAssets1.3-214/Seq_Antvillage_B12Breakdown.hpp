#ifndef UE4SS_SDK_Seq_Antvillage_B12Breakdown_HPP
#define UE4SS_SDK_Seq_Antvillage_B12Breakdown_HPP

class ASeq_Antvillage_B12Breakdown_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UCOMP_CatUsableSpecialOverride_C* COMP_CatUsableSpecialOverride;            // 0x0278 (size: 0x8)
    class ADialog* B12RefusingDialog;                                                 // 0x0280 (size: 0x8)
    class ADialog* B12Breakdown2;                                                     // 0x0288 (size: 0x8)
    TArray<class ABP_Droid_C*> TalkingDroids;                                         // 0x0290 (size: 0x10)
    class ALOOT_Plant_red_C* LootablePlantRed;                                        // 0x02A0 (size: 0x8)
    class ALOOT_Plant_mauve_C* LootablePlantMauve;                                    // 0x02A8 (size: 0x8)
    class ALOOT_Plant_yellow_C* LootablePlantYellow;                                  // 0x02B0 (size: 0x8)
    class ABP_B12_SecondaryMemory_Scene_C* SecondaryMemory;                           // 0x02B8 (size: 0x8)
    TArray<class UDroneUsableComponent*> Usables;                                     // 0x02C0 (size: 0x10)
    class ABP_Dialog_Zone_C* DialogZoneGerard;                                        // 0x02D0 (size: 0x8)

    void ReceiveBeginPlay();
    void End B12 Breakdown();
    void ReceiveTick(float DeltaSeconds);
    void Setup B12 Breakdown();
    void BndEvt__Seq_Antvillage_B12Breakdown_COMP_CatUsableSpecialOverride_K2Node_ComponentBoundEvent_0_UniqueScript__DelegateSignature();
    void Start B12 Breakdown();
    void GerardDialogRequested();
    void LogicTrigger();
    void OnStartFromCheckpoint();
    void ExecuteUbergraph_Seq_Antvillage_B12Breakdown(int32 EntryPoint);
}; // Size: 0x2D8

#endif
