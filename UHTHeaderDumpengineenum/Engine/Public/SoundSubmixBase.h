#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundSubmixBase.generated.h"

class USoundSubmixBase;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class ENGINE_API USoundSubmixBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<USoundSubmixBase*> ChildSubmixes;
    
    USoundSubmixBase();
};

