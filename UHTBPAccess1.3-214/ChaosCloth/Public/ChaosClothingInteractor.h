#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothingInteractor -FallbackName=ClothingInteractor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ChaosClothingInteractor.generated.h"

UCLASS(Blueprintable)
class CHAOSCLOTH_API UChaosClothingInteractor : public UClothingInteractor {
    GENERATED_BODY()
public:
    UChaosClothingInteractor();
    UFUNCTION(BlueprintCallable)
    void SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
    
    UFUNCTION(BlueprintCallable)
    void SetLongRangeAttachmentLinear(float TetherStiffness);
    
    UFUNCTION(BlueprintCallable)
    void SetLongRangeAttachment(FVector2D TetherStiffness);
    
    UFUNCTION(BlueprintCallable)
    void SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetDamping(float DampingCoefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimDriveLinear(float AnimDriveStiffness);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping);
    
    UFUNCTION(BlueprintCallable)
    void SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity);
    
    UFUNCTION(BlueprintCallable)
    void ResetAndTeleport(bool bReset, bool bTeleport);
    
};

