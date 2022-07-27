#ifndef UE4SS_SDK_BP_lockable_door1_HPP
#define UE4SS_SDK_BP_lockable_door1_HPP

class ABP_lockable_door1_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Cube3;                                                // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Cube2;                                                // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0248 (size: 0x8)
    class UStaticMeshComponent* cadre_porte;                                          // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Porte_movable;                                        // 0x0258 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0260 (size: 0x8)
    float Timeline_0_delay_938D04784B68E25A0720D6BF3C30DB67;                          // 0x0268 (size: 0x4)
    float Timeline_0_rotation_938D04784B68E25A0720D6BF3C30DB67;                       // 0x026C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_938D04784B68E25A0720D6BF3C30DB67; // 0x0270 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0278 (size: 0x8)
    FRotator Rotation_init;                                                           // 0x0280 (size: 0xC)
    float end_rotation;                                                               // 0x028C (size: 0x4)
    bool DoorOpen;                                                                    // 0x0290 (size: 0x1)
    bool StartOpen;                                                                   // 0x0291 (size: 0x1)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Event_Open_Door();
    void Event_Close_Door();
    void LogicTrigger();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_lockable_door1(int32 EntryPoint);
}; // Size: 0x292

#endif
