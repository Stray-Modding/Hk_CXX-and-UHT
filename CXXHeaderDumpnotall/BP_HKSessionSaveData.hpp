#ifndef UE4SS_SDK_BP_HKSessionSaveData_HPP
#define UE4SS_SDK_BP_HKSessionSaveData_HPP

class UBP_HKSessionSaveData_C : public UHKSessionSaveData
{
    int32 SessionDoorUsedCount;
    TEnumAsByte<ENUM_AdventureStates> AdventureState;
    bool ClemNoteBookLooted;
    bool DocNoteBookLooted;
    bool GerardNoteBookLooted;
    int32 NbOfCluesClemFlat;
    bool RikoLooted;
    bool JailFinished;
    int32 Color;
    bool TrackerShown;
    TEnumAsByte<ENUM_ChaptersAdvStates> ChapterAdventureState;
    TEnumAsByte<ENUM_B12FlatAdvStates> B12FlatAdventureState;
    TEnumAsByte<ENUM_SlumsPart1AdvStates> SlumsPart1AdventureState;
    TEnumAsByte<ENUM_RooftopsAdvStates> RooftopsAdventureState;
    TEnumAsByte<ENUM_SlumsPart2AdvStates> SlumsPart2AdventureState;
    TEnumAsByte<ENUM_DeadEndAdvStates> DeadEndAdventureState;
    TEnumAsByte<ENUM_SewersAdvStates> SewersAdventureState;
    TEnumAsByte<ENUM_AntVillageAdvStates> AntVillageAdventureState;
    TEnumAsByte<ENUM_MidtownPart1AdvStates> MidtownPart1AdventureState;
    TEnumAsByte<ENUM_FactoryAdvStates> FactoryAdventureState;
    TEnumAsByte<ENUM_MidtownPart2AdvStates> MidtownPart2AdventureState;
    TEnumAsByte<ENUM_JailAdvStates> JailAdventureState;
    TEnumAsByte<ENUM_CleanCityAdvStates> CleanCityAdventureState;
    FBP_HKSessionSaveData_COnAdventureStateChanged OnAdventureStateChanged;
    void OnAdventureStateChanged(class UBP_HKSessionSaveData_C* SessionSaveData);
    bool SewersZurgKilled;
    bool DetectedBySentinelInMidtown;

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
};

#endif
