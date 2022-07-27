#pragma once
#include "CoreMinimal.h"
#include "OnSubmixRecordedFileDoneDelegate.generated.h"

class USoundWave;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubmixRecordedFileDone, const USoundWave*, ResultingSoundWave);

