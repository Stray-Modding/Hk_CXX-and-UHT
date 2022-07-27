#ifndef UE4SS_SDK_Dial_MomoDoor_HPP
#define UE4SS_SDK_Dial_MomoDoor_HPP

class ADial_MomoDoor_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool DoorExploded;                                                                // 0x0340 (size: 0x1)
    class ASEQ_MomoMainDoor_C* seq momo main door;                                    // 0x0348 (size: 0x8)
    bool HoldingDoor;                                                                 // 0x0350 (size: 0x1)
    bool CatOnBarrel;                                                                 // 0x0351 (size: 0x1)
    class AActor* Chain01;                                                            // 0x0358 (size: 0x8)
    class AActor* Chain02;                                                            // 0x0360 (size: 0x8)
    class ACameraActor* Camera;                                                       // 0x0368 (size: 0x8)
    class AActor* OrientCameraPos;                                                    // 0x0370 (size: 0x8)
    class AActor* DoorCollision;                                                      // 0x0378 (size: 0x8)
    class AActor* DronePos_LastLine;                                                  // 0x0380 (size: 0x8)

    void LogicTrigger();
    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Dial_MomoDoor(int32 EntryPoint);
}; // Size: 0x388

#endif
