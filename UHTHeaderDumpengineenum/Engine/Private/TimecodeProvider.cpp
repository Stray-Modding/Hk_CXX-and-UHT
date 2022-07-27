#include "TimecodeProvider.h"

FTimecode UTimecodeProvider::GetTimecode() const {
    return FTimecode{};
}

ETimecodeProviderSynchronizationState UTimecodeProvider::GetSynchronizationState() const {
    return ETimecodeProviderSynchronizationState::Closed;
}

FQualifiedFrameTime UTimecodeProvider::GetQualifiedFrameTime() const {
    return FQualifiedFrameTime{};
}

FFrameRate UTimecodeProvider::GetFrameRate() const {
    return FFrameRate{};
}

FTimecode UTimecodeProvider::GetDelayedTimecode() const {
    return FTimecode{};
}

FQualifiedFrameTime UTimecodeProvider::GetDelayedQualifiedFrameTime() const {
    return FQualifiedFrameTime{};
}

bool UTimecodeProvider::FetchTimecode(FQualifiedFrameTime& OutFrameTime) {
    return false;
}

void UTimecodeProvider::FetchAndUpdate() {
}

UTimecodeProvider::UTimecodeProvider() {
    this->FrameDelay = 0.00f;
}

