#ifndef UE4SS_SDK_BP_BOOK_Physic_02_HPP
#define UE4SS_SDK_BP_BOOK_Physic_02_HPP

class ABP_BOOK_Physic_02_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USplineRailComponent* SplineRail;
    class UStaticMeshComponent* Book_21;
    class UStaticMeshComponent* Book_20;
    class UStaticMeshComponent* Book_19;
    class UStaticMeshComponent* Book_18;
    class UStaticMeshComponent* Book_17;
    class UStaticMeshComponent* Book_017;
    class UStaticMeshComponent* Book_016;
    class UStaticMeshComponent* Book_015;
    class UStaticMeshComponent* Book_014;
    class UStaticMeshComponent* Cube;
    class UStaticMeshComponent* Book_15;
    class UStaticMeshComponent* Book_14;
    class UStaticMeshComponent* Book_13;
    class UStaticMeshComponent* Book_12;
    class UStaticMeshComponent* Book_11;
    class UStaticMeshComponent* Book_10;
    class UStaticMeshComponent* Book_02;
    class UStaticMeshComponent* Book_08;
    class UStaticMeshComponent* Book_07;
    class UStaticMeshComponent* Book_06;
    class UStaticMeshComponent* Book_05;
    class UStaticMeshComponent* Book_04;
    class UStaticMeshComponent* Book_03;
    class UStaticMeshComponent* Book_09;
    class UStaticMeshComponent* Book_01;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UStaticMeshComponent*> Book_Array;
    bool Messed;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BeforeCatExited(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void AfterCatEntered(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ExecuteUbergraph_BP_BOOK_Physic_02(int32 EntryPoint);
};

#endif
