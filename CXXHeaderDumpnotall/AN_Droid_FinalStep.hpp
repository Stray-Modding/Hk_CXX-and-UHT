#ifndef UE4SS_SDK_AN_Droid_FinalStep_HPP
#define UE4SS_SDK_AN_Droid_FinalStep_HPP

class UAN_Droid_FinalStep_C : public UAnimNotifyState
{
    bool IsLeftFoot;

    FString GetNotifyName();
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};

#endif
