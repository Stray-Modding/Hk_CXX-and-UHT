#ifndef UE4SS_SDK_BP_ZurgZone_HPP
#define UE4SS_SDK_BP_ZurgZone_HPP

class ABP_ZurgZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0230 (size: 0x8)
    class UBillboardComponent* ZurgZoneBillboard;                                     // 0x0238 (size: 0x8)
    class UBoxComponent* ZurgZone_Box;                                                // 0x0240 (size: 0x8)
    class USphereComponent* ZurgZone_Sphere;                                          // 0x0248 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0250 (size: 0x8)
    TArray<class ABP_Zurg_Interest_Zone_C*> ZurgInterestZone;                         // 0x0258 (size: 0x10)
    bool bIsBox;                                                                      // 0x0268 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ZurgZone(int32 EntryPoint);
}; // Size: 0x269

#endif
