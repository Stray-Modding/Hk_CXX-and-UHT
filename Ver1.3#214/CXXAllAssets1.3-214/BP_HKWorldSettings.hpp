#ifndef UE4SS_SDK_BP_HKWorldSettings_HPP
#define UE4SS_SDK_BP_HKWorldSettings_HPP

class ABP_HKWorldSettings_C : public AHKWorldSettings
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0470 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0478 (size: 0x8)
    FFullAdventureState AdventureState;                                               // 0x0480 (size: 0xD)

    void AfterNotifyBeginPlay();
    void ExecuteUbergraph_BP_HKWorldSettings(int32 EntryPoint);
}; // Size: 0x48D

#endif
