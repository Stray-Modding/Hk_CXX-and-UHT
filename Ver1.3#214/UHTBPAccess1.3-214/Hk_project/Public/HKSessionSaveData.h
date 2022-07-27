#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HKSessionSaveData.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKSessionSaveData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsInSentinelPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsInZurgPursuit;
    
public:
    UHKSessionSaveData();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString BlueprintToString() const;
    
};

