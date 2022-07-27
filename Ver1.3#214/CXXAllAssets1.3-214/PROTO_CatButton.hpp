#ifndef UE4SS_SDK_PROTO_CatButton_HPP
#define UE4SS_SDK_PROTO_CatButton_HPP

class APROTO_CatButton_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    bool Active;                                                                      // 0x0240 (size: 0x1)
    float ActiveTimer;                                                                // 0x0244 (size: 0x4)
    float ClawLength;                                                                 // 0x0248 (size: 0x4)
    class AActor* GrabbedObject;                                                      // 0x0250 (size: 0x8)
    bool IsInGrabTransition;                                                          // 0x0258 (size: 0x1)
    bool IsGrabbingObject;                                                            // 0x0259 (size: 0x1)
    class AActor* ClosestInteractableActor;                                           // 0x0260 (size: 0x8)
    TArray<class AActor*> OverlappingActors;                                          // 0x0268 (size: 0x10)
    float ClosestDistance;                                                            // 0x0278 (size: 0x4)
    class AActor* Feedback;                                                           // 0x0280 (size: 0x8)
    class UAnimSequence* DroidOriginalAnim;                                           // 0x0288 (size: 0x8)
    FVector InitialPos;                                                               // 0x0290 (size: 0xC)
    bool ButtonPressed;                                                               // 0x029C (size: 0x1)
    bool IsHiding;                                                                    // 0x029D (size: 0x1)
    class AActor* ActorUnderInteraction;                                              // 0x02A0 (size: 0x8)
    bool IsInCatSpot;                                                                 // 0x02A8 (size: 0x1)
    bool IsInBlockingCatSpot;                                                         // 0x02A9 (size: 0x1)
    float SpawnerOffset;                                                              // 0x02AC (size: 0x4)
    float delayBeforeCancelCatMovement;                                               // 0x02B0 (size: 0x4)
    bool catMovementDone;                                                             // 0x02B4 (size: 0x1)
    FPROTO_CatButton_COnCatGrab OnCatGrab;                                            // 0x02B8 (size: 0x10)
    void OnCatGrab(class AActor* GrabbedObject);
    FPROTO_CatButton_COnCatRelease OnCatRelease;                                      // 0x02C8 (size: 0x10)
    void OnCatRelease(class AActor* ActorReleased);
    class UCOMP_CatButtonGeneric_C* CompCatButtonGeneric;                             // 0x02D8 (size: 0x8)

    void GetCatButtonObjectType(class AActor* Actor, TEnumAsByte<ENUM_CatButtonObjects>& ObjectType);
    void DetectClosestActorInFrontOfZeCat(class AActor*& ClosestActor);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnButtonPressed();
    void Release grabbed object();
    void GetOutOfCatSpot();
    void ExecuteUbergraph_PROTO_CatButton(int32 EntryPoint);
    void OnCatRelease__DelegateSignature(class AActor* ActorReleased);
    void OnCatGrab__DelegateSignature(class AActor* GrabbedObject);
}; // Size: 0x2E0

#endif
