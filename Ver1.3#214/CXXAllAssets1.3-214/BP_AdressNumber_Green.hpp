#ifndef UE4SS_SDK_BP_AdressNumber_Green_HPP
#define UE4SS_SDK_BP_AdressNumber_Green_HPP

class ABP_AdressNumber_Green_C : public AActor
{
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    int32 Nmb_Vertical;                                                               // 0x0240 (size: 0x4)
    int32 Nmb_Horizontal;                                                             // 0x0244 (size: 0x4)
    int32 Number;                                                                     // 0x0248 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x24C

#endif
