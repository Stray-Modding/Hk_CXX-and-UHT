#pragma once
#include "CoreMinimal.h"
#include "OnSubmixEnvelopeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubmixEnvelope, const TArray<float>&, Envelope);

