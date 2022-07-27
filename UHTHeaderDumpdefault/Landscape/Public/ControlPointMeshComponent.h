#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "ControlPointMeshComponent.generated.h"

UCLASS(EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UControlPointMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    float VirtualTextureMainPassMaxDrawDistance;
    
    UControlPointMeshComponent();
};

