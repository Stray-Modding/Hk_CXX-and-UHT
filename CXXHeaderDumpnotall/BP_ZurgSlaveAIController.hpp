#ifndef UE4SS_SDK_BP_ZurgSlaveAIController_HPP
#define UE4SS_SDK_BP_ZurgSlaveAIController_HPP

class ABP_ZurgSlaveAIController_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ZurgSlaveAIController(int32 EntryPoint);
};

#endif
