#ifndef UE4SS_SDK_BP_CatFollowModifier_HPP
#define UE4SS_SDK_BP_CatFollowModifier_HPP

class ABP_CatFollowModifier_C : public AActor
{
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    class ABP_CatFollow_C* cat;                                                       // 0x0230 (size: 0x8)
    float Distance Min;                                                               // 0x0238 (size: 0x4)
    float Distance Max;                                                               // 0x023C (size: 0x4)
    float Width;                                                                      // 0x0240 (size: 0x4)
    float Radius Approach;                                                            // 0x0244 (size: 0x4)
    float Radius Approach Hysteresis;                                                 // 0x0248 (size: 0x4)
    float Radius Run;                                                                 // 0x024C (size: 0x4)

}; // Size: 0x250

#endif
