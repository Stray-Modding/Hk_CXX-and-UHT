#pragma once
#include "CoreMinimal.h"
#include "OnDragDropMulticastDelegate.generated.h"

class UDragDropOperation;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDragDropMulticast, UDragDropOperation*, Operation);

