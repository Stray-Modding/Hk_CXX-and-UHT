#ifndef UE4SS_SDK_BP_HKWorldSettings_HPP
#define UE4SS_SDK_BP_HKWorldSettings_HPP

class ABP_HKWorldSettings_C : public AHKWorldSettings
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    FFullAdventureState AdventureState;

    void AfterNotifyBeginPlay();
    void ExecuteUbergraph_BP_HKWorldSettings(int32 EntryPoint);
};

#endif
