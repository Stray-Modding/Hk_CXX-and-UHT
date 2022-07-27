#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PacketHandler -ObjectName=HandlerComponentFactory -FallbackName=HandlerComponentFactory
#include "EngineHandlerComponentFactory.generated.h"

UCLASS()
class UEngineHandlerComponentFactory : public UHandlerComponentFactory {
    GENERATED_BODY()
public:
    UEngineHandlerComponentFactory();
};

