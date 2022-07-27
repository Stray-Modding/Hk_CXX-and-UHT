#pragma once
#include "CoreMinimal.h"
#include "OnSubmixSpectralAnalysisBPDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSubmixSpectralAnalysisBP, const TArray<float>&, Magnitude);

