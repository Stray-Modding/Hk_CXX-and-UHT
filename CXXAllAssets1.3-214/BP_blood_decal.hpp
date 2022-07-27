#ifndef UE4SS_SDK_BP_blood_decal_HPP
#define UE4SS_SDK_BP_blood_decal_HPP

class ABP_blood_decal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float Timeline_0_NewTrack_0_DDD792E04B827C04E67252A58D303D38;                     // 0x0248 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_DDD792E04B827C04E67252A58D303D38; // 0x024C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0250 (size: 0x8)
    float randomscale;                                                                // 0x0258 (size: 0x4)
    class UMaterialInstanceDynamic* Blood DynaMat;                                    // 0x0260 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SpawnDecal(float Delay);
    void ExecuteUbergraph_BP_blood_decal(int32 EntryPoint);
}; // Size: 0x268

#endif
