#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StreamingGroup.generated.h"

class UStreamingComponent;

UCLASS(Abstract)
class UStreamingGroup : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TArray<UStreamingComponent*> m_streamingComponents;
    
    UPROPERTY(Export)
    TArray<UStreamingComponent*> m_pendingRegisterComponents;
    
    UPROPERTY(Export)
    TArray<UStreamingComponent*> m_pendingUnregisterComponents;
    
public:
    UStreamingGroup();
};

