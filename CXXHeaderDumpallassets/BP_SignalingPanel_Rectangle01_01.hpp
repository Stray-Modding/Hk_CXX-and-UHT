#ifndef UE4SS_SDK_BP_SignalingPanel_Rectangle01_01_HPP
#define UE4SS_SDK_BP_SignalingPanel_Rectangle01_01_HPP

class ABP_SignalingPanel_Rectangle01_01_C : public AActor
{
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    int32 Nmb_Vertical;                                                               // 0x0238 (size: 0x4)
    int32 Nmb_Horizontal;                                                             // 0x023C (size: 0x4)
    FRandomStream Random_Stream;                                                      // 0x0240 (size: 0x8)
    float Random_0_1;                                                                 // 0x0248 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x24C

#endif
