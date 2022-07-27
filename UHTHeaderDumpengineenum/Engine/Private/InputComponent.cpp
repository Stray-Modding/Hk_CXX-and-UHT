#include "InputComponent.h"

bool UInputComponent::WasControllerKeyJustReleased(FKey Key) const {
    return false;
}

bool UInputComponent::WasControllerKeyJustPressed(FKey Key) const {
    return false;
}

bool UInputComponent::IsControllerKeyDown(FKey Key) const {
    return false;
}

void UInputComponent::GetTouchState(int32 FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed) const {
}

FVector UInputComponent::GetControllerVectorKeyState(FKey Key) const {
    return FVector{};
}

void UInputComponent::GetControllerMouseDelta(float& DeltaX, float& DeltaY) const {
}

float UInputComponent::GetControllerKeyTimeDown(FKey Key) const {
    return 0.0f;
}

void UInputComponent::GetControllerAnalogStickState(TEnumAsByte<EControllerAnalogStick::Type> WhichStick, float& StickX, float& StickY) const {
}

float UInputComponent::GetControllerAnalogKeyState(FKey Key) const {
    return 0.0f;
}

UInputComponent::UInputComponent() {
}

