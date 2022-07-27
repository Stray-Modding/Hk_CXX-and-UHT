#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CharacterMovementComponent -FallbackName=CharacterMovementComponent
#include "ZurgCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UZurgCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UZurgCharacterMovementComponent();
};

