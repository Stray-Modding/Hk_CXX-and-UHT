#ifndef UE4SS_SDK_BP_SIEDummyCatPawn_HPP
#define UE4SS_SDK_BP_SIEDummyCatPawn_HPP

class ABP_SIEDummyCatPawn_C : public ABP_DummyCatPawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SIEDummyCatPawn(int32 EntryPoint);
};

#endif
