#ifndef UE4SS_SDK_BP_SAS_SafeZone_03_HPP
#define UE4SS_SDK_BP_SAS_SafeZone_03_HPP

class ABP_SAS_SafeZone_03_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0250 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Crackdirt_4m;                                         // 0x0260 (size: 0x8)
    class UStaticMeshComponent* StaticMesh19;                                         // 0x0268 (size: 0x8)
    class UStaticMeshComponent* StaticMesh16;                                         // 0x0270 (size: 0x8)
    class UStaticMeshComponent* StaticMesh27;                                         // 0x0278 (size: 0x8)
    class UStaticMeshComponent* StaticMesh14;                                         // 0x0280 (size: 0x8)
    class UStaticMeshComponent* StaticMesh13;                                         // 0x0288 (size: 0x8)
    class UStaticMeshComponent* StaticMesh34;                                         // 0x0290 (size: 0x8)
    class UStaticMeshComponent* StaticMesh32;                                         // 0x0298 (size: 0x8)
    class UStaticMeshComponent* StaticMesh31;                                         // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh30;                                         // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh29;                                         // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh28;                                         // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh12;                                         // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* WoodPlane09;                                          // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* lockable_door_socle;                                  // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Structure;                                            // 0x02D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02E0 (size: 0x8)
    FRotator Rotation;                                                                // 0x02E8 (size: 0xC)
    FRotator Base_Rotation;                                                           // 0x02F4 (size: 0xC)
    FRotator Rotation_Current;                                                        // 0x0300 (size: 0xC)
    bool Open;                                                                        // 0x030C (size: 0x1)
    bool StartOpen;                                                                   // 0x030D (size: 0x1)

    void ReceiveBeginPlay();
    void LogicTrigger();
    void ExecuteUbergraph_BP_SAS_SafeZone_03(int32 EntryPoint);
}; // Size: 0x30E

#endif
