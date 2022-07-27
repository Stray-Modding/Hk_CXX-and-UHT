#ifndef UE4SS_SDK_I_sfx_zone_HPP
#define UE4SS_SDK_I_sfx_zone_HPP

class II_sfx_zone_C : public IInterface
{

    void unregister(class UObject* actor linked to the zone);
    void register(class UObject* actor linked to the zone);
    void is discretion zone(bool& is discretion zone);
    void miaou type(TEnumAsByte<E_sfx_miaou>& miaou type);
    void camera value(float& camera value);
    void is cat inside(bool& is cat inside);
}; // Size: 0x28

#endif
