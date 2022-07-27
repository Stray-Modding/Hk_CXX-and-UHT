#ifndef UE4SS_SDK_BTT_DroidTask_HPP
#define UE4SS_SDK_BTT_DroidTask_HPP

class UBTT_DroidTask_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Droid_C* Droid;
    class ABP_DroidAIController_C* DroidAI;

    void GetDroidAI(class ABP_DroidAIController_C*& DroidAI);
    void GetDroid(class ABP_Droid_C*& Droid);
    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_BTT_DroidTask(int32 EntryPoint);
};

#endif
