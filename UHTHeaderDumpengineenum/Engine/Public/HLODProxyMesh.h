#pragma once
#include "CoreMinimal.h"
#include "HLODProxyMesh.generated.h"

class ALODActor;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FHLODProxyMesh {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TLazyObjectPtr<ALODActor> LODActor;
    
    UPROPERTY(VisibleAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(VisibleAnywhere)
    FName Key;
    
public:
    ENGINE_API FHLODProxyMesh();
};

