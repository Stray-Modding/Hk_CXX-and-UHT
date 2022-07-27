#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EMagicLeapMeshLOD.h"
#include "MagicLeapMeshBlockRequest.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapMeshBlockRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BlockID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapMeshLOD LevelOfDetail;
    
    FMagicLeapMeshBlockRequest();
};

