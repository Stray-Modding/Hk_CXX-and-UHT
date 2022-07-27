#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraAssetVersion.generated.h"

USTRUCT()
struct FNiagaraAssetVersion {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 MajorVersion;
    
    UPROPERTY(VisibleAnywhere)
    int32 MinorVersion;
    
    UPROPERTY(VisibleAnywhere)
    FGuid VersionGuid;
    
    UPROPERTY()
    bool bIsVisibleInVersionSelector;
    
    NIAGARA_API FNiagaraAssetVersion();
};

