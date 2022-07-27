#include "PlayerInput.h"

void UPlayerInput::SetMouseSensitivity(const float Sensitivity) {
}

void UPlayerInput::SetBind(FName BindName, const FString& Command) {
}

void UPlayerInput::InvertAxisKey(const FKey AxisKey) {
}

void UPlayerInput::InvertAxis(const FName AxisName) {
}

void UPlayerInput::ClearSmoothing() {
}

UPlayerInput::UPlayerInput() {
    this->DebugExecBindings.AddDefaulted(17);
}

