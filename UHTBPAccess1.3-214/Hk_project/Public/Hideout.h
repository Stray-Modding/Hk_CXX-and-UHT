#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Hideout.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API AHideout : public AActor {
    GENERATED_BODY()
public:
    AHideout();
    UFUNCTION(BlueprintCallable)
    void SetClosed(bool _value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailableForHiding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetHiddenLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHiddenActor() const;
    
};

