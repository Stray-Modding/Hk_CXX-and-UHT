#ifndef UE4SS_SDK_COMP_Pushable_HPP
#define UE4SS_SDK_COMP_Pushable_HPP

class UCOMP_Pushable_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0200 (size: 0x8)
    float Strength;                                                                   // 0x0208 (size: 0x4)
    bool UseCatForward;                                                               // 0x020C (size: 0x1)
    FCOMP_Pushable_CCatInteractionDispatched CatInteractionDispatched;                // 0x0210 (size: 0x10)
    void CatInteractionDispatched();
    bool UseDestructible;                                                             // 0x0220 (size: 0x1)

    void ReceiveBeginPlay();
    void OnCatInteraction();
    void ExecuteUbergraph_COMP_Pushable(int32 EntryPoint);
    void CatInteractionDispatched__DelegateSignature();
}; // Size: 0x221

#endif
