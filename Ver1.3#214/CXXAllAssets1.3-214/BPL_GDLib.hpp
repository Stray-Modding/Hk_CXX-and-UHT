#ifndef UE4SS_SDK_BPL_GDLib_HPP
#define UE4SS_SDK_BPL_GDLib_HPP

class UBPL_GDLib_C : public UBlueprintFunctionLibrary
{

    void ActivateSentinel(class ABP_SentinelAI_C* Sentinel, bool Activate, class UObject* __WorldContext);
    void ApplyFullAdventureState(FFullAdventureState AdventureState, class UObject* __WorldContext);
    void ResetAllSubAdventureStates(class UObject* __WorldContext);
    void SetCleanCityAdventureState(TEnumAsByte<ENUM_CleanCityAdvStates> CleanCityAdventureState, class UObject* __WorldContext);
    void SetJailAdventureState(TEnumAsByte<ENUM_JailAdvStates> JailAdventureState, class UObject* __WorldContext);
    void SetMidtownPart2AdventureState(TEnumAsByte<ENUM_MidtownPart2AdvStates> MidtownPart2AdventureState, class UObject* __WorldContext);
    void SetFactoryAdventureState(TEnumAsByte<ENUM_FactoryAdvStates> FactoryAdventureState, class UObject* __WorldContext);
    void SetMidtownPart1AdventureState(TEnumAsByte<ENUM_MidtownPart1AdvStates> MidtownPart1AdventureState, class UObject* __WorldContext);
    void SetAntVillageAdventureState(TEnumAsByte<ENUM_AntVillageAdvStates> AntVillageAdventureState, class UObject* __WorldContext);
    void SetSewersAdventureState(TEnumAsByte<ENUM_SewersAdvStates> SewersAdventureState, class UObject* __WorldContext);
    void SetDeadEndAdventureState(TEnumAsByte<ENUM_DeadEndAdvStates> DeadEndAdventureState, class UObject* __WorldContext);
    void SetSlumsPart2AdventureState(TEnumAsByte<ENUM_SlumsPart2AdvStates> SlumsPart2AdventureState, class UObject* __WorldContext);
    void SetRooftopsAdventureState(TEnumAsByte<ENUM_RooftopsAdvStates> RooftopsAdventureState, class UObject* __WorldContext);
    void SetSlumsPart1AdventureState(TEnumAsByte<ENUM_SlumsPart1AdvStates> SlumsPart1AdventureState, class UObject* __WorldContext);
    void SetB12FlatAdventureState(TEnumAsByte<ENUM_B12FlatAdvStates> B12FlatAdventureState, class UObject* __WorldContext);
    void SetChapterAdventureState(TEnumAsByte<ENUM_ChaptersAdvStates> ChapterAdventureState, class UObject* __WorldContext);
    void GetCleanCityAdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_CleanCityAdvStates>& CleanCityAdventureState);
    void GetJailAdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_JailAdvStates>& JailAdventureState);
    void GetMidtownPart2AdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_MidtownPart2AdvStates>& MidtownPart2AdventureState);
    void GetFactoryAdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_FactoryAdvStates>& FactoryAdventureState);
    void GetMidtownPart1AdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_MidtownPart1AdvStates>& MidtownPart1AdventureState);
    void GetAntVillageAdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_AntVillageAdvStates>& AntVillageAdventureState);
    void GetSewersAdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_SewersAdvStates>& SewersAdventureState);
    void GetDeadEndAdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_DeadEndAdvStates>& DeadEndAdventureState);
    void GetSlumsPart2AdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_SlumsPart2AdvStates>& SlumsPart2AdventureState);
    void GetRooftopsAdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_RooftopsAdvStates>& RooftopsAdventureState);
    void GetSlumsPart1AdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_SlumsPart1AdvStates>& SlumsPart1AdventureState);
    void GetB12FlatAdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_B12FlatAdvStates>& B12FlatAdventureState);
    void GetChapterAdventureState(class UObject* __WorldContext, TEnumAsByte<ENUM_ChaptersAdvStates>& ChapterAdventureState);
    void ActivateInGameActor(class AActor* ActorToActivate, bool PropagateToChildren, class UObject* __WorldContext);
    void DeactivateInGameActor(class AActor* ActorToDeactivate, bool PropagateToChildren, class UObject* __WorldContext);
    void AddItemInInventory(TSubclassOf<class AActor> Lootable, class UObject* __WorldContext);
    void DestroyItemFromInventory(FName ID, bool PlaySound, class UObject* __WorldContext);
}; // Size: 0x28

#endif
