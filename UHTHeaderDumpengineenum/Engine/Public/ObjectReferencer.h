#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ObjectReferencer.generated.h"

UCLASS()
class UObjectReferencer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UObject*> ReferencedObjects;
    
    UObjectReferencer();
};

