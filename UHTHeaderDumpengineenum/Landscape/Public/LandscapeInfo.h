#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LandscapeInfo.generated.h"

class ALandscape;
class ALandscapeStreamingProxy;

UCLASS(Transient)
class ULandscapeInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TLazyObjectPtr<ALandscape> LandscapeActor;
    
    UPROPERTY()
    FGuid LandscapeGuid;
    
    UPROPERTY()
    int32 ComponentSizeQuads;
    
    UPROPERTY()
    int32 SubsectionSizeQuads;
    
    UPROPERTY()
    int32 ComponentNumSubsections;
    
    UPROPERTY()
    FVector DrawScale;
    
    UPROPERTY()
    TArray<ALandscapeStreamingProxy*> Proxies;
    
    ULandscapeInfo();
};

