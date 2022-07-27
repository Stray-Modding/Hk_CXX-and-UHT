#ifndef UE4SS_SDK_BP_boyocable_HPP
#define UE4SS_SDK_BP_boyocable_HPP

class ABP_boyocable_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x0238 (size: 0x8)
    class UCableComponent* cable;                                                     // 0x0240 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_boyocable(int32 EntryPoint);
}; // Size: 0x248

#endif
