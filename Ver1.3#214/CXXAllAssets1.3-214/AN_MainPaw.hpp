#ifndef UE4SS_SDK_AN_MainPaw_HPP
#define UE4SS_SDK_AN_MainPaw_HPP

class UAN_MainPaw_C : public UAnimNotifyState
{
    TEnumAsByte<E_MainPaw> Paw;                                                       // 0x0030 (size: 0x1)

    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x31

#endif
