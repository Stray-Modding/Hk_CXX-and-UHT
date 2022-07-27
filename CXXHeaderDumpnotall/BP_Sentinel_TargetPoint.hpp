#ifndef UE4SS_SDK_BP_Sentinel_TargetPoint_HPP
#define UE4SS_SDK_BP_Sentinel_TargetPoint_HPP

class ABP_Sentinel_TargetPoint_C : public ATargetPoint
{
    float ScanAngle;
    float TimePerScan;
    int32 ScanCount;
    float TimeToWaitBetweenScan;

};

#endif
