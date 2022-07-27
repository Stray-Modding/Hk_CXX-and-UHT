#ifndef UE4SS_SDK_SlumHouse_Balcony_02_HPP
#define UE4SS_SDK_SlumHouse_Balcony_02_HPP

class ASlumHouse_Balcony_02_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_PROXY_SM_MERGED_SlumHouse_Balcony_02_2;            // 0x0230 (size: 0x8)
    class UStaticMeshComponent* SM_MERGED_SlumHouse_Balcony_02_2;                     // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Porchroof_box_small;                                  // 0x0248 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0250 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SlumHouse_Balcony_02(int32 EntryPoint);
}; // Size: 0x258

#endif
