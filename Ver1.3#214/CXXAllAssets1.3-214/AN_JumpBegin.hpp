#ifndef UE4SS_SDK_AN_JumpBegin_HPP
#define UE4SS_SDK_AN_JumpBegin_HPP

class UAN_JumpBegin_C : public UAnimNotify
{

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    FString GetNotifyName();
}; // Size: 0x38

#endif
