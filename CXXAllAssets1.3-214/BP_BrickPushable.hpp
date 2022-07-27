#ifndef UE4SS_SDK_BP_BrickPushable_HPP
#define UE4SS_SDK_BP_BrickPushable_HPP

class ABP_BrickPushable_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class UCOMP_CatPawPushable_C* COMP_CatPawPushable;                                // 0x0248 (size: 0x8)
    class USceneComponent* Feedback;                                                  // 0x0250 (size: 0x8)
    TArray<class AActor*> Brick_Array;                                                // 0x0258 (size: 0x10)
    bool Triggered;                                                                   // 0x0268 (size: 0x1)
    float Force;                                                                      // 0x026C (size: 0x4)
    class AActor* brickToTack;                                                        // 0x0270 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__COMP_CatPawPushable_K2Node_ComponentBoundEvent_0_OnPawPushed__DelegateSignature(class UCOMP_CatPawPushable_C* PawPushableComponent);
    void ExecuteUbergraph_BP_BrickPushable(int32 EntryPoint);
}; // Size: 0x278

#endif
