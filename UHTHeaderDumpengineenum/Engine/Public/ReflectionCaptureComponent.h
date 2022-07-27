#pragma once
#include "CoreMinimal.h"
#include "EMobileReflectionCompression.h"
#include "SceneComponent.h"
#include "EReflectionSourceType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ReflectionCaptureComponent.generated.h"

class UBillboardComponent;
class UTextureCube;

UCLASS(Abstract, BlueprintType, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UReflectionCaptureComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UBillboardComponent* CaptureOffsetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EReflectionSourceType ReflectionSourceType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMobileReflectionCompression MobileReflectionCompression;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTextureCube* Cubemap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SourceCubemapAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Brightness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bModifyMaxValueRGBM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxValueRGBM;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector CaptureOffset;
    
    UPROPERTY()
    FGuid MapBuildDataId;
    
private:
    UPROPERTY(Transient)
    UTextureCube* CachedEncodedHDRCubemap;
    
public:
    UReflectionCaptureComponent();
};

