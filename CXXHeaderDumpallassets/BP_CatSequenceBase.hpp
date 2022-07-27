#ifndef UE4SS_SDK_BP_CatSequenceBase_HPP
#define UE4SS_SDK_BP_CatSequenceBase_HPP

class ABP_CatSequenceBase_C : public ABP_SequenceBase_C
{
    bool Activate;                                                                    // 0x0270 (size: 0x1)
    class ABP_CatFollow_C* cat;                                                       // 0x0278 (size: 0x8)
    class ABP_CatFollow_C* SecondaryCat;                                              // 0x0280 (size: 0x8)
    bool IsFinished;                                                                  // 0x0288 (size: 0x1)
    bool canStart;                                                                    // 0x0289 (size: 0x1)
    bool nextCanStart;                                                                // 0x028A (size: 0x1)
    bool UpdateSpeed;                                                                 // 0x028B (size: 0x1)
    bool AllowChangeSpeed;                                                            // 0x028C (size: 0x1)
    float MovementSpeed;                                                              // 0x0290 (size: 0x4)
    bool ForceJump;                                                                   // 0x0294 (size: 0x1)
    bool AutonomousLookAt;                                                            // 0x0295 (size: 0x1)

}; // Size: 0x296

#endif
