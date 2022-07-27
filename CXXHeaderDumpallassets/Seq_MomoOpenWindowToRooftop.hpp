#ifndef UE4SS_SDK_Seq_MomoOpenWindowToRooftop_HPP
#define UE4SS_SDK_Seq_MomoOpenWindowToRooftop_HPP

class ASeq_MomoOpenWindowToRooftop_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x0270 (size: 0x8)
    class AActor* Droid_WindowLocation;                                               // 0x0278 (size: 0x8)
    class ABP_VerticalWindow_C* WindowMomoFlat;                                       // 0x0280 (size: 0x8)
    class ABP_SplineRail_C* WindowSplineRail;                                         // 0x0288 (size: 0x8)
    bool OpenWindow;                                                                  // 0x0290 (size: 0x1)
    class AActor* WindowMomoDuplicateRooftop;                                         // 0x0298 (size: 0x8)
    class ABP_Curtain_C* Curtain;                                                     // 0x02A0 (size: 0x8)
    class AActor* CurtainMomoDuplicateRooftop;                                        // 0x02A8 (size: 0x8)

    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Seq_MomoOpenWindowToRooftop(int32 EntryPoint);
}; // Size: 0x2B0

#endif
