#ifndef UE4SS_SDK_BP_DoorGrid_TrashZone_HPP
#define UE4SS_SDK_BP_DoorGrid_TrashZone_HPP

class ABP_DoorGrid_TrashZone_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0380 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_DoorGrid_TrashZone(int32 EntryPoint);
}; // Size: 0x388

#endif
