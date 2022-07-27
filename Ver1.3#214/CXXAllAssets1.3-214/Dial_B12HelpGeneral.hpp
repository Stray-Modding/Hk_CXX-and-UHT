#ifndef UE4SS_SDK_Dial_B12HelpGeneral_HPP
#define UE4SS_SDK_Dial_B12HelpGeneral_HPP

class ADial_B12HelpGeneral_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void B12FlatHelp();
    void SlumsPart1Help();
    void RooftopsHelp();
    void SlumsPart2Help();
    void DeadEndHelp();
    void SewersHelp();
    void AntVillageHelp();
    void MidtownPart1Help();
    void FactoryHelp();
    void MidtownPart2Help();
    void JailHelp();
    void CleanCityHelp();
    void ErrorMessage();
    void ExecuteUbergraph_Dial_B12HelpGeneral(int32 EntryPoint);
}; // Size: 0x340

#endif
