#ifndef UE4SS_SDK_Seq_Show_Obj_ClubStreet_HPP
#define UE4SS_SDK_Seq_Show_Obj_ClubStreet_HPP

class ASeq_Show_Obj_ClubStreet_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Set_ClubStreet_Part2;                                                        // 0x0270 (size: 0x1)
    bool HasUpdatedMetState;                                                          // 0x0271 (size: 0x1)
    class ASeq_StreetSweeper_C* Seq_Sweeper;                                          // 0x0278 (size: 0x8)
    class ABP_DoorWindowBase_C* WindowToClub;                                         // 0x0280 (size: 0x8)
    TArray<class AActor*> Obj_ToShow;                                                 // 0x0288 (size: 0x10)
    TArray<class ABP_Droid_C*> Droid Street Dancer V3;                                // 0x0298 (size: 0x10)
    TArray<class AActor*> Obj_ToHide;                                                 // 0x02A8 (size: 0x10)
    class ASEQ_deactivateSentinel_C* Seq_Sentinel_Residence;                          // 0x02B8 (size: 0x8)

    void OnStartSequence();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Seq_Show_Obj_ClubStreet(int32 EntryPoint);
}; // Size: 0x2C0

#endif
