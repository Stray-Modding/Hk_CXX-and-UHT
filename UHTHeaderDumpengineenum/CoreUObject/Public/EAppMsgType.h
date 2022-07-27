#pragma once
#include "CoreMinimal.h"
#include "EAppMsgType.generated.h"

UENUM(BlueprintType)
namespace EAppMsgType {
    enum Type {
        Ok,
        YesNo,
        OkCancel,
        YesNoCancel,
        CancelRetryContinue,
        YesNoYesAllNoAll,
        YesNoYesAllNoAllCancel,
        YesNoYesAll,
    };
}

