#pragma once
#include "CoreMinimal.h"
#include "OnCanvasRenderTargetUpdateDelegate.generated.h"

class UCanvas;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCanvasRenderTargetUpdate, UCanvas*, Canvas, int32, Width, int32, Height);

