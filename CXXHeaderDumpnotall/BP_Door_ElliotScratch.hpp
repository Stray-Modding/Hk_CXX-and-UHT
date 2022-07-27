#ifndef UE4SS_SDK_BP_Door_ElliotScratch_HPP
#define UE4SS_SDK_BP_Door_ElliotScratch_HPP

class ABP_Door_ElliotScratch_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UBoxComponent* Safety_Box;
    class UDecalComponent* Decal1;
    class UChildActorComponent* BP_Random_postit_02;
    class UChildActorComponent* BP_Random_postit_01;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Poster01_02;
    class UTalkableComponent* Door_Sign_Talkable;
    class UArrowComponent* Safety_CatPoint;
    class USphereComponent* DetectCatSphere;
    class UStaticMeshComponent* DoorCol;
    class UStreamingComponent* Streaming;
    class UArrowComponent* ScratchPointInside;
    class UArrowComponent* ScratchPointOutside;
    class UCOMP_CatScratchableComponent_C* COMP_CatScratchableComponent;
    class USkeletalMeshComponent* Door_Rig;
    class USceneComponent* DefaultSceneRoot;
    float OpenDuration;
    class ADial_Translate_programmer_C* Elliot_Door_TRANSLATE;
    class ABP_Droid_C* Droid_Nestor;
    class AActor* DroidSleepLook;
    bool IsDoorScratchEnabled;
    bool FromInside;
    bool IsDroidOpeningDoor;
    bool isDoorMoving;
    bool IsSleeping;
    bool InitialValueForCheck;
    class AActor* Cat_Move_To;
    class ABP_SimpleLooperHolder_C* BP_SnoreLooper;

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
};

#endif
