#ifndef UE4SS_SDK_LOOT_LeverArm_HPP
#define UE4SS_SDK_LOOT_LeverArm_HPP

class ALOOT_LeverArm_C : public AActor
{
    class USaveComponent* Save;
    class UStaticMeshComponent* Mural_Switch_lever;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class USceneComponent* DefaultSceneRoot;

};

#endif
