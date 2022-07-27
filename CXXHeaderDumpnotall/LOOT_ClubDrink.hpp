#ifndef UE4SS_SDK_LOOT_ClubDrink_HPP
#define UE4SS_SDK_LOOT_ClubDrink_HPP

class ALOOT_ClubDrink_C : public AActor
{
    class USaveComponent* Save;
    class UStaticMeshComponent* Cone;
    class UStaticMeshComponent* Club_Glass_Cosmo;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class USceneComponent* DefaultSceneRoot;

};

#endif
