#ifndef UE4SS_SDK_BP_ZurgSlaveAIController_HPP
#define UE4SS_SDK_BP_ZurgSlaveAIController_HPP

class ABP_ZurgSlaveAIController_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ZurgSlaveAIController(int32 EntryPoint);
}; // Size: 0x338

#endif
