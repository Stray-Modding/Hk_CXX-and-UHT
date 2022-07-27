#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SkeletalMeshSimplificationSettings.generated.h"

UCLASS(DefaultConfig)
class USkeletalMeshSimplificationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FName SkeletalMeshReductionModuleName;
    
    USkeletalMeshSimplificationSettings();
};

