#ifndef UE4SS_SDK_BP_Props_Throwable_HPP
#define UE4SS_SDK_BP_Props_Throwable_HPP

class ABP_Props_Throwable_C : public ABP_props_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UAnimSequence* CatAnimationOnHit;                                           // 0x0278 (size: 0x8)
    class ABP_CatPawn_C* BP_CatPawn_Hit;                                              // 0x0280 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Props_Throwable(int32 EntryPoint);
}; // Size: 0x288

#endif
