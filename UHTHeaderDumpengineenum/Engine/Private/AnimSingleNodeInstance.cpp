#include "AnimSingleNodeInstance.h"

class UAnimationAsset;

void UAnimSingleNodeInstance::StopAnim() {
}

void UAnimSingleNodeInstance::SetReverse(bool bInReverse) {
}

void UAnimSingleNodeInstance::SetPreviewCurveOverride(const FName& PoseName, float Value, bool bRemoveIfZero) {
}

void UAnimSingleNodeInstance::SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies) {
}

void UAnimSingleNodeInstance::SetPosition(float InPosition, bool bFireNotifies) {
}

void UAnimSingleNodeInstance::SetPlayRate(float InPlayRate) {
}

void UAnimSingleNodeInstance::SetPlaying(bool bIsPlaying) {
}

void UAnimSingleNodeInstance::SetLooping(bool bIsLooping) {
}

void UAnimSingleNodeInstance::SetBlendSpaceInput(const FVector& InBlendInput) {
}

void UAnimSingleNodeInstance::SetAnimationAsset(UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate) {
}

void UAnimSingleNodeInstance::PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition) {
}

float UAnimSingleNodeInstance::GetLength() {
    return 0.0f;
}

UAnimationAsset* UAnimSingleNodeInstance::GetAnimationAsset() const {
    return NULL;
}

UAnimSingleNodeInstance::UAnimSingleNodeInstance() {
    this->CurrentAsset = NULL;
}

