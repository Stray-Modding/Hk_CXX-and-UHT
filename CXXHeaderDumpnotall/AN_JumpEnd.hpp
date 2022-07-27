#ifndef UE4SS_SDK_AN_JumpEnd_HPP
#define UE4SS_SDK_AN_JumpEnd_HPP

class UAN_JumpEnd_C : public UAnimNotify
{

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    FString GetNotifyName();
};

#endif
