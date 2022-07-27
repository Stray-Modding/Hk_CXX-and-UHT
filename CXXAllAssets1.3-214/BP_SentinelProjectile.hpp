#ifndef UE4SS_SDK_BP_SentinelProjectile_HPP
#define UE4SS_SDK_BP_SentinelProjectile_HPP

class ABP_SentinelProjectile_C : public ASentinelProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UAudioComponent* ElectricalVibration;                                       // 0x0308 (size: 0x8)
    class UAudioComponent* ElectricalSound;                                           // 0x0310 (size: 0x8)
    class UParticleSystemComponent* TrailParticleExample;                             // 0x0318 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0320 (size: 0x8)
    FVector Impact Point;                                                             // 0x0328 (size: 0xC)
    class UPrimitiveComponent* Hit Component;                                         // 0x0338 (size: 0x8)
    class AActor* Hit Actor;                                                          // 0x0340 (size: 0x8)

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
}; // Size: 0x348

#endif
