#ifndef UE4SS_SDK_BP_Object_Animation_Synchronized_HPP
#define UE4SS_SDK_BP_Object_Animation_Synchronized_HPP

class UBP_Object_Animation_Synchronized_C : public UObject
{
    TArray<class UAnimSequence*> DroidAnimation;                                      // 0x0028 (size: 0x10)
    TArray<FPlayingAnimationSynchronizedActors> SynchronizedActors;                   // 0x0038 (size: 0x10)
    bool KeepLastAnimationAsIdle;                                                     // 0x0048 (size: 0x1)

}; // Size: 0x49

#endif
