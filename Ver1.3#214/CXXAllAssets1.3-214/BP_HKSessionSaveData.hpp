#ifndef UE4SS_SDK_BP_HKSessionSaveData_HPP
#define UE4SS_SDK_BP_HKSessionSaveData_HPP

class UBP_HKSessionSaveData_C : public UHKSessionSaveData
{
    int32 SessionDoorUsedCount;                                                       // 0x0030 (size: 0x4)
    TEnumAsByte<ENUM_AdventureStates> AdventureState;                                 // 0x0034 (size: 0x1)
    bool ClemNoteBookLooted;                                                          // 0x0035 (size: 0x1)
    bool DocNoteBookLooted;                                                           // 0x0036 (size: 0x1)
    bool GerardNoteBookLooted;                                                        // 0x0037 (size: 0x1)
    int32 NbOfCluesClemFlat;                                                          // 0x0038 (size: 0x4)
    bool RikoLooted;                                                                  // 0x003C (size: 0x1)
    bool JailFinished;                                                                // 0x003D (size: 0x1)
    int32 Color;                                                                      // 0x0040 (size: 0x4)
    bool TrackerShown;                                                                // 0x0044 (size: 0x1)
    TEnumAsByte<ENUM_ChaptersAdvStates> ChapterAdventureState;                        // 0x0045 (size: 0x1)
    TEnumAsByte<ENUM_B12FlatAdvStates> B12FlatAdventureState;                         // 0x0046 (size: 0x1)
    TEnumAsByte<ENUM_SlumsPart1AdvStates> SlumsPart1AdventureState;                   // 0x0047 (size: 0x1)
    TEnumAsByte<ENUM_RooftopsAdvStates> RooftopsAdventureState;                       // 0x0048 (size: 0x1)
    TEnumAsByte<ENUM_SlumsPart2AdvStates> SlumsPart2AdventureState;                   // 0x0049 (size: 0x1)
    TEnumAsByte<ENUM_DeadEndAdvStates> DeadEndAdventureState;                         // 0x004A (size: 0x1)
    TEnumAsByte<ENUM_SewersAdvStates> SewersAdventureState;                           // 0x004B (size: 0x1)
    TEnumAsByte<ENUM_AntVillageAdvStates> AntVillageAdventureState;                   // 0x004C (size: 0x1)
    TEnumAsByte<ENUM_MidtownPart1AdvStates> MidtownPart1AdventureState;               // 0x004D (size: 0x1)
    TEnumAsByte<ENUM_FactoryAdvStates> FactoryAdventureState;                         // 0x004E (size: 0x1)
    TEnumAsByte<ENUM_MidtownPart2AdvStates> MidtownPart2AdventureState;               // 0x004F (size: 0x1)
    TEnumAsByte<ENUM_JailAdvStates> JailAdventureState;                               // 0x0050 (size: 0x1)
    TEnumAsByte<ENUM_CleanCityAdvStates> CleanCityAdventureState;                     // 0x0051 (size: 0x1)
    FBP_HKSessionSaveData_COnAdventureStateChanged OnAdventureStateChanged;           // 0x0058 (size: 0x10)
    void OnAdventureStateChanged(class UBP_HKSessionSaveData_C* SessionSaveData);
    bool SewersZurgKilled;                                                            // 0x0068 (size: 0x1)
    bool DetectedBySentinelInMidtown;                                                 // 0x0069 (size: 0x1)

    FString BlueprintToString();
    void GetNbOfNoteBookLooted(int32& NbOfNoteBookLooted);
    void InternalSetCleanCityAdventureState(TEnumAsByte<ENUM_CleanCityAdvStates> State);
    void InternalSetJailAdventureState(TEnumAsByte<ENUM_JailAdvStates> State);
    void InternalSetMidtownPart2AdventureState(TEnumAsByte<ENUM_MidtownPart2AdvStates> State);
    void InternalSetFactoryAdventureState(TEnumAsByte<ENUM_FactoryAdvStates> State);
    void InternalSetMidtownPart1AdventureState(TEnumAsByte<ENUM_MidtownPart1AdvStates> State);
    void InternalSetAntVillageAdventureState(TEnumAsByte<ENUM_AntVillageAdvStates> State);
    void InternalSetSewersAdventureState(TEnumAsByte<ENUM_SewersAdvStates> Sewers);
    void InternalSetDeadEndAdventureState(TEnumAsByte<ENUM_DeadEndAdvStates> State);
    void InternalSetSlumsPart2AdventureState(TEnumAsByte<ENUM_SlumsPart2AdvStates> State);
    void InternalSetRooftopsAdventureState(TEnumAsByte<ENUM_RooftopsAdvStates> State);
    void InternalSetSlumsPart1AdventureState(TEnumAsByte<ENUM_SlumsPart1AdvStates> State);
    void InternalSetB12FlatAdventureState(TEnumAsByte<ENUM_B12FlatAdvStates> State);
    void InternalSetChapterAdventureState(TEnumAsByte<ENUM_ChaptersAdvStates> State);
    void SetCleanCityAdventureState(TEnumAsByte<ENUM_CleanCityAdvStates> State);
    void SetJailAdventureState(TEnumAsByte<ENUM_JailAdvStates> State);
    void SetMidtownPart2AdventureState(TEnumAsByte<ENUM_MidtownPart2AdvStates> State);
    void SetFactoryAdventureState(TEnumAsByte<ENUM_FactoryAdvStates> State);
    void SetMidtownPart1AdventureState(TEnumAsByte<ENUM_MidtownPart1AdvStates> State);
    void SetAntVillageAdventureState(TEnumAsByte<ENUM_AntVillageAdvStates> State);
    void SetSewersAdventureState(TEnumAsByte<ENUM_SewersAdvStates> Sewers);
    void SetDeadEndAdventureState(TEnumAsByte<ENUM_DeadEndAdvStates> State);
    void SetSlumsPart2AdventureState(TEnumAsByte<ENUM_SlumsPart2AdvStates> State);
    void SetRooftopsAdventureState(TEnumAsByte<ENUM_RooftopsAdvStates> State);
    void SetSlumsPart1AdventureState(TEnumAsByte<ENUM_SlumsPart1AdvStates> State);
    void SetB12FlatAdventureState(TEnumAsByte<ENUM_B12FlatAdvStates> State);
    void SetChapterAdventureState(TEnumAsByte<ENUM_ChaptersAdvStates> State);
    void OnAdventureStateChanged__DelegateSignature(class UBP_HKSessionSaveData_C* SessionSaveData);
}; // Size: 0x6A

#endif
