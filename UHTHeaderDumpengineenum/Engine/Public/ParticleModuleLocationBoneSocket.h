#pragma once
#include "CoreMinimal.h"
#include "ELocationBoneSocketSelectionMethod.h"
#include "ELocationBoneSocketSource.h"
#include "ParticleModuleLocationBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LocationBoneSocketInfo.h"
#include "ParticleModuleLocationBoneSocket.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ELocationBoneSocketSource> SourceType;
    
    UPROPERTY(EditAnywhere)
    FVector UniversalOffset;
    
    UPROPERTY(EditAnywhere)
    TArray<FLocationBoneSocketInfo> SourceLocations;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ELocationBoneSocketSelectionMethod> SelectionMethod;
    
    UPROPERTY(EditAnywhere)
    uint8 bUpdatePositionEachFrame: 1;
    
    UPROPERTY()
    uint8 bOrientMeshEmitters: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bInheritBoneVelocity: 1;
    
    UPROPERTY(EditAnywhere)
    float InheritVelocityScale;
    
    UPROPERTY(EditAnywhere)
    FName SkelMeshActorParamName;
    
    UPROPERTY(EditAnywhere)
    int32 NumPreSelectedIndices;
    
    UParticleModuleLocationBoneSocket();
};

