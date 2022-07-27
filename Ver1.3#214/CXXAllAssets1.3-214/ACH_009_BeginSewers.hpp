#ifndef UE4SS_SDK_ACH_009_BeginSewers_HPP
#define UE4SS_SDK_ACH_009_BeginSewers_HPP

class AACH_009_BeginSewers_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)

    void Zurg Killed(class AZurgPawnLeader* _zurgLeader, class AZurgPawnSlave* _slave, class AActor* _killer);
    void LogicTrigger();
    void OnStartSequence();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ACH_009_BeginSewers(int32 EntryPoint);
}; // Size: 0x278

#endif
