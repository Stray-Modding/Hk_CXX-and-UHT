#ifndef UE4SS_SDK_BP_ZurgZone_HPP
#define UE4SS_SDK_BP_ZurgZone_HPP

class ABP_ZurgZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* TextRender;
    class UBillboardComponent* ZurgZoneBillboard;
    class UBoxComponent* ZurgZone_Box;
    class USphereComponent* ZurgZone_Sphere;
    class USceneComponent* Scene;
    TArray<class ABP_Zurg_Interest_Zone_C*> ZurgInterestZone;
    bool bIsBox;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ZurgZone(int32 EntryPoint);
};

#endif
