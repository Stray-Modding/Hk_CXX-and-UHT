#include "VisualLoggerKismetLibrary.h"

class UObject;

void UVisualLoggerKismetLibrary::RedirectVislog(UObject* SourceOwner, UObject* DestinationOwner) {
}

void UVisualLoggerKismetLibrary::LogText(UObject* WorldContextObject, const FString& Text, FName LogCategory, bool bAddToMessageLog) {
}

void UVisualLoggerKismetLibrary::LogSegment(UObject* WorldContextObject, const FVector SegmentStart, const FVector SegmentEnd, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog) {
}

void UVisualLoggerKismetLibrary::LogLocation(UObject* WorldContextObject, FVector Location, const FString& Text, FLinearColor ObjectColor, float Radius, FName LogCategory, bool bAddToMessageLog) {
}

void UVisualLoggerKismetLibrary::LogBox(UObject* WorldContextObject, FBox BoxShape, const FString& Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog) {
}

void UVisualLoggerKismetLibrary::EnableRecording(bool bEnabled) {
}

UVisualLoggerKismetLibrary::UVisualLoggerKismetLibrary() {
}

