#ifndef UE4SS_SDK_BTT_Zurg_ReturnToZone_HPP
#define UE4SS_SDK_BTT_Zurg_ReturnToZone_HPP

class UBTT_Zurg_ReturnToZone_C : public UBTT_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector ZoneMoveToLocation;
    float ReMoveToZoneDelay;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTT_Zurg_ReturnToZone(int32 EntryPoint);
};

#endif
