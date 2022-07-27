#ifndef UE4SS_SDK_BP_DoorJail_CellZone_HPP
#define UE4SS_SDK_BP_DoorJail_CellZone_HPP

class ABP_DoorJail_CellZone_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Lock;                                                 // 0x0380 (size: 0x8)

    void Open();
    void Close();
    void ExecuteUbergraph_BP_DoorJail_CellZone(int32 EntryPoint);
}; // Size: 0x388

#endif
