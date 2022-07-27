#ifndef UE4SS_SDK_BPAN_AudioManagerPlaySound_HPP
#define UE4SS_SDK_BPAN_AudioManagerPlaySound_HPP

class UBPAN_AudioManagerPlaySound_C : public UAnimNotify
{
    FString Type;                                                                     // 0x0038 (size: 0x10)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x48

#endif
