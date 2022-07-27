#ifndef UE4SS_SDK_BP_DoorTrashZone_HPP
#define UE4SS_SDK_BP_DoorTrashZone_HPP

class ABP_DoorTrashZone_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Sewers_Door_D_01;                                     // 0x0380 (size: 0x8)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA3B0B9C2E();
    void Tick_6246EF4646E19036986D72BA3B0B9C2E(float Ratio);
    void ReceiveBeginPlay();
    void OnStartMovement_Event_0(bool IsOpen);
    void InstantOpen();
    void InstantClose();
    void ExecuteUbergraph_BP_DoorTrashZone(int32 EntryPoint);
}; // Size: 0x388

#endif
