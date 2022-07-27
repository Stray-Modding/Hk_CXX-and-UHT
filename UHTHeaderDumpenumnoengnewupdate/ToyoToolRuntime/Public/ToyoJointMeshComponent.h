#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "ToyoJointMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOYOTOOLRUNTIME_API UToyoJointMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MeshIndex;
    
    UToyoJointMeshComponent();
};

