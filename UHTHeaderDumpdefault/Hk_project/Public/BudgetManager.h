#pragma once
#include "CoreMinimal.h"
#include "StatGroupBudget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=JoyLibraryRuntime -ObjectName=Manager -FallbackName=Manager
#include "BudgetManager.generated.h"

UCLASS()
class HK_PROJECT_API ABudgetManager : public AManager {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint64 PhysicalMemoryBudget;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<FStatGroupBudget> m_statGroupBudgets;
    
    UPROPERTY(EditAnywhere)
    bool m_isProfilingEnabled;
    
    UPROPERTY(EditAnywhere)
    int32 m_samplesCount;
    
    UPROPERTY(EditAnywhere)
    float m_warningPercentage;
    
public:
    ABudgetManager();
    UFUNCTION(BlueprintCallable)
    void SetProfilingEnabled(bool _enabled);
    
    UFUNCTION(BlueprintPure)
    bool IsProfilingEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    FString DumpBudgets();
    
};

