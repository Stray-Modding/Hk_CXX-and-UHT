#ifndef UE4SS_SDK_BTT_DroidTask_HPP
#define UE4SS_SDK_BTT_DroidTask_HPP

class UBTT_DroidTask_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x00B0 (size: 0x8)
    class ABP_DroidAIController_C* DroidAI;                                           // 0x00B8 (size: 0x8)

    void GetDroidAI(class ABP_DroidAIController_C*& DroidAI);
    void GetDroid(class ABP_Droid_C*& Droid);
    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_BTT_DroidTask(int32 EntryPoint);
}; // Size: 0xC0

#endif
