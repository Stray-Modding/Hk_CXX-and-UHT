#ifndef UE4SS_SDK_BP_WoodSpring2SidesFixed_HPP
#define UE4SS_SDK_BP_WoodSpring2SidesFixed_HPP

class ABP_WoodSpring2SidesFixed_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* CreakVibration;                                            // 0x0230 (size: 0x8)
    class UEditorTickComponent* EditorTick;                                           // 0x0238 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0240 (size: 0x8)
    class UMovingActorComponent* MovingActor;                                         // 0x0248 (size: 0x8)
    class USpringFloat_C* SpringZ;                                                    // 0x0250 (size: 0x8)
    class USplineMeshComponent* SplineMesh;                                           // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    bool CatIsOnPlateform;                                                            // 0x0268 (size: 0x1)
    float catWeight;                                                                  // 0x026C (size: 0x4)
    FVector InitLocation;                                                             // 0x0270 (size: 0xC)
    float Length;                                                                     // 0x027C (size: 0x4)
    float Flexibility;                                                                // 0x0280 (size: 0x4)
    bool Debug;                                                                       // 0x0284 (size: 0x1)
    float MaxAcceleration;                                                            // 0x0288 (size: 0x4)
    class ACatPawn* cat;                                                              // 0x0290 (size: 0x8)
    bool NeedToUpdate;                                                                // 0x0298 (size: 0x1)
    bool CustomSpline;                                                                // 0x0299 (size: 0x1)

    void WoodNeedUpdate();
    void BndEvt__EditorTick_K2Node_ComponentBoundEvent_2_EditorTickSignature__DelegateSignature(float DeltaTime);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void CalculateCatForce();
    void ShowDebug();
    void CatIsOnRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void CatExitRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void UpdateWood();
    void ExecuteUbergraph_BP_WoodSpring2SidesFixed(int32 EntryPoint);
}; // Size: 0x29A

#endif
