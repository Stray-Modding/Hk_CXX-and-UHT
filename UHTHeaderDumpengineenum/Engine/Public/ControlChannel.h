#pragma once
#include "CoreMinimal.h"
#include "Channel.h"
#include "ControlChannel.generated.h"

UCLASS(NonTransient)
class ENGINE_API UControlChannel : public UChannel {
    GENERATED_BODY()
public:
    UControlChannel();
};

