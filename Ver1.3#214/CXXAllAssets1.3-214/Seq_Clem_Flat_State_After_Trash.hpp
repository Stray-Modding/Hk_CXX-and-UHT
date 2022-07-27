#ifndef UE4SS_SDK_Seq_Clem_Flat_State_After_Trash_HPP
#define UE4SS_SDK_Seq_Clem_Flat_State_After_Trash_HPP

class ASeq_Clem_Flat_State_After_Trash_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UActorIdComponent* ActorId;                                                 // 0x0270 (size: 0x8)
    bool isAfterTrash;                                                                // 0x0278 (size: 0x1)
    class AStaticMeshActor* LavaLamp;                                                 // 0x0280 (size: 0x8)
    class AStaticMeshActor* Incense;                                                  // 0x0288 (size: 0x8)
    class AActor* Keys;                                                               // 0x0290 (size: 0x8)
    class AActor* Loot_ToClub;                                                        // 0x0298 (size: 0x8)
    class AActor* Loot_ToClub_Talkable;                                               // 0x02A0 (size: 0x8)
    TArray<class ABP_B12_ClueTalkable_C*> Clues;                                      // 0x02A8 (size: 0x10)

    void OnStartSequence();
    void LogicTrigger();
    void Change col talkable(bool _value);
    void ExecuteUbergraph_Seq_Clem_Flat_State_After_Trash(int32 EntryPoint);
}; // Size: 0x2B8

#endif
