#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OnNavigationPathUpdatedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENavigationOptionFlag -FallbackName=ENavigationOptionFlag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "NavigationPath.generated.h"

UCLASS(BlueprintType)
class NAVIGATIONSYSTEM_API UNavigationPath : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnNavigationPathUpdated PathUpdatedNotifier;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FVector> PathPoints;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<ENavigationOptionFlag::Type> RecalculateOnInvalidation;
    
    UNavigationPath();
    UFUNCTION(BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStringPulled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartial() const;
    
    UFUNCTION(BlueprintPure)
    float GetPathLength() const;
    
    UFUNCTION(BlueprintPure)
    float GetPathCost() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDebugString() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag::Type> DoRecalculation);
    
    UFUNCTION(BlueprintCallable)
    void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);
    
};

