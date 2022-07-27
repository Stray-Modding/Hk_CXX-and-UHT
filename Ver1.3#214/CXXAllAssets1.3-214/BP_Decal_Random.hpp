#ifndef UE4SS_SDK_BP_Decal_Random_HPP
#define UE4SS_SDK_BP_Decal_Random_HPP

class ABP_Decal_Random_C : public ADecalActor
{
    FRandomStream Random_Stream;                                                      // 0x0230 (size: 0x8)
    class UMaterialInstance* Decal_Mat_Instance;                                      // 0x0238 (size: 0x8)
    bool Seed;                                                                        // 0x0240 (size: 0x1)
    int32 Nmb_Vertical;                                                               // 0x0244 (size: 0x4)
    int32 Nmb_Horizontal;                                                             // 0x0248 (size: 0x4)
    class UMaterialInstanceDynamic* Dynamic_Mat;                                      // 0x0250 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x258

#endif
