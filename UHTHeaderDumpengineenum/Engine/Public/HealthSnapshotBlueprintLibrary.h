#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "HealthSnapshotBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class ENGINE_API UHealthSnapshotBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHealthSnapshotBlueprintLibrary();
    UFUNCTION(BlueprintCallable, Exec)
    static void StopPerformanceSnapshots();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void StartPerformanceSnapshots();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void LogPerformanceSnapshot(const FString& SnapshotTitle, bool bResetStats);
    
};

