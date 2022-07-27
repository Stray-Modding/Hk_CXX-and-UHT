#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "XRDeviceId.h"
#include "DeviceModelLoadedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "AsyncTask_LoadXRDeviceVisComponent.generated.h"

class UPrimitiveComponent;
class UAsyncTask_LoadXRDeviceVisComponent;
class AActor;

UCLASS()
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDeviceModelLoadedDelegate OnModelLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FDeviceModelLoadedDelegate OnLoadFailure;
    
private:
    UPROPERTY(Export)
    UPrimitiveComponent* SpawnedComponent;
    
public:
    UAsyncTask_LoadXRDeviceVisComponent();
    UFUNCTION(BlueprintCallable)
    static UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, UPrimitiveComponent*& NewComponent);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform, UPrimitiveComponent*& NewComponent);
    
};

