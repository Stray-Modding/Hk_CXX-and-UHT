#pragma once
#include "CoreMinimal.h"
#include "OnSubmixSpectralAnalysisDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubmixSpectralAnalysis, const TArray<float>&, Magnitudes);

