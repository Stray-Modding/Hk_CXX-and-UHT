#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VictoryISM.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class AVictoryISM : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* Mesh;
    
    AVictoryISM();
};

