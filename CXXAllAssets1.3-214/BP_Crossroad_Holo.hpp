#ifndef UE4SS_SDK_BP_Crossroad_Holo_HPP
#define UE4SS_SDK_BP_Crossroad_Holo_HPP

class ABP_Crossroad_Holo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Battery;                                              // 0x0230 (size: 0x8)
    class USceneComponent* Pivot_Battery;                                             // 0x0238 (size: 0x8)
    class USkeletalMeshComponent* Body_Worker;                                        // 0x0240 (size: 0x8)
    class USceneComponent* Pivot_Worker;                                              // 0x0248 (size: 0x8)
    class UArrowComponent* Direction_ShopStreet;                                      // 0x0250 (size: 0x8)
    class UArrowComponent* Direction_Elevator;                                        // 0x0258 (size: 0x8)
    class UArrowComponent* Direction_Residence;                                       // 0x0260 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0268 (size: 0x8)
    class UStaticMeshComponent* PlazaHologram_Cone_B;                                 // 0x0270 (size: 0x8)
    class USceneComponent* Cop;                                                       // 0x0278 (size: 0x8)
    class USceneComponent* DJ;                                                        // 0x0280 (size: 0x8)
    class USceneComponent* Worker;                                                    // 0x0288 (size: 0x8)
    class USceneComponent* Talk;                                                      // 0x0290 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0298 (size: 0x8)
    class USkeletalMeshComponent* Body_DJ;                                            // 0x02A0 (size: 0x8)
    class USceneComponent* DJ_Pivot;                                                  // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* E;                                                    // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* e1;                                                   // 0x02B8 (size: 0x8)
    class USceneComponent* Pivot_Club_Sign;                                           // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x02C8 (size: 0x8)
    class USceneComponent* Pivot_Talk_Text;                                           // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Cube3;                                                // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Cube2;                                                // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* Plane7;                                               // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* Plane6;                                               // 0x0300 (size: 0x8)
    class UStaticMeshComponent* Plane5;                                               // 0x0308 (size: 0x8)
    class UStaticMeshComponent* Plane4;                                               // 0x0310 (size: 0x8)
    class UStaticMeshComponent* Plane3;                                               // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Plane2;                                               // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0330 (size: 0x8)
    class USceneComponent* Pivot_Neco_Text;                                           // 0x0338 (size: 0x8)
    class UStaticMeshComponent* Helmet_Worker;                                        // 0x0340 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0348 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0350 (size: 0x8)
    class UStaticMeshComponent* Zbir_stick;                                           // 0x0358 (size: 0x8)
    class USceneComponent* Pivot_Cop_Text;                                            // 0x0360 (size: 0x8)
    class USkeletalMeshComponent* Body_Talk;                                          // 0x0368 (size: 0x8)
    class USkeletalMeshComponent* Body_Cop;                                           // 0x0370 (size: 0x8)
    class USkeletalMeshComponent* head_Talk;                                          // 0x0378 (size: 0x8)
    class USkeletalMeshComponent* Zbir_Cloth;                                         // 0x0380 (size: 0x8)
    class USkeletalMeshComponent* Zbir_Head;                                          // 0x0388 (size: 0x8)
    class USkeletalMeshComponent* Vest_Worker;                                        // 0x0390 (size: 0x8)
    class USkeletalMeshComponent* head_Worker;                                        // 0x0398 (size: 0x8)
    TEnumAsByte<E_CrossroadHoloState> Crossroad_State;                                // 0x03A0 (size: 0x1)
    class UAnimSequenceBase* Anim_Worker;                                             // 0x03A8 (size: 0x8)
    class UAnimSequenceBase* Current_Anim_Cop;                                        // 0x03B0 (size: 0x8)
    TArray<class UAnimSequenceBase*> Anim_Talk;                                       // 0x03B8 (size: 0x10)
    class ABP_CatPawn_C* cat;                                                         // 0x03C8 (size: 0x8)
    float Radiustest_BaseValue;                                                       // 0x03D0 (size: 0x4)
    float Radiustest;                                                                 // 0x03D4 (size: 0x4)
    float Distance_Cat_Holo;                                                          // 0x03D8 (size: 0x4)
    bool Cat_is_near;                                                                 // 0x03DC (size: 0x1)
    bool Cat_is_near_Old;                                                             // 0x03DD (size: 0x1)
    FRotator StartRot;                                                                // 0x03E0 (size: 0xC)
    bool turn toward cat;                                                             // 0x03EC (size: 0x1)
    int32 Select_Talk_Anim;                                                           // 0x03F0 (size: 0x4)
    int32 Select_Talk_Anim_old;                                                       // 0x03F4 (size: 0x4)
    int32 Count;                                                                      // 0x03F8 (size: 0x4)
    TArray<class AActor*> ActorsInZone;                                               // 0x0400 (size: 0x10)
    class AActor* ActorToFollow;                                                      // 0x0410 (size: 0x8)
    FRotator PreviousLerpRot_Worker;                                                  // 0x0418 (size: 0xC)
    int32 RotationCount_Worker;                                                       // 0x0424 (size: 0x4)
    FTransform TransWorker;                                                           // 0x0430 (size: 0x30)

    void GetArrowDirectionZ(float& Residence Z, float& Elevator Z, float& Shop Street Z);
    void GetClosestActor(TArray<class AActor*>& Array, class AActor*& ClosestActor, float& ClosestDistanceReturned);
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA49C89300();
    void Tick_6246EF4646E19036986D72BA49C89300(float Ratio);
    void Complete_6246EF4646E19036986D72BA9CDAEF0D();
    void Tick_6246EF4646E19036986D72BA9CDAEF0D(float Ratio);
    void Complete_6246EF4646E19036986D72BA15E85EAF();
    void Tick_6246EF4646E19036986D72BA15E85EAF(float Ratio);
    void Complete_6246EF4646E19036986D72BADD2F532B();
    void Tick_6246EF4646E19036986D72BADD2F532B(float Ratio);
    void Complete_6246EF4646E19036986D72BAC0FAC7DA();
    void Tick_6246EF4646E19036986D72BAC0FAC7DA(float Ratio);
    void Complete_6246EF4646E19036986D72BA9F96966F();
    void Tick_6246EF4646E19036986D72BA9F96966F(float Ratio);
    void Complete_6246EF4646E19036986D72BAF2E99352();
    void Tick_6246EF4646E19036986D72BAF2E99352(float Ratio);
    void Complete_6246EF4646E19036986D72BA25AA9C7E();
    void Tick_6246EF4646E19036986D72BA25AA9C7E(float Ratio);
    void Complete_6246EF4646E19036986D72BAC0DF859D();
    void Tick_6246EF4646E19036986D72BAC0DF859D(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_Crossroad_Holo_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void PlayCopAnim(class UAnimationAsset* NewAnimToPlay, bool bLooping);
    void Switch_Crossroad_Holo_State(TEnumAsByte<E_CrossroadHoloState> New_Crossroad_State);
    void LogicTrigger();
    void PlayWorkerAnim(class UAnimationAsset* NewAnimToPlay, bool bLooping);
    void BndEvt__BP_Crossroad_Holo_Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Crossroad_Holo_Sphere1_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Crossroad_Holo(int32 EntryPoint);
}; // Size: 0x460

#endif
