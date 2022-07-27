#include "KismetInputLibrary.h"

bool UKismetInputLibrary::PointerEvent_IsTouchEvent(const FPointerEvent& Input) {
    return false;
}

bool UKismetInputLibrary::PointerEvent_IsMouseButtonDown(const FPointerEvent& Input, FKey MouseButton) {
    return false;
}

float UKismetInputLibrary::PointerEvent_GetWheelDelta(const FPointerEvent& Input) {
    return 0.0f;
}

int32 UKismetInputLibrary::PointerEvent_GetUserIndex(const FPointerEvent& Input) {
    return 0;
}

int32 UKismetInputLibrary::PointerEvent_GetTouchpadIndex(const FPointerEvent& Input) {
    return 0;
}

FVector2D UKismetInputLibrary::PointerEvent_GetScreenSpacePosition(const FPointerEvent& Input) {
    return FVector2D{};
}

int32 UKismetInputLibrary::PointerEvent_GetPointerIndex(const FPointerEvent& Input) {
    return 0;
}

FVector2D UKismetInputLibrary::PointerEvent_GetLastScreenSpacePosition(const FPointerEvent& Input) {
    return FVector2D{};
}

ESlateGesture UKismetInputLibrary::PointerEvent_GetGestureType(const FPointerEvent& Input) {
    return ESlateGesture::None;
}

FVector2D UKismetInputLibrary::PointerEvent_GetGestureDelta(const FPointerEvent& Input) {
    return FVector2D{};
}

FKey UKismetInputLibrary::PointerEvent_GetEffectingButton(const FPointerEvent& Input) {
    return FKey{};
}

FVector2D UKismetInputLibrary::PointerEvent_GetCursorDelta(const FPointerEvent& Input) {
    return FVector2D{};
}

bool UKismetInputLibrary::Key_IsVectorAxis(const FKey& Key) {
    return false;
}

bool UKismetInputLibrary::Key_IsValid(const FKey& Key) {
    return false;
}

bool UKismetInputLibrary::Key_IsMouseButton(const FKey& Key) {
    return false;
}

bool UKismetInputLibrary::Key_IsModifierKey(const FKey& Key) {
    return false;
}

bool UKismetInputLibrary::Key_IsKeyboardKey(const FKey& Key) {
    return false;
}

bool UKismetInputLibrary::Key_IsGamepadKey(const FKey& Key) {
    return false;
}

bool UKismetInputLibrary::Key_IsDigital(const FKey& Key) {
    return false;
}

bool UKismetInputLibrary::Key_IsButtonAxis(const FKey& Key) {
    return false;
}

bool UKismetInputLibrary::Key_IsAxis3D(const FKey& Key) {
    return false;
}

bool UKismetInputLibrary::Key_IsAxis2D(const FKey& Key) {
    return false;
}

bool UKismetInputLibrary::Key_IsAxis1D(const FKey& Key) {
    return false;
}

bool UKismetInputLibrary::Key_IsAnalog(const FKey& Key) {
    return false;
}

EUINavigation UKismetInputLibrary::Key_GetNavigationDirectionFromKey(const FKeyEvent& InKeyEvent) {
    return EUINavigation::Left;
}

EUINavigation UKismetInputLibrary::Key_GetNavigationDirectionFromAnalog(const FAnalogInputEvent& InAnalogEvent) {
    return EUINavigation::Left;
}

EUINavigationAction UKismetInputLibrary::Key_GetNavigationActionFromKey(const FKeyEvent& InKeyEvent) {
    return EUINavigationAction::Accept;
}

EUINavigationAction UKismetInputLibrary::Key_GetNavigationAction(const FKey& InKey) {
    return EUINavigationAction::Accept;
}

FText UKismetInputLibrary::Key_GetDisplayName(const FKey& Key) {
    return FText::GetEmpty();
}

bool UKismetInputLibrary::InputEvent_IsShiftDown(const FInputEvent& Input) {
    return false;
}

bool UKismetInputLibrary::InputEvent_IsRightShiftDown(const FInputEvent& Input) {
    return false;
}

bool UKismetInputLibrary::InputEvent_IsRightControlDown(const FInputEvent& Input) {
    return false;
}

bool UKismetInputLibrary::InputEvent_IsRightCommandDown(const FInputEvent& Input) {
    return false;
}

bool UKismetInputLibrary::InputEvent_IsRightAltDown(const FInputEvent& Input) {
    return false;
}

bool UKismetInputLibrary::InputEvent_IsRepeat(const FInputEvent& Input) {
    return false;
}

bool UKismetInputLibrary::InputEvent_IsLeftShiftDown(const FInputEvent& Input) {
    return false;
}

bool UKismetInputLibrary::InputEvent_IsLeftControlDown(const FInputEvent& Input) {
    return false;
}

bool UKismetInputLibrary::InputEvent_IsLeftCommandDown(const FInputEvent& Input) {
    return false;
}

bool UKismetInputLibrary::InputEvent_IsLeftAltDown(const FInputEvent& Input) {
    return false;
}

bool UKismetInputLibrary::InputEvent_IsControlDown(const FInputEvent& Input) {
    return false;
}

bool UKismetInputLibrary::InputEvent_IsCommandDown(const FInputEvent& Input) {
    return false;
}

bool UKismetInputLibrary::InputEvent_IsAltDown(const FInputEvent& Input) {
    return false;
}

FText UKismetInputLibrary::InputChord_GetDisplayName(const FInputChord& Key) {
    return FText::GetEmpty();
}

int32 UKismetInputLibrary::GetUserIndex(const FKeyEvent& Input) {
    return 0;
}

FKey UKismetInputLibrary::GetKey(const FKeyEvent& Input) {
    return FKey{};
}

float UKismetInputLibrary::GetAnalogValue(const FAnalogInputEvent& Input) {
    return 0.0f;
}

bool UKismetInputLibrary::EqualEqual_KeyKey(FKey A, FKey B) {
    return false;
}

bool UKismetInputLibrary::EqualEqual_InputChordInputChord(FInputChord A, FInputChord B) {
    return false;
}

void UKismetInputLibrary::CalibrateTilt() {
}

UKismetInputLibrary::UKismetInputLibrary() {
}

