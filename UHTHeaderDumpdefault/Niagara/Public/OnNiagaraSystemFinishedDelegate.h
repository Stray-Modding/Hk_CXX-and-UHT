#pragma once
#include "CoreMinimal.h"
#include "OnNiagaraSystemFinishedDelegate.generated.h"

class UNiagaraComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNiagaraSystemFinished, UNiagaraComponent*, PSystem);

