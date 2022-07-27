#ifndef UE4SS_SDK_BPAN_AudioManagerPlaySound_HPP
#define UE4SS_SDK_BPAN_AudioManagerPlaySound_HPP

class UBPAN_AudioManagerPlaySound_C : public UAnimNotify
{
    FString Type;

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
