#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DynamicPropertyPath.h"
#include "PropertyBinding.generated.h"

UCLASS()
class UMG_API UPropertyBinding : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> SourceObject;
    
    UPROPERTY()
    FDynamicPropertyPath SourcePath;
    
    UPROPERTY()
    FName DestinationProperty;
    
    UPropertyBinding();
};

