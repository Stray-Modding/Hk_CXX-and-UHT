#ifndef UE4SS_SDK_BP_SIEDummyCatPawn_HPP
#define UE4SS_SDK_BP_SIEDummyCatPawn_HPP

class ABP_SIEDummyCatPawn_C : public ABP_DummyCatPawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x54A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SIEDummyCatPawn(int32 EntryPoint);
}; // Size: 0x54B0

#endif
