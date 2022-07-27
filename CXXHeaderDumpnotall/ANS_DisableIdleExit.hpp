#ifndef UE4SS_SDK_ANS_DisableIdleExit_HPP
#define UE4SS_SDK_ANS_DisableIdleExit_HPP

class UANS_DisableIdleExit_C : public UAnimNotifyState
{

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};

#endif
