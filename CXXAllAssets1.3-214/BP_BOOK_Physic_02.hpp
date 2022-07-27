#ifndef UE4SS_SDK_BP_BOOK_Physic_02_HPP
#define UE4SS_SDK_BP_BOOK_Physic_02_HPP

class ABP_BOOK_Physic_02_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Book_21;                                              // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Book_20;                                              // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Book_19;                                              // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Book_18;                                              // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Book_17;                                              // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Book_017;                                             // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Book_016;                                             // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Book_015;                                             // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Book_014;                                             // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Book_15;                                              // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Book_14;                                              // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Book_13;                                              // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Book_12;                                              // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Book_11;                                              // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Book_10;                                              // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Book_02;                                              // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Book_08;                                              // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Book_07;                                              // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Book_06;                                              // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Book_05;                                              // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Book_04;                                              // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Book_03;                                              // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* Book_09;                                              // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* Book_01;                                              // 0x02F8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0300 (size: 0x8)
    TArray<class UStaticMeshComponent*> Book_Array;                                   // 0x0308 (size: 0x10)
    bool Messed;                                                                      // 0x0318 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BeforeCatExited(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void AfterCatEntered(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ExecuteUbergraph_BP_BOOK_Physic_02(int32 EntryPoint);
}; // Size: 0x319

#endif
