#pragma once
#include "CoreMinimal.h"
#include "OnAudioFadeChangeSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAudioFadeChangeSignature, bool, bFadeOut, float, FadeTime);

