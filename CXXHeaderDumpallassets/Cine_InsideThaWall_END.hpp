#ifndef UE4SS_SDK_Cine_InsideThaWall_END_HPP
#define UE4SS_SDK_Cine_InsideThaWall_END_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_SpawnProps_cineintro_C* BP_SpawnProps_cineintro);
    void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_SpawnProps_cineintro_C* BP_SpawnProps_cineintro);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_SpawnProps_cineintro_C* BP_SpawnProps_cineintro);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_SpawnProps_cineintro_C* BP_SpawnProps_cineintro);
    void BP_SpawnProps_cineintro_Event_0(class ABP_SpawnProps_cineintro_C* BP_SpawnProps_cineintro);
    void BP_SpawnProps_cineintro_Event_1(class ABP_SpawnProps_cineintro_C* BP_SpawnProps_cineintro);
    void BP_SpawnProps_cineintro_Event_2(class ABP_SpawnProps_cineintro_C* BP_SpawnProps_cineintro);
    void BP_SpawnProps_cineintro_Event_3(class ABP_SpawnProps_cineintro_C* BP_SpawnProps_cineintro);
    void BP_SpawnProps_cineintro_Event_4(class ABP_SpawnProps_cineintro_C* BP_SpawnProps_cineintro);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x40

#endif
