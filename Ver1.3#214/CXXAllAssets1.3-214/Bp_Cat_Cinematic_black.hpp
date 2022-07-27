#ifndef UE4SS_SDK_Bp_Cat_Cinematic_black_HPP
#define UE4SS_SDK_Bp_Cat_Cinematic_black_HPP

class ABp_Cat_Cinematic_black_C : public AActor
{
    class USkeletalMeshComponent* SKM_Cat;                                            // 0x0228 (size: 0x8)
    class USkeletalMeshComponent* SKM_Backpack;                                       // 0x0230 (size: 0x8)
    class UGFurComponent* GFur;                                                       // 0x0238 (size: 0x8)
    bool BackPack?;                                                                   // 0x0240 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x241

#endif
