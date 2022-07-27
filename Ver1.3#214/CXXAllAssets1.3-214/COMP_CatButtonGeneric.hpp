#ifndef UE4SS_SDK_COMP_CatButtonGeneric_HPP
#define UE4SS_SDK_COMP_CatButtonGeneric_HPP

class UCOMP_CatButtonGeneric_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0200 (size: 0x8)
    FCOMP_CatButtonGeneric_CCatInteractionDispatched CatInteractionDispatched;        // 0x0208 (size: 0x10)
    void CatInteractionDispatched();
    class UAnimSequence* CatAnimToPlay;                                               // 0x0218 (size: 0x8)
    bool PlayAnim?;                                                                   // 0x0220 (size: 0x1)
    bool MoveToCatPos?;                                                               // 0x0221 (size: 0x1)
    FVector CatPosToPlayAnim;                                                         // 0x0224 (size: 0xC)
    float TimeBeforeInteractionStart;                                                 // 0x0230 (size: 0x4)
    bool Active;                                                                      // 0x0234 (size: 0x1)

    void OnCatInteraction();
    void ExecuteUbergraph_COMP_CatButtonGeneric(int32 EntryPoint);
    void CatInteractionDispatched__DelegateSignature();
}; // Size: 0x235

#endif
