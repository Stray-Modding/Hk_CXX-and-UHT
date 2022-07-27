#ifndef UE4SS_SDK_AN_MainPaw_HPP
#define UE4SS_SDK_AN_MainPaw_HPP

class UAN_MainPaw_C : public UAnimNotifyState
{
    TEnumAsByte<E_MainPaw> Paw;

    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};

#endif
