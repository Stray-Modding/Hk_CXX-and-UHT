#ifndef UE4SS_SDK_BP_splaaaash_death_HPP
#define UE4SS_SDK_BP_splaaaash_death_HPP

class ABP_splaaaash_death_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    float force1;
    float bloodtracedistance;
    class UMaterialInstanceDynamic* dynamat;
    bool Spawned ?;
    int32 Boyocable Number;

    void UserConstructionScript();
    void Force Splash();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_splaaaash_death(int32 EntryPoint);
};

#endif
