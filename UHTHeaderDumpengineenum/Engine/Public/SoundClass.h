#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundClassProperties.h"
#include "PassiveSoundMixModifier.h"
#include "SoundClass.generated.h"

class USoundClass;

UCLASS(BlueprintType, EditInlineNew)
class ENGINE_API USoundClass : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoundClassProperties Properties;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USoundClass*> ChildClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers;
    
    UPROPERTY(BlueprintReadOnly)
    USoundClass* ParentClass;
    
    USoundClass();
};

