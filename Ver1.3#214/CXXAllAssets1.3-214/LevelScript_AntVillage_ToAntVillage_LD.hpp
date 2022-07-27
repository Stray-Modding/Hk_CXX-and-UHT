#ifndef UE4SS_SDK_LevelScript_AntVillage_ToAntVillage_LD_HPP
#define UE4SS_SDK_LevelScript_AntVillage_ToAntVillage_LD_HPP

class ALevelScript_AntVillage_ToAntVillage_LD_C : public ALevelScript
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class ABP_SewerDoorLarge_C* SewerFinalDoor;                                       // 0x0248 (size: 0x8)
    class ATriggerZone_C* CineTriggerZone;                                            // 0x0250 (size: 0x8)
    class AActor* Pushable Fake Drone;                                                // 0x0258 (size: 0x8)
    bool AntVillageSetUpDone;                                                         // 0x0260 (size: 0x1)
    class ABP_SwitchTrigger_WaitForLoad_C* switchtriggerwaitforload;                  // 0x0268 (size: 0x8)

    void OnInitialise(EChapter _chapter);
    void ExecuteUbergraph_LevelScript_AntVillage_ToAntVillage_LD(int32 EntryPoint);
}; // Size: 0x270

#endif
