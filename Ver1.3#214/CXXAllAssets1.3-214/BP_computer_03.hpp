#ifndef UE4SS_SDK_BP_computer_03_HPP
#define UE4SS_SDK_BP_computer_03_HPP

class ABP_computer_03_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* computer_03;                                          // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    class UAudioComponent* Sfx;                                                       // 0x0240 (size: 0x8)
    bool computer on;                                                                 // 0x0248 (size: 0x1)

    void ReceiveBeginPlay();
    void turn on/off(bool turn on);
    void ExecuteUbergraph_BP_computer_03(int32 EntryPoint);
}; // Size: 0x249

#endif
