#ifndef UE4SS_SDK_Fan_02_HPP
#define UE4SS_SDK_Fan_02_HPP

class AFan_02_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Fan02_c;                                              // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Fan02_d;                                              // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Fan02_b;                                              // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Fan02_a;                                              // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Fan_02(int32 EntryPoint);
}; // Size: 0x260

#endif
