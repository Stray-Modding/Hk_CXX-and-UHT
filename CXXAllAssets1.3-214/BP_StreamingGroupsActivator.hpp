#ifndef UE4SS_SDK_BP_StreamingGroupsActivator_HPP
#define UE4SS_SDK_BP_StreamingGroupsActivator_HPP

class ABP_StreamingGroupsActivator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0240 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0248 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0250 (size: 0x8)
    bool Active;                                                                      // 0x0258 (size: 0x1)
    TArray<FName> GroupsToActivate;                                                   // 0x0260 (size: 0x10)
    TArray<FName> GroupsToDeactivate;                                                 // 0x0270 (size: 0x10)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void LogicTrigger();
    void ExecuteUbergraph_BP_StreamingGroupsActivator(int32 EntryPoint);
}; // Size: 0x280

#endif
