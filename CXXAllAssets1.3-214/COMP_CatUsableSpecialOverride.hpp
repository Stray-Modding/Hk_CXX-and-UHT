#ifndef UE4SS_SDK_COMP_CatUsableSpecialOverride_HPP
#define UE4SS_SDK_COMP_CatUsableSpecialOverride_HPP

class UCOMP_CatUsableSpecialOverride_C : public UCatUsableComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0520 (size: 0x8)
    FCOMP_CatUsableSpecialOverride_CUniqueScript UniqueScript;                        // 0x0528 (size: 0x10)
    void UniqueScript();

    TEnumAsByte<EUsableInteractionButton> GetInteractionButton();
    void _OnUseStarted(class ACatPawn* _cat);
    void ExecuteUbergraph_COMP_CatUsableSpecialOverride(int32 EntryPoint);
    void UniqueScript__DelegateSignature();
}; // Size: 0x538

#endif
