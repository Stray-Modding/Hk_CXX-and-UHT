#ifndef UE4SS_SDK_BP_Props_Throwable_HPP
#define UE4SS_SDK_BP_Props_Throwable_HPP

class ABP_Props_Throwable_C : public ABP_props_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimSequence* CatAnimationOnHit;
    class ABP_CatPawn_C* BP_CatPawn_Hit;

    void ReceiveBeginPlay();
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Props_Throwable(int32 EntryPoint);
};

#endif
