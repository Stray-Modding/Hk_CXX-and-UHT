#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LightmappedSurfaceCollection.generated.h"

class UModel;

UCLASS(EditInlineNew, MinimalAPI)
class ULightmappedSurfaceCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UModel* SourceModel;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> Surfaces;
    
    ULightmappedSurfaceCollection();
};

