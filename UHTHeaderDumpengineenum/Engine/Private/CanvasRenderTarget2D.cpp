#include "CanvasRenderTarget2D.h"
#include "Templates/SubclassOf.h"

class UObject;
class UCanvasRenderTarget2D;

void UCanvasRenderTarget2D::UpdateResource() {
}


void UCanvasRenderTarget2D::GetSize(int32& Width, int32& Height) {
}

UCanvasRenderTarget2D* UCanvasRenderTarget2D::CreateCanvasRenderTarget2D(UObject* WorldContextObject, TSubclassOf<UCanvasRenderTarget2D> CanvasRenderTarget2DClass, int32 Width, int32 Height) {
    return NULL;
}

UCanvasRenderTarget2D::UCanvasRenderTarget2D() {
    this->bShouldClearRenderTargetOnReceiveUpdate = true;
}

