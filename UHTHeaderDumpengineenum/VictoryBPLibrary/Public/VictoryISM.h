#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VictoryISM.generated.h"

class UInstancedStaticMeshComponent;

UCLASS()
class AVictoryISM : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInstancedStaticMeshComponent* Mesh;
    
    AVictoryISM();
};

