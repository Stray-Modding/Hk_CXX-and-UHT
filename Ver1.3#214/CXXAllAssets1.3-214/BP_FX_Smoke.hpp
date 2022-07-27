#ifndef UE4SS_SDK_BP_FX_Smoke_HPP
#define UE4SS_SDK_BP_FX_Smoke_HPP

class ABP_FX_Smoke_C : public AActor
{
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0228 (size: 0x8)
    FLinearColor Mat_Color;                                                           // 0x0230 (size: 0x10)
    float Mat_Opacity;                                                                // 0x0240 (size: 0x4)
    bool On/Off;                                                                      // 0x0244 (size: 0x1)

}; // Size: 0x245

#endif
