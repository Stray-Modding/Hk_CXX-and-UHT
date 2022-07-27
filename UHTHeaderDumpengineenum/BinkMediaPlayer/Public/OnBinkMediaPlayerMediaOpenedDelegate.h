#pragma once
#include "CoreMinimal.h"
#include "OnBinkMediaPlayerMediaOpenedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBinkMediaPlayerMediaOpened, const FString&, OpenedUrl);

