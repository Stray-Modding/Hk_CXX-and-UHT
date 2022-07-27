#ifndef UE4SS_SDK_BP_DroidFall_HPP
#define UE4SS_SDK_BP_DroidFall_HPP

class ABP_DroidFall_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* TouchVibe;                                                 // 0x0230 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0248 (size: 0x8)
    float PercentageOfFallPerStumble;                                                 // 0x0250 (size: 0x4)
    float DelayStayOnGround;                                                          // 0x0254 (size: 0x4)
    float DelayCooldown;                                                              // 0x0258 (size: 0x4)
    bool GetAngry;                                                                    // 0x025C (size: 0x1)
    float AngryDuration;                                                              // 0x0260 (size: 0x4)
    class UAnimSequence* Previous IDle;                                               // 0x0268 (size: 0x8)
    bool PreventFall;                                                                 // 0x0270 (size: 0x1)

    void UserConstructionScript();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_DroidFall(int32 EntryPoint);
}; // Size: 0x271

#endif
