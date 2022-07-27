#ifndef UE4SS_SDK_SEQ_RooftopEndDemo_HPP
#define UE4SS_SDK_SEQ_RooftopEndDemo_HPP

class ASEQ_RooftopEndDemo_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Activate;                                                                    // 0x0270 (size: 0x1)
    class ABP_OrientCameraThirdPersonZone_C* CamOrient;                               // 0x0278 (size: 0x8)
    class AActor* MomoFlatDest;                                                       // 0x0280 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0288 (size: 0x8)

    void LogicTrigger();
    void ExecuteUbergraph_SEQ_RooftopEndDemo(int32 EntryPoint);
}; // Size: 0x290

#endif
