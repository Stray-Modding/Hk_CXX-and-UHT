#include "TimelineComponent.h"
#include "Net/UnrealNetwork.h"

class UCurveVector;
class UCurveLinearColor;
class UCurveFloat;

void UTimelineComponent::Stop() {
}

void UTimelineComponent::SetVectorCurve(UCurveVector* NewVectorCurve, FName VectorTrackName) {
}

void UTimelineComponent::SetTimelineLengthMode(TEnumAsByte<ETimelineLengthMode> NewLengthMode) {
}

void UTimelineComponent::SetTimelineLength(float NewLength) {
}

void UTimelineComponent::SetPlayRate(float NewRate) {
}

void UTimelineComponent::SetPlaybackPosition(float newPosition, bool bFireEvents, bool bFireUpdate) {
}

void UTimelineComponent::SetNewTime(float NewTime) {
}

void UTimelineComponent::SetLooping(bool bNewLooping) {
}

void UTimelineComponent::SetLinearColorCurve(UCurveLinearColor* NewLinearColorCurve, FName LinearColorTrackName) {
}

void UTimelineComponent::SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation) {
}

void UTimelineComponent::SetFloatCurve(UCurveFloat* NewFloatCurve, FName FloatTrackName) {
}

void UTimelineComponent::ReverseFromEnd() {
}

void UTimelineComponent::Reverse() {
}

void UTimelineComponent::PlayFromStart() {
}

void UTimelineComponent::Play() {
}

void UTimelineComponent::OnRep_Timeline() {
}

bool UTimelineComponent::IsReversing() const {
    return false;
}

bool UTimelineComponent::IsPlaying() const {
    return false;
}

bool UTimelineComponent::IsLooping() const {
    return false;
}

float UTimelineComponent::GetTimelineLength() const {
    return 0.0f;
}

float UTimelineComponent::GetPlayRate() const {
    return 0.0f;
}

float UTimelineComponent::GetPlaybackPosition() const {
    return 0.0f;
}

bool UTimelineComponent::GetIgnoreTimeDilation() const {
    return false;
}

void UTimelineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTimelineComponent, TheTimeline);
}

UTimelineComponent::UTimelineComponent() {
    this->bIgnoreTimeDilation = false;
}

