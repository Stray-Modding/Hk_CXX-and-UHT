#ifndef UE4SS_SDK_Seq_DroidHeadFall_HPP
#define UE4SS_SDK_Seq_DroidHeadFall_HPP

class ASeq_DroidHeadFall_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ASkeletalMeshActor* DroidMesh;                                              // 0x0270 (size: 0x8)
    class ABP_Props_Grabbable_Droid_Head_C* Head;                                     // 0x0278 (size: 0x8)
    class ABP_SplineRail_C* Rail_head;                                                // 0x0280 (size: 0x8)
    class ABP_SplineRail_C* Rail_Machine;                                             // 0x0288 (size: 0x8)
    bool hasBeenOnheadRail;                                                           // 0x0290 (size: 0x1)
    class ABP_SplineRail_C* BackupRail;                                               // 0x0298 (size: 0x8)

    void BeforeCatExited_Event_0(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void OnStartSequence();
    void AfterCatEntered_Event_0(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void AfterCatEntered_Event_1(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ExecuteUbergraph_Seq_DroidHeadFall(int32 EntryPoint);
}; // Size: 0x2A0

#endif
