#ifndef UE4SS_SDK_BP_Sentinel_TargetPoint_HPP
#define UE4SS_SDK_BP_Sentinel_TargetPoint_HPP

class ABP_Sentinel_TargetPoint_C : public ATargetPoint
{
    float ScanAngle;                                                                  // 0x0228 (size: 0x4)
    float TimePerScan;                                                                // 0x022C (size: 0x4)
    int32 ScanCount;                                                                  // 0x0230 (size: 0x4)
    float TimeToWaitBetweenScan;                                                      // 0x0234 (size: 0x4)

}; // Size: 0x238

#endif
