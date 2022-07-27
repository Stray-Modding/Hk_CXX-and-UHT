#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
#include "ETrackingStatus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MotionControllerComponent.generated.h"

class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HEADMOUNTEDDISPLAY_API UMotionControllerComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite)
    EControllerHand Hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MotionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDisableLowLatencyUpdate: 1;
    
    UPROPERTY(BlueprintReadOnly)
    ETrackingStatus CurrentTrackingStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisplayDeviceModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DisplayModelSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* CustomDisplayMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> DisplayMeshMaterialOverrides;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* DisplayComponent;
    
public:
    UMotionControllerComponent();
    UFUNCTION(BlueprintCallable)
    void SetTrackingSource(const EControllerHand NewSource);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackingMotionSource(const FName NewSource);
    
    UFUNCTION(BlueprintCallable)
    void SetShowDeviceModel(const bool bShowControllerModel);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayModelSource(const FName NewDisplayModelSource);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetAssociatedPlayerIndex(const int32 NewPlayer);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMotionControllerUpdated();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTracked() const;
    
    UFUNCTION(BlueprintPure)
    EControllerHand GetTrackingSource() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetParameterValue(FName InName, bool& bValueFound);
    
    UFUNCTION(BlueprintCallable)
    FVector GetHandJointPosition(int32 jointIndex, bool& bValueFound);
    
};

