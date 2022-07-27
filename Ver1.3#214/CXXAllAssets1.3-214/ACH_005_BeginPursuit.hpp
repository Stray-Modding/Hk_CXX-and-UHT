#ifndef UE4SS_SDK_ACH_005_BeginPursuit_HPP
#define UE4SS_SDK_ACH_005_BeginPursuit_HPP

class AACH_005_BeginPursuit_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)

    void Catched();
    void LogicTrigger();
    void ExecuteUbergraph_ACH_005_BeginPursuit(int32 EntryPoint);
}; // Size: 0x2A0

#endif
