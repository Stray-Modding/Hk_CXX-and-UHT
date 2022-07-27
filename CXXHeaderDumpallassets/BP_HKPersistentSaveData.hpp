#ifndef UE4SS_SDK_BP_HKPersistentSaveData_HPP
#define UE4SS_SDK_BP_HKPersistentSaveData_HPP

class UBP_HKPersistentSaveData_C : public UHKPersistentSaveData
{
    bool BadgeOutsiderUnlocked;                                                       // 0x0188 (size: 0x1)
    bool BadgeTrashzoneUnlocked;                                                      // 0x0189 (size: 0x1)
    bool BadgeMusicUnlocked;                                                          // 0x018A (size: 0x1)
    bool BadgePlantUnlocked;                                                          // 0x018B (size: 0x1)
    bool BadgeShopSafeUnlocked;                                                       // 0x018C (size: 0x1)
    bool BadgePoliceStationUnlocked;                                                  // 0x018D (size: 0x1)
    bool ChromeBackpackUnlocked;                                                      // 0x018E (size: 0x1)

    FString BlueprintToString();
}; // Size: 0x18F

#endif
