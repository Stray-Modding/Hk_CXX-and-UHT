#ifndef UE4SS_SDK_Dial_EngineerSubwayFixed_HPP
#define UE4SS_SDK_Dial_EngineerSubwayFixed_HPP

class ADial_EngineerSubwayFixed_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ACameraActor* CamCockpit;                                                   // 0x0340 (size: 0x8)
    class ACameraActor* CamSubway;                                                    // 0x0348 (size: 0x8)
    class ACameraActor* CamFlyer;                                                     // 0x0350 (size: 0x8)
    bool EnergyPlaced;                                                                // 0x0358 (size: 0x1)
    class ABP_Droid_C* DroidEngineer;                                                 // 0x0360 (size: 0x8)
    class AActor* CatInitPos;                                                         // 0x0368 (size: 0x8)
    bool WaitForPass;                                                                 // 0x0370 (size: 0x1)
    class AActor* fxpos;                                                              // 0x0378 (size: 0x8)
    class ABP_base_LightRealTime_C* light1;                                           // 0x0380 (size: 0x8)
    class ABP_base_LightRealTime_C* light1_0;                                         // 0x0388 (size: 0x8)
    class AActor* fxpos_0;                                                            // 0x0390 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void StartCinéSubwayFirstFind();
    void ReceiveBeginPlay();
    void CineStartMetro();
    void LogicTrigger();
    void ExecuteUbergraph_Dial_EngineerSubwayFixed(int32 EntryPoint);
}; // Size: 0x398

#endif
