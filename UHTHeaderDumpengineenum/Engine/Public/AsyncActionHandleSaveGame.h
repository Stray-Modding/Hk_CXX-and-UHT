#pragma once
#include "CoreMinimal.h"
#include "BlueprintAsyncActionBase.h"
#include "OnAsyncHandleSaveGameDelegate.h"
#include "AsyncActionHandleSaveGame.generated.h"

class UObject;
class USaveGame;
class UAsyncActionHandleSaveGame;

UCLASS()
class ENGINE_API UAsyncActionHandleSaveGame : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnAsyncHandleSaveGame Completed;
    
protected:
    UPROPERTY()
    USaveGame* SaveGameObject;
    
public:
    UAsyncActionHandleSaveGame();
    UFUNCTION(BlueprintCallable)
    static UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(UObject* WorldContextObject, USaveGame* NewSaveGameObject, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(UObject* WorldContextObject, const FString& SlotName, const int32 UserIndex);
    
};

