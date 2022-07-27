#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ParticleModule.generated.h"

UCLASS(Abstract, EditInlineNew, Within=ParticleSystem)
class ENGINE_API UParticleModule : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bSpawnModule: 1;
    
    UPROPERTY()
    uint8 bUpdateModule: 1;
    
    UPROPERTY()
    uint8 bFinalUpdateModule: 1;
    
    UPROPERTY()
    uint8 bUpdateForGPUEmitter: 1;
    
    UPROPERTY()
    uint8 bCurvesAsColor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 b3DDrawMode: 1;
    
    UPROPERTY()
    uint8 bSupported3DDrawMode: 1;
    
    UPROPERTY()
    uint8 bEnabled: 1;
    
    UPROPERTY()
    uint8 bEditable: 1;
    
    UPROPERTY()
    uint8 LODDuplicate: 1;
    
    UPROPERTY()
    uint8 bSupportsRandomSeed: 1;
    
    UPROPERTY()
    uint8 bRequiresLoopingNotification: 1;
    
    UPROPERTY()
    uint8 LODValidity;
    
    UParticleModule();
};

