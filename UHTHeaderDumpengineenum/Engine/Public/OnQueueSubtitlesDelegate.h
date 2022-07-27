#pragma once
#include "CoreMinimal.h"
#include "SubtitleCue.h"
#include "OnQueueSubtitlesDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnQueueSubtitles, const TArray<FSubtitleCue>&, Subtitles, float, CueDuration);

