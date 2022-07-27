#pragma once
#include "CoreMinimal.h"
#include "OnPawnControllerChangedDelegate.generated.h"

class APawn;
class AController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPawnControllerChanged, APawn*, Pawn, AController*, Controller);

