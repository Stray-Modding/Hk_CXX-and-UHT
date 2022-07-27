#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "BroadphaseSettings.generated.h"

USTRUCT(BlueprintType)
struct FBroadphaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseMBPOnClient;
    
    UPROPERTY(EditAnywhere)
    bool bUseMBPOnServer;
    
    UPROPERTY(EditAnywhere)
    bool bUseMBPOuterBounds;
    
    UPROPERTY(EditAnywhere)
    FBox MBPBounds;
    
    UPROPERTY(EditAnywhere)
    FBox MBPOuterBounds;
    
    UPROPERTY(EditAnywhere)
    uint32 MBPNumSubdivs;
    
    ENGINE_API FBroadphaseSettings();
};

