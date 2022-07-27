#ifndef UE4SS_SDK_LOOT_Tape_HPP
#define UE4SS_SDK_LOOT_Tape_HPP

class ALOOT_Tape_C : public AActor
{
    class USaveComponent* Save;
    class UStaticMeshComponent* StaticMesh;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class USceneComponent* DefaultSceneRoot;

};

#endif
