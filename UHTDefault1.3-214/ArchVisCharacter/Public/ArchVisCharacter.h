#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "ArchVisCharacter.generated.h"

UCLASS()
class ARCHVISCHARACTER_API AArchVisCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString LookUpAxisName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString LookUpAtRateAxisName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString TurnAxisName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString TurnAtRateAxisName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString MoveForwardAxisName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString MoveRightAxisName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MouseSensitivityScale_Pitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MouseSensitivityScale_Yaw;
    
    AArchVisCharacter();
};

