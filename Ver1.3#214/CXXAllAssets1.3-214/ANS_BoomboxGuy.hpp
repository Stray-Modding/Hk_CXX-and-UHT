#ifndef UE4SS_SDK_ANS_BoomboxGuy_HPP
#define UE4SS_SDK_ANS_BoomboxGuy_HPP

class UANS_BoomboxGuy_C : public UAnimNotifyState
{

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x30

#endif
