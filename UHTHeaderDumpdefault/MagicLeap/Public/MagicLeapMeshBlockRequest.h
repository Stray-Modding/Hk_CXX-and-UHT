#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EMagicLeapMeshLOD.h"
#include "MagicLeapMeshBlockRequest.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapMeshBlockRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid BlockID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMagicLeapMeshLOD LevelOfDetail;
    
    FMagicLeapMeshBlockRequest();
};

