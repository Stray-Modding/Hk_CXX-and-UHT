#ifndef UE4SS_SDK_SEQ_DestreamJail_HPP
#define UE4SS_SDK_SEQ_DestreamJail_HPP

class ASEQ_DestreamJail_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class ABP_Droid_C* Clementine_ControlRoom;                                        // 0x0278 (size: 0x8)
    class AActor* DoorCourtyard;                                                      // 0x0280 (size: 0x8)
    class AActor* CollisionAntiRetour;                                                // 0x0288 (size: 0x8)
    TArray<FName> Transition;                                                         // 0x0290 (size: 0x10)
    bool load;                                                                        // 0x02A0 (size: 0x1)
    bool Don't load ControlRoom;                                                      // 0x02A1 (size: 0x1)

    void LogicTrigger();
    void OnStartSequence();
    void ExecuteUbergraph_SEQ_DestreamJail(int32 EntryPoint);
}; // Size: 0x2A2

#endif
