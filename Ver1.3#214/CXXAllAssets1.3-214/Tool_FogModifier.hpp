#ifndef UE4SS_SDK_Tool_FogModifier_HPP
#define UE4SS_SDK_Tool_FogModifier_HPP

class ATool_FogModifier_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0230 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0238 (size: 0x8)
    float TimelineBlendFog_NewTrack_0_CA065C3A43FCCBC48A13FE9B349690EB;               // 0x0240 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TimelineBlendFog__Direction_CA065C3A43FCCBC48A13FE9B349690EB; // 0x0244 (size: 0x1)
    class UTimelineComponent* TimelineBlendFog;                                       // 0x0248 (size: 0x8)
    class UExponentialHeightFogComponent* Fog;                                        // 0x0250 (size: 0x8)
    TArray<class ATriggerBox*> TriggerBox;                                            // 0x0258 (size: 0x10)
    int32 Counter;                                                                    // 0x0268 (size: 0x4)
    float BaseFogDensity;                                                             // 0x026C (size: 0x4)
    float TargetFogDensity;                                                           // 0x0270 (size: 0x4)
    float Time;                                                                       // 0x0274 (size: 0x4)

    void UserConstructionScript();
    void TimelineBlendFog__FinishedFunc();
    void TimelineBlendFog__UpdateFunc();
    void ReceiveBeginPlay();
    void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_Tool_FogModifier(int32 EntryPoint);
}; // Size: 0x278

#endif
