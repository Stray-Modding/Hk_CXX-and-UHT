#ifndef UE4SS_SDK_TrashContainer_Animated_HPP
#define UE4SS_SDK_TrashContainer_Animated_HPP

class ATrashContainer_Animated_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* TrashContainer_DualPart_TrashContainer_couvercle;     // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x0250 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0258 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0260 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0268 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0270 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0278 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0280 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0288 (size: 0x8)
    float Timeline_0_PoubelleClose_090C18044F228BB96C4DA3A8509CC3AD;                  // 0x0290 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_090C18044F228BB96C4DA3A8509CC3AD; // 0x0294 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0298 (size: 0x8)
    FRotator Rotation;                                                                // 0x02A0 (size: 0xC)
    FRotator Base_Rotation;                                                           // 0x02AC (size: 0xC)
    FRotator Rotation_Current;                                                        // 0x02B8 (size: 0xC)
    class UCurveFloat* PoubelleCurve;                                                 // 0x02C8 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void LogicTrigger();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_TrashContainer_Animated(int32 EntryPoint);
}; // Size: 0x2D0

#endif
