#ifndef UE4SS_SDK_BP_Door_WALL_HPP
#define UE4SS_SDK_BP_Door_WALL_HPP

class ABP_Door_WALL_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0238 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    FVector Vertical_Mov;                                                             // 0x0250 (size: 0xC)
    FVector Horizontal_Mov;                                                           // 0x025C (size: 0xC)
    FVector Start_Position;                                                           // 0x0268 (size: 0xC)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Door_WALL(int32 EntryPoint);
}; // Size: 0x274

#endif
