#ifndef UE4SS_SDK_AN_CanExitAnimation_HPP
#define UE4SS_SDK_AN_CanExitAnimation_HPP

class UAN_CanExitAnimation_C : public UAnimNotify
{

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
