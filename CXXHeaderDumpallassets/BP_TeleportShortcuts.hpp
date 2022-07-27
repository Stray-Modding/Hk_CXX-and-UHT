#ifndef UE4SS_SDK_BP_TeleportShortcuts_HPP
#define UE4SS_SDK_BP_TeleportShortcuts_HPP

class ABP_TeleportShortcuts_C : public ATrigger_Teleport_C
{
    class UArrowComponent* tppos;                                                     // 0x0268 (size: 0x8)
    class UArrowComponent* MoveOutPos;                                                // 0x0270 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Metel_vent_medium;                                    // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Coll;                                                 // 0x0290 (size: 0x8)
    class UChildActorComponent* BP_CameraThirdPersonModifierZone;                     // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Air_Grid_B;                                           // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

#endif
