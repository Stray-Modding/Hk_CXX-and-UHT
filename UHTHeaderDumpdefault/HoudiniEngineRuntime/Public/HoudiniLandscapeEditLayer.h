#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HoudiniLandscapeEditLayer.generated.h"

class ALandscapeProxy;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniLandscapeEditLayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;
    
    UPROPERTY()
    FString LayerName;
    
    UHoudiniLandscapeEditLayer();
};

