#ifndef UE4SS_SDK_BP_SentinelProjectile_HPP
#define UE4SS_SDK_BP_SentinelProjectile_HPP

class ABP_SentinelProjectile_C : public ASentinelProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* ElectricalVibration;
    class UAudioComponent* ElectricalSound;
    class UParticleSystemComponent* TrailParticleExample;
    class UStaticMeshComponent* StaticMesh;
    FVector Impact Point;
    class UPrimitiveComponent* Hit Component;
    class AActor* Hit Actor;

    void Projectile_Snapped_Enter();
    void Projectile_Snapped_Tick(float _dt);
    void Projectile_Snapped_Exit();
    void OnProjectileHit(FHitResult _hitResult);
    void Projectile_Shooted_Enter();
    void Projectile_Shooted_Exit();
    void Projectile_InAir_Enter();
    void Projectile_InAir_Exit();
    void Projectile_InAir_Tick(float _dt);
    void Start ForceFeedback();
    void ExecuteUbergraph_BP_SentinelProjectile(int32 EntryPoint);
};

#endif
