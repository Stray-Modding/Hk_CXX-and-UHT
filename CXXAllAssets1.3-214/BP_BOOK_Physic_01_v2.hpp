#ifndef UE4SS_SDK_BP_BOOK_Physic_01_v2_HPP
#define UE4SS_SDK_BP_BOOK_Physic_01_v2_HPP

class ABP_BOOK_Physic_01_v2_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* ImpulsionLocation;                                    // 0x0230 (size: 0x8)
    class UArrowComponent* ImpulsionPivot;                                            // 0x0238 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0240 (size: 0x8)
    class UBoxComponent* Box Collider;                                                // 0x0248 (size: 0x8)
    class UChildActorComponent* TopBook;                                              // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    bool Messed;                                                                      // 0x0260 (size: 0x1)
    TArray<class ABP_Random_Single_Book_C*> book array;                               // 0x0268 (size: 0x10)
    int32 SetBooks;                                                                   // 0x0278 (size: 0x4)
    FString RandomPileSeed;                                                           // 0x0280 (size: 0x10)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__BP_BOOK_Physic_01_v2_SplineRail_K2Node_ComponentBoundEvent_0_RailCatDelegate__DelegateSignature(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void TriggerBookFall();
    void ExecuteUbergraph_BP_BOOK_Physic_01_v2(int32 EntryPoint);
}; // Size: 0x290

#endif
