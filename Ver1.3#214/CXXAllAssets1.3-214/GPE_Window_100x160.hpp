#ifndef UE4SS_SDK_GPE_Window_100x160_HPP
#define UE4SS_SDK_GPE_Window_100x160_HPP

class AGPE_Window_100x160_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* GPE_Windows_100x160_Wrist;                            // 0x0230 (size: 0x8)
    class UStaticMeshComponent* GPE_Windows_100x160_W02;                              // 0x0238 (size: 0x8)
    class UStaticMeshComponent* GPE_Windows_100x160_W01;                              // 0x0240 (size: 0x8)
    class UStaticMeshComponent* GPE_Windows_100x160_frame;                            // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    bool StartOpen;                                                                   // 0x0258 (size: 0x1)
    bool Open;                                                                        // 0x0259 (size: 0x1)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BAEC672326();
    void Tick_6246EF4646E19036986D72BAEC672326(float Ratio);
    void Complete_6246EF4646E19036986D72BA4B45415C();
    void Tick_6246EF4646E19036986D72BA4B45415C(float Ratio);
    void LogicTrigger();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GPE_Window_100x160(int32 EntryPoint);
}; // Size: 0x25A

#endif
