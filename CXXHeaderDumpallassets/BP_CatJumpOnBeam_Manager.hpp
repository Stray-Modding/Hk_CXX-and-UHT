#ifndef UE4SS_SDK_BP_CatJumpOnBeam_Manager_HPP
#define UE4SS_SDK_BP_CatJumpOnBeam_Manager_HPP

class ABP_CatJumpOnBeam_Manager_C : public ABP_CatSequenceBase_Manager_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CatJumpOnBeam_Manager(int32 EntryPoint);
}; // Size: 0x2A8

#endif
