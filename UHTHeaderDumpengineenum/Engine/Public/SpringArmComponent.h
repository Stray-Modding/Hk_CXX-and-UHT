#pragma once
#include "CoreMinimal.h"
#include "ECollisionChannel.h"
#include "SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "SpringArmComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USpringArmComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SocketOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ProbeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> ProbeChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDoCollisionTest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUsePawnControlRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bInheritPitch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bInheritYaw: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bInheritRoll: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableCameraLag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableCameraRotationLag: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bUseCameraLagSubstepping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDrawDebugLagMarkers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraRotationLagSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CameraLagMaxTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraLagMaxDistance;
    
    USpringArmComponent();
    UFUNCTION(BlueprintPure)
    bool IsCollisionFixApplied() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetUnfixedCameraPosition() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetTargetRotation() const;
    
};

