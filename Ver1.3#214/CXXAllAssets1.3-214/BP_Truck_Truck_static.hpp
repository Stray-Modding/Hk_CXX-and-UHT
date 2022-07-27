#ifndef UE4SS_SDK_BP_Truck_Truck_static_HPP
#define UE4SS_SDK_BP_Truck_Truck_static_HPP

class ABP_Truck_Truck_static_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x0238 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0258 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x0260 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0268 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0270 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0280 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0288 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0298 (size: 0x8)
    bool motor_Start_On;                                                              // 0x02A0 (size: 0x1)
    bool motor_Is_On;                                                                 // 0x02A1 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void StartEngine();
    void StopEngine();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Truck_Truck_static(int32 EntryPoint);
}; // Size: 0x2A2

#endif
