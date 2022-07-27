#ifndef UE4SS_SDK_BP_Maneki-neko_HPP
#define UE4SS_SDK_BP_Maneki-neko_HPP

class ABP_Maneki-neko_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* NekoArm;                                              // 0x0230 (size: 0x8)
    class UStaticMeshComponent* NekoBody;                                             // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float Pitch;                                                                      // 0x0248 (size: 0x4)
    float Gain;                                                                       // 0x024C (size: 0x4)
    class USoundAttenuation* Attenuation Settings;                                    // 0x0250 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Maneki-neko(int32 EntryPoint);
}; // Size: 0x258

#endif
