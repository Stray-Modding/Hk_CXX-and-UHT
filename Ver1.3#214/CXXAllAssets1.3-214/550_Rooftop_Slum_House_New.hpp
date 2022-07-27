#ifndef UE4SS_SDK_550_Rooftop_Slum_House_New_HPP
#define UE4SS_SDK_550_Rooftop_Slum_House_New_HPP

class A550_Rooftop_Slum_House_New_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_PROXY_SM_MERGED_550_Rooftop_Slum_House_New;        // 0x0230 (size: 0x8)
    class UStaticMeshComponent* SM_MERGED_550_Rooftop_Slum_House_New_RoofCol;         // 0x0238 (size: 0x8)
    class UStaticMeshComponent* SM_MERGED_550_Rooftop_Slum_House_New_BatCol;          // 0x0240 (size: 0x8)
    class UStaticMeshComponent* SM_MERGED_550_Rooftop_Slum_House_New;                 // 0x0248 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0250 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_550_Rooftop_Slum_House_New(int32 EntryPoint);
}; // Size: 0x258

#endif
