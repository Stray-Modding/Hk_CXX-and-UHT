#ifndef UE4SS_SDK_COMP_CatSpot_HPP
#define UE4SS_SDK_COMP_CatSpot_HPP

class UCOMP_CatSpot_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0200 (size: 0x8)
    bool IsHidingSpot;                                                                // 0x0208 (size: 0x1)
    class UAnimSequence* AnimToPlay;                                                  // 0x0210 (size: 0x8)
    bool doesAnimLoop?;                                                               // 0x0218 (size: 0x1)
    bool IsDiggingSpot;                                                               // 0x0219 (size: 0x1)
    FVector CatPosToPlayAnim;                                                         // 0x021C (size: 0xC)
    bool IsUsed;                                                                      // 0x0228 (size: 0x1)
    bool BlockingCatSpot;                                                             // 0x0229 (size: 0x1)

    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void UnblockCatSpot();
    void ExecuteUbergraph_COMP_CatSpot(int32 EntryPoint);
}; // Size: 0x22A

#endif
