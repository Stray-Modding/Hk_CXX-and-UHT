#ifndef UE4SS_SDK_BP_pearlcurtain_HPP
#define UE4SS_SDK_BP_pearlcurtain_HPP

class ABP_pearlcurtain_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0230 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0238 (size: 0x8)

    void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_11_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_pearlcurtain(int32 EntryPoint);
}; // Size: 0x240

#endif
