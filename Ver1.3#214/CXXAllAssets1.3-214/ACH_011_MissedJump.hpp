#ifndef UE4SS_SDK_ACH_011_MissedJump_HPP
#define UE4SS_SDK_ACH_011_MissedJump_HPP

class AACH_011_MissedJump_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_ZurgPawn_Leader_C* ZurkLeader;                                          // 0x0270 (size: 0x8)

    void LogicTrigger();
    void ExecuteUbergraph_ACH_011_MissedJump(int32 EntryPoint);
}; // Size: 0x278

#endif
