#ifndef UE4SS_SDK_BP_ZurgManager_HPP
#define UE4SS_SDK_BP_ZurgManager_HPP

class ABP_ZurgManager_C : public AZurgManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    bool DisplayAlertCount;
    bool DisplayActiveZurgCount;
    float DebugRefreshInterval;

    void ReceiveBeginPlay();
    void ActiveLeaderTimerEvent();
    void ExecuteUbergraph_BP_ZurgManager(int32 EntryPoint);
};

#endif
