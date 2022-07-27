#ifndef UE4SS_SDK_BP_WoodSpringOneSideFixed_HPP
#define UE4SS_SDK_BP_WoodSpringOneSideFixed_HPP

class ABP_WoodSpringOneSideFixed_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UEditorTickComponent* EditorTick;                                           // 0x0230 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0238 (size: 0x8)
    class UMovingActorComponent* MovingActor;                                         // 0x0240 (size: 0x8)
    class USpringFloat_C* SpringZ;                                                    // 0x0248 (size: 0x8)
    class USplineMeshComponent* SplineMesh;                                           // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    bool CatIsOnPlateform;                                                            // 0x0260 (size: 0x1)
    float catWeight;                                                                  // 0x0264 (size: 0x4)
    FVector InitLocation;                                                             // 0x0268 (size: 0xC)
    float Length;                                                                     // 0x0274 (size: 0x4)
    float flexibilty;                                                                 // 0x0278 (size: 0x4)
    bool NeedToUpdate;                                                                // 0x027C (size: 0x1)
    class ACatPawn* cat;                                                              // 0x0280 (size: 0x8)

    void WoodNeedUpdate();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__EditorTick_K2Node_ComponentBoundEvent_2_EditorTickSignature__DelegateSignature(float DeltaTime);
    void CatIsOnRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void CatExitRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void UpdateWood();
    void ExecuteUbergraph_BP_WoodSpringOneSideFixed(int32 EntryPoint);
}; // Size: 0x288

#endif
