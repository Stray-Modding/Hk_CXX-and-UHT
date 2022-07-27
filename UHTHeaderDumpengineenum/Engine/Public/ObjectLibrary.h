#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ObjectLibrary.generated.h"

UCLASS(MinimalAPI)
class UObjectLibrary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UClass* ObjectBaseClass;
    
    UPROPERTY(EditAnywhere)
    bool bHasBlueprintClasses;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<UObject*> Objects;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<UObject>> WeakObjects;
    
    UPROPERTY(Transient)
    bool bUseWeakReferences;
    
    UPROPERTY(Transient)
    bool bIsFullyLoaded;
    
public:
    UObjectLibrary();
};

