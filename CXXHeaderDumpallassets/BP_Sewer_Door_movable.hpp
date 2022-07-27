#ifndef UE4SS_SDK_BP_Sewer_Door_movable_HPP
#define UE4SS_SDK_BP_Sewer_Door_movable_HPP

class ABP_Sewer_Door_movable_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0230 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0238 (size: 0x8)
    bool Open;                                                                        // 0x0240 (size: 0x1)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Sewer_Door_movable(int32 EntryPoint);
}; // Size: 0x241

#endif
