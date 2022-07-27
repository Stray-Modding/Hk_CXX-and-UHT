#ifndef UE4SS_SDK_BP_ZurgManager_HPP
#define UE4SS_SDK_BP_ZurgManager_HPP

class ABP_ZurgManager_C : public AZurgManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03A0 (size: 0x8)
    bool DisplayAlertCount;                                                           // 0x03A8 (size: 0x1)
    bool DisplayActiveZurgCount;                                                      // 0x03A9 (size: 0x1)
    float DebugRefreshInterval;                                                       // 0x03AC (size: 0x4)

    void ReceiveBeginPlay();
    void ActiveLeaderTimerEvent();
    void ExecuteUbergraph_BP_ZurgManager(int32 EntryPoint);
}; // Size: 0x3B0

#endif
