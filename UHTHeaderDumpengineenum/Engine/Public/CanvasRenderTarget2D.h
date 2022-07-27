#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TextureRenderTarget2D.h"
#include "OnCanvasRenderTargetUpdateDelegate.h"
#include "CanvasRenderTarget2D.generated.h"

class UObject;
class UCanvas;
class UWorld;
class UCanvasRenderTarget2D;

UCLASS(Blueprintable)
class ENGINE_API UCanvasRenderTarget2D : public UTextureRenderTarget2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnCanvasRenderTargetUpdate OnCanvasRenderTargetUpdate;
    
protected:
    UPROPERTY()
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY(Transient)
    bool bShouldClearRenderTargetOnReceiveUpdate;
    
public:
    UCanvasRenderTarget2D();
    UFUNCTION(BlueprintCallable)
    void UpdateResource();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdate(UCanvas* Canvas, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintPure)
    void GetSize(int32& Width, int32& Height);
    
    UFUNCTION(BlueprintCallable)
    static UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(UObject* WorldContextObject, TSubclassOf<UCanvasRenderTarget2D> CanvasRenderTarget2DClass, int32 Width, int32 Height);
    
};

