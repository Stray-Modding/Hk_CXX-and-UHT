#pragma once
#include "CoreMinimal.h"
#include "OnAudioMultiEnvelopeValueDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAudioMultiEnvelopeValue, const float, AverageEnvelopeValue, const float, MaxEnvelope, const int32, NumWaveInstances);

