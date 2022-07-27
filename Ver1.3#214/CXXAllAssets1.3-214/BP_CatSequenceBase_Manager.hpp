#ifndef UE4SS_SDK_BP_CatSequenceBase_Manager_HPP
#define UE4SS_SDK_BP_CatSequenceBase_Manager_HPP

class ABP_CatSequenceBase_Manager_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class ABP_CatSequenceBase_C* White;                                               // 0x0278 (size: 0x8)
    class ABP_CatSequenceBase_C* black;                                               // 0x0280 (size: 0x8)
    class ABP_CatSequenceBase_C* Red;                                                 // 0x0288 (size: 0x8)
    bool PlayerCat_Pass;                                                              // 0x0290 (size: 0x1)
    class AActor* PlayerCat_PassZone;                                                 // 0x0298 (size: 0x8)

    void BndEvt__BP_CatSequenceBase_Manager_PlayerCat_PassZone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_BP_CatSequenceBase_Manager(int32 EntryPoint);
}; // Size: 0x2A0

#endif
