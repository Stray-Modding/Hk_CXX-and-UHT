#ifndef UE4SS_SDK_BP_TruckKey_HPP
#define UE4SS_SDK_BP_TruckKey_HPP

class ABP_TruckKey_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class USpringFloat_C* Ring0_RotX;                                                 // 0x0238 (size: 0x8)
    class USpringFloat_C* PorteCle_Rot;                                               // 0x0240 (size: 0x8)
    class USpringFloat_C* Ring3_Rot;                                                  // 0x0248 (size: 0x8)
    class USpringFloat_C* Ring2_Rot;                                                  // 0x0250 (size: 0x8)
    class USpringFloat_C* Ring1_Rot;                                                  // 0x0258 (size: 0x8)
    class USpringFloat_C* Ring0_RotY;                                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* PorteCle;                                             // 0x0268 (size: 0x8)
    class USceneComponent* PorteCleRoot;                                              // 0x0270 (size: 0x8)
    class UStaticMeshComponent* key_set_07;                                           // 0x0278 (size: 0x8)
    class USceneComponent* Ring_3;                                                    // 0x0280 (size: 0x8)
    class UStaticMeshComponent* key_set_06;                                           // 0x0288 (size: 0x8)
    class USceneComponent* Ring_2;                                                    // 0x0290 (size: 0x8)
    class UStaticMeshComponent* key_set_08;                                           // 0x0298 (size: 0x8)
    class USceneComponent* Ring_1;                                                    // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* key_set_05;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* Ring_0;                                                    // 0x02B0 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x02B8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* key_set_03;                                           // 0x02C8 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x02D0 (size: 0x8)
    bool NeedToUpdate;                                                                // 0x02D8 (size: 0x1)
    float Force;                                                                      // 0x02DC (size: 0x4)
    bool Deactivate;                                                                  // 0x02E0 (size: 0x1)

    void CheckNeedToUpdate();
    void ReceiveTick(float DeltaSeconds);
    void Push_Key();
    void Deactivate_Key();
    void BndEvt__BP_TruckKey_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_TruckKey(int32 EntryPoint);
}; // Size: 0x2E1

#endif
