#pragma once
#include "CoreMinimal.h"
#include "OnSubmixEnvelopeBPDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSubmixEnvelopeBP, const TArray<float>&, Envelope);

