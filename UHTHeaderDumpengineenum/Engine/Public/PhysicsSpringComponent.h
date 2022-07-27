#pragma once
#include "CoreMinimal.h"
#include "ECollisionChannel.h"
#include "SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PhysicsSpringComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPhysicsSpringComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpringStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpringDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpringLengthAtRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpringRadius;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<ECollisionChannel> SpringChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreSelf;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SpringCompression;
    
    UPhysicsSpringComponent();
    UFUNCTION(BlueprintPure)
    FVector GetSpringRestingPoint() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSpringDirection() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSpringCurrentEndPoint() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedCompressionScalar() const;
    
};

