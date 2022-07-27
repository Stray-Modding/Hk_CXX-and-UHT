#pragma once
#include "CoreMinimal.h"
#include "ShouldEndState.h"
#include "LevelStreamingCustomStreamingStateDelegate.generated.h"

class ULevelStreaming;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLevelStreamingCustomStreamingState, ULevelStreaming*, _levelStreaming, FShouldEndState&, _shouldEndState);

