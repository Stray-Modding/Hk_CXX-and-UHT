#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "RuntimeVirtualTextureVolume.generated.h"

class URuntimeVirtualTextureComponent;

UCLASS(MinimalAPI)
class ARuntimeVirtualTextureVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    URuntimeVirtualTextureComponent* VirtualTextureComponent;
    
    ARuntimeVirtualTextureVolume();
};

