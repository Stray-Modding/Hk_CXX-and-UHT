#ifndef UE4SS_SDK_BP_VerticalStore_HPP
#define UE4SS_SDK_BP_VerticalStore_HPP

class ABP_VerticalStore_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0380 (size: 0x8)
    class ABP_Zurg_KillZone_Box_C* ZurgKillZone;                                      // 0x0388 (size: 0x8)

    void getMovementPivot(class USceneComponent*& MovementPivot);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ActiveKillZone();
    void ExecuteUbergraph_BP_VerticalStore(int32 EntryPoint);
}; // Size: 0x390

#endif
