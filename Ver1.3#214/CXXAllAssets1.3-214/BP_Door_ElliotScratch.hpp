#ifndef UE4SS_SDK_BP_Door_ElliotScratch_HPP
#define UE4SS_SDK_BP_Door_ElliotScratch_HPP

class ABP_Door_ElliotScratch_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UBoxComponent* Safety_Box;                                                  // 0x0238 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0240 (size: 0x8)
    class UChildActorComponent* BP_Random_postit_02;                                  // 0x0248 (size: 0x8)
    class UChildActorComponent* BP_Random_postit_01;                                  // 0x0250 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Poster01_02;                                          // 0x0260 (size: 0x8)
    class UTalkableComponent* Door_Sign_Talkable;                                     // 0x0268 (size: 0x8)
    class UArrowComponent* Safety_CatPoint;                                           // 0x0270 (size: 0x8)
    class USphereComponent* DetectCatSphere;                                          // 0x0278 (size: 0x8)
    class UStaticMeshComponent* DoorCol;                                              // 0x0280 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0288 (size: 0x8)
    class UArrowComponent* ScratchPointInside;                                        // 0x0290 (size: 0x8)
    class UArrowComponent* ScratchPointOutside;                                       // 0x0298 (size: 0x8)
    class UCOMP_CatScratchableComponent_C* COMP_CatScratchableComponent;              // 0x02A0 (size: 0x8)
    class USkeletalMeshComponent* Door_Rig;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    float OpenDuration;                                                               // 0x02B8 (size: 0x4)
    class ADial_Translate_programmer_C* Elliot_Door_TRANSLATE;                        // 0x02C0 (size: 0x8)
    class ABP_Droid_C* Droid_Nestor;                                                  // 0x02C8 (size: 0x8)
    class AActor* DroidSleepLook;                                                     // 0x02D0 (size: 0x8)
    bool IsDoorScratchEnabled;                                                        // 0x02D8 (size: 0x1)
    bool FromInside;                                                                  // 0x02D9 (size: 0x1)
    bool IsDroidOpeningDoor;                                                          // 0x02DA (size: 0x1)
    bool isDoorMoving;                                                                // 0x02DB (size: 0x1)
    bool IsSleeping;                                                                  // 0x02DC (size: 0x1)
    bool InitialValueForCheck;                                                        // 0x02DD (size: 0x1)
    class AActor* Cat_Move_To;                                                        // 0x02E0 (size: 0x8)
    class ABP_SimpleLooperHolder_C* BP_SnoreLooper;                                   // 0x02E8 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_1_OnScratched__DelegateSignature(class UCOMP_CatScratchableComponent_C* Scratchable);
    void DroidOpenDoor();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Enable(bool IsEnabled);
    void BndEvt__BP_Door_ElliotScratch_Safety_Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Nestor_WakeUp();
    void Nestor_GoSleep();
    void BndEvt__BP_Door_ElliotScratch_DetectCatSphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Door_ElliotScratch(int32 EntryPoint);
}; // Size: 0x2F0

#endif
