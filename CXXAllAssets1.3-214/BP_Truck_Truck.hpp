#ifndef UE4SS_SDK_BP_Truck_Truck_HPP
#define UE4SS_SDK_BP_Truck_Truck_HPP

class ABP_Truck_Truck_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Cube9;                                                // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0248 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Cube8;                                                // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Cube7;                                                // 0x0260 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Cube2;                                                // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Cube6;                                                // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Cube3;                                                // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Cube5;                                                // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Cube4;                                                // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Scaffold_WoodPlank_b;                                 // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Cardboard_8;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Cardboard_7;                                          // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Cardboard_6;                                          // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Cardboard_5;                                          // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Cardboard_4;                                          // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Cardboard_3;                                          // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Cardboard_2;                                          // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Cardboard_1;                                          // 0x02E8 (size: 0x8)
    class UMovingActorComponent* MovingActor;                                         // 0x02F0 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* Tarp_Close;                                           // 0x0300 (size: 0x8)
    class UStaticMeshComponent* Truck_Uppart;                                         // 0x0308 (size: 0x8)
    class UStaticMeshComponent* Tarp_Frame;                                           // 0x0310 (size: 0x8)
    class UStaticMeshComponent* Tarp_Open;                                            // 0x0318 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0320 (size: 0x8)
    bool Tarp_Open*;                                                                  // 0x0328 (size: 0x1)
    bool Tarp_Frame*;                                                                 // 0x0329 (size: 0x1)
    bool Truck_Uppart*;                                                               // 0x032A (size: 0x1)
    bool Tarp_Close*;                                                                 // 0x032B (size: 0x1)
    bool motorOn;                                                                     // 0x032C (size: 0x1)
    class UMaterialInstanceDynamic* Truck_Mat_inst;                                   // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Truck_Truck(int32 EntryPoint);
}; // Size: 0x338

#endif
