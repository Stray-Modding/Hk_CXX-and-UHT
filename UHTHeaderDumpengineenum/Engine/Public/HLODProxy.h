#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HLODProxyMesh.h"
#include "HLODProxy.generated.h"

class UHLODProxyDesc;

UCLASS()
class ENGINE_API UHLODProxy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TArray<FHLODProxyMesh> ProxyMeshes;
    
    UPROPERTY(VisibleAnywhere)
    TMap<UHLODProxyDesc*, FHLODProxyMesh> HLODActors;
    
public:
    UHLODProxy();
};

