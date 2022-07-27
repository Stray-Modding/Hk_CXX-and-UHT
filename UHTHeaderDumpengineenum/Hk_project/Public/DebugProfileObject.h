#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DebugProfile.h"
#include "DebugProfileObject.generated.h"

UCLASS()
class HK_PROJECT_API UDebugProfileObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDebugProfileEnabled;
    
    UPROPERTY(EditAnywhere)
    FDebugProfile DebugProfile;
    
    UPROPERTY()
    FString MapName;
    
    UDebugProfileObject();
};

