#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingResult.h"
#include "AIRequestID.h"
#include "AIMoveCompletedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, TEnumAsByte<EPathFollowingResult::Type>, Result);

