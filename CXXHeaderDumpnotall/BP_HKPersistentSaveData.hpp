#ifndef UE4SS_SDK_BP_HKPersistentSaveData_HPP
#define UE4SS_SDK_BP_HKPersistentSaveData_HPP

class UBP_HKPersistentSaveData_C : public UHKPersistentSaveData
{
    bool BadgeOutsiderUnlocked;
    bool BadgeTrashzoneUnlocked;
    bool BadgeMusicUnlocked;
    bool BadgePlantUnlocked;
    bool BadgeShopSafeUnlocked;
    bool BadgePoliceStationUnlocked;
    bool ChromeBackpackUnlocked;

    FString BlueprintToString();
};

#endif
