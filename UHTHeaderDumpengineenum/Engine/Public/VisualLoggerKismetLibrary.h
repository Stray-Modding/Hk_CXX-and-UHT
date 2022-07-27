#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "VisualLoggerKismetLibrary.generated.h"

class UObject;

UCLASS(BlueprintType, MinimalAPI)
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVisualLoggerKismetLibrary();
    UFUNCTION(BlueprintCallable)
    static void RedirectVislog(UObject* SourceOwner, UObject* DestinationOwner);
    
    UFUNCTION(BlueprintCallable)
    static void LogText(UObject* WorldContextObject, const FString& Text, FName LogCategory, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable)
    static void LogSegment(UObject* WorldContextObject, const FVector SegmentStart, const FVector SegmentEnd, const FString& Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable)
    static void LogLocation(UObject* WorldContextObject, FVector Location, const FString& Text, FLinearColor ObjectColor, float Radius, FName LogCategory, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable)
    static void LogBox(UObject* WorldContextObject, FBox BoxShape, const FString& Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog);
    
    UFUNCTION(BlueprintCallable)
    static void EnableRecording(bool bEnabled);
    
};

