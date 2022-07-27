#ifndef UE4SS_SDK_COMP_Troccable_HPP
#define UE4SS_SDK_COMP_Troccable_HPP

class UCOMP_Troccable_C : public UBackpackUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0550 (size: 0x8)
    class ABP_TroccableBase_C* OwnerObject;                                           // 0x0558 (size: 0x8)
    TEnumAsByte<E_BartermanLoot> Object type;                                         // 0x0560 (size: 0x1)
    FCOMP_Troccable_COnStartTroc OnStartTroc;                                         // 0x0568 (size: 0x10)
    void OnStartTroc(class UCOMP_Troccable_C* Comp Troccable, TEnumAsByte<E_BartermanLoot> ObjectType);
    FName LootIDToPay;                                                                // 0x0578 (size: 0x8)
    int32 NbOfLootToPay;                                                              // 0x0580 (size: 0x4)
    TSubclassOf<class AActor> LootToGive;                                             // 0x0588 (size: 0x8)

    void _OnUseStarted(class ACatPawn* _cat);
    void _OnAfterUseDone(class ACatPawn* _cat);
    void Setup_Troccable(class ABP_TroccableBase_C* OwnerObject, TEnumAsByte<E_BartermanLoot> Object, FName LootIDToPay, int32 NbOfLootToPay, TSubclassOf<class AActor> LootToGive);
    void ExecuteUbergraph_COMP_Troccable(int32 EntryPoint);
    void OnStartTroc__DelegateSignature(class UCOMP_Troccable_C* Comp Troccable, TEnumAsByte<E_BartermanLoot> ObjectType);
}; // Size: 0x590

#endif
