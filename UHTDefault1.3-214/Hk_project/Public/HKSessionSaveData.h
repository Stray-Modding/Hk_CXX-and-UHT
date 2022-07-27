#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HKSessionSaveData.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKSessionSaveData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    bool IsInSentinelPattern;
    
    UPROPERTY(SaveGame)
    bool IsInZurgPursuit;
    
public:
    UHKSessionSaveData();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString BlueprintToString() const;
    
};

