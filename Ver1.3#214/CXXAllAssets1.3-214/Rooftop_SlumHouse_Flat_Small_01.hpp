#ifndef UE4SS_SDK_Rooftop_SlumHouse_Flat_Small_01_HPP
#define UE4SS_SDK_Rooftop_SlumHouse_Flat_Small_01_HPP

class ARooftop_SlumHouse_Flat_Small_01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_PROXY_SM_MERGED_Rooftop_SlumHouse_Flat_Small_01_2; // 0x0230 (size: 0x8)
    class UStaticMeshComponent* SM_MERGED_Rooftop_SlumHouse_Flat_Small_01_2;          // 0x0238 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0240 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Rooftop_SlumHouse_Flat_Small_01(int32 EntryPoint);
}; // Size: 0x248

#endif
