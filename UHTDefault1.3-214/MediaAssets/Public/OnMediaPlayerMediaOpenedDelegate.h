#pragma once
#include "CoreMinimal.h"
#include "OnMediaPlayerMediaOpenedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMediaPlayerMediaOpened, const FString&, OpenedUrl);

