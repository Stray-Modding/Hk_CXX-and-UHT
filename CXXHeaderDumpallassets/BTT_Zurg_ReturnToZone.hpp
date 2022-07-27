#ifndef UE4SS_SDK_BTT_Zurg_ReturnToZone_HPP
#define UE4SS_SDK_BTT_Zurg_ReturnToZone_HPP

class UBTT_Zurg_ReturnToZone_C : public UBTT_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    FVector ZoneMoveToLocation;                                                       // 0x00C8 (size: 0xC)
    float ReMoveToZoneDelay;                                                          // 0x00D4 (size: 0x4)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTT_Zurg_ReturnToZone(int32 EntryPoint);
}; // Size: 0xD8

#endif
