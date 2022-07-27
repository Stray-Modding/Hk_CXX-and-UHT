#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightUnits -FallbackName=ELightUnits
#include "EDatasmithAreaLightActorShape.h"
#include "EDatasmithAreaLightActorType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentMobility -FallbackName=EComponentMobility
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "DatasmithAreaLightActor.generated.h"

class UTextureLightProfile;

UCLASS(MinimalAPI)
class ADatasmithAreaLightActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility::Type> Mobility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDatasmithAreaLightActorType LightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDatasmithAreaLightActorShape LightShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Dimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELightUnits IntensityUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureLightProfile* IESTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseIESBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IESBrightnessScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpotlightInnerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpotlightOuterAngle;
    
    ADatasmithAreaLightActor();
};

