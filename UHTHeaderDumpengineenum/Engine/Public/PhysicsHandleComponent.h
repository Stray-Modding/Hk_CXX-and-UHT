#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "PhysicsHandleComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, CollapseCategories, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPhysicsHandleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UPrimitiveComponent* GrabbedComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bSoftAngularConstraint: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bSoftLinearConstraint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bInterpolateTarget: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LinearDamping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LinearStiffness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AngularDamping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AngularStiffness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InterpolationSpeed;
    
    UPhysicsHandleComponent();
    UFUNCTION(BlueprintCallable)
    void SetTargetRotation(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocationAndRotation(FVector NewLocation, FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocation(FVector NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearStiffness(float NewLinearStiffness);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearDamping(float NewLinearDamping);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolationSpeed(float NewInterpolationSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularStiffness(float NewAngularStiffness);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularDamping(float NewAngularDamping);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseComponent();
    
    UFUNCTION(BlueprintCallable)
    void GrabComponentAtLocationWithRotation(UPrimitiveComponent* Component, FName InBoneName, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void GrabComponentAtLocation(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation);
    
    UFUNCTION(BlueprintCallable)
    void GrabComponent(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation, bool bConstrainRotation);
    
    UFUNCTION(BlueprintPure)
    void GetTargetLocationAndRotation(FVector& TargetLocation, FRotator& TargetRotation) const;
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetGrabbedComponent() const;
    
};

