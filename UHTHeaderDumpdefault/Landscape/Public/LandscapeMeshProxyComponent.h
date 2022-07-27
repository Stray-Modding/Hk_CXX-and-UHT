#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LandscapeMeshProxyComponent.generated.h"

UCLASS(EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULandscapeMeshProxyComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid LandscapeGuid;
    
    UPROPERTY()
    TArray<FIntPoint> ProxyComponentBases;
    
    UPROPERTY()
    int8 ProxyLOD;
    
public:
    ULandscapeMeshProxyComponent();
};

