#ifndef UE4SS_SDK_BP_blood_decal_HPP
#define UE4SS_SDK_BP_blood_decal_HPP

class ABP_blood_decal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UDecalComponent* Decal;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_NewTrack_0_DDD792E04B827C04E67252A58D303D38;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_DDD792E04B827C04E67252A58D303D38;
    class UTimelineComponent* Timeline_0;
    float randomscale;
    class UMaterialInstanceDynamic* Blood DynaMat;

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SpawnDecal(float Delay);
    void ExecuteUbergraph_BP_blood_decal(int32 EntryPoint);
};

#endif
