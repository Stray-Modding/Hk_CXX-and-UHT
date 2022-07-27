#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineMeshComponent -FallbackName=SplineMeshComponent
#include "ToyoSplineMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOYOTOOLRUNTIME_API UToyoSplineMeshComponent : public USplineMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MeshIndex;
    
    UToyoSplineMeshComponent();
};

