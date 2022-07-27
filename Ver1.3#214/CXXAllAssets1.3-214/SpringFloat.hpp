#ifndef UE4SS_SDK_SpringFloat_HPP
#define UE4SS_SDK_SpringFloat_HPP

class USpringFloat_C : public UActorComponent
{
    float Current;                                                                    // 0x00B0 (size: 0x4)
    float Target;                                                                     // 0x00B4 (size: 0x4)
    float Stiffness;                                                                  // 0x00B8 (size: 0x4)
    float Damping;                                                                    // 0x00BC (size: 0x4)
    float Velocity;                                                                   // 0x00C0 (size: 0x4)
    float Acceleration;                                                               // 0x00C4 (size: 0x4)
    bool HaveLimits;                                                                  // 0x00C8 (size: 0x1)
    float Min;                                                                        // 0x00CC (size: 0x4)
    float Max;                                                                        // 0x00D0 (size: 0x4)
    float Restitution;                                                                // 0x00D4 (size: 0x4)
    bool clamped;                                                                     // 0x00D8 (size: 0x1)
    float DeltaTime;                                                                  // 0x00DC (size: 0x4)
    bool ConstantDtAcceleration;                                                      // 0x00E0 (size: 0x1)
    float ConstantDT;                                                                 // 0x00E4 (size: 0x4)

    void UpdateSpring(float& bpp__Output_Get__pf);
    void SetCurrentValue(float bpp__newxvalue__pfT);
    void GetCurrentValue(float& bpp__current__pf);
    void AddImpulse(float bpp__Impulse__pf);
}; // Size: 0xE8

#endif
