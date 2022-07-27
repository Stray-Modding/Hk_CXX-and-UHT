#ifndef UE4SS_SDK_LookAt_InterestPoint_HPP
#define UE4SS_SDK_LookAt_InterestPoint_HPP

class ALookAt_InterestPoint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    bool LockOnCat;                                                                   // 0x0240 (size: 0x1)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_LookAt_InterestPoint(int32 EntryPoint);
}; // Size: 0x241

#endif
