#ifndef UE4SS_SDK_Dial_ManHoleGuy_HPP
#define UE4SS_SDK_Dial_ManHoleGuy_HPP

class ADial_ManHoleGuy_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool Talked;                                                                      // 0x0340 (size: 0x1)
    class ACameraActor* CameraBackDroid;                                              // 0x0348 (size: 0x8)
    class ACameraActor* CameraBackCat;                                                // 0x0350 (size: 0x8)
    class ACameraActor* CameraLogo;                                                   // 0x0358 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0360 (size: 0x8)
    class AActor* SecondCapuchon;                                                     // 0x0368 (size: 0x8)
    class AActor* FirstCapuchon;                                                      // 0x0370 (size: 0x8)
    class AActor* tppos;                                                              // 0x0378 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_ManHoleGuy(int32 EntryPoint);
}; // Size: 0x380

#endif
