#ifndef UE4SS_SDK_DeadCity_Zurg_Miko_HPP
#define UE4SS_SDK_DeadCity_Zurg_Miko_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_CatPawn_C* BP_CatPawn);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_CatPawn_C* BP_CatPawn);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_sfx_actorId_pinger_C* BP_Sfx_Actor_Id_Pinger);
    void BP_Sfx_Actor_Id_Pinger_Event_0(class ABP_sfx_actorId_pinger_C* BP_Sfx_Actor_Id_Pinger, FName ActorId);
    void BP_CatPawn_Event_0(class ABP_CatPawn_C* BP_CatPawn, float NewBoundsScale);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x40

#endif
