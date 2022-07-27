#ifndef UE4SS_SDK_BP_Object_Animation_Synchronized_HPP
#define UE4SS_SDK_BP_Object_Animation_Synchronized_HPP

class UBP_Object_Animation_Synchronized_C : public UObject
{
    TArray<class UAnimSequence*> DroidAnimation;
    TArray<FPlayingAnimationSynchronizedActors> SynchronizedActors;
    bool KeepLastAnimationAsIdle;

};

#endif
