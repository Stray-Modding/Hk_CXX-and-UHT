#ifndef UE4SS_SDK_BP_Candle_C_HPP
#define UE4SS_SDK_BP_Candle_C_HPP

class ABP_Candle_C_C : public ABP_base_Light_C
{
    class UStaticMeshComponent* Candle_C_Flame;                                       // 0x02B8 (size: 0x8)
    bool Flame_Toggle;                                                                // 0x02C0 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x2C1

#endif
