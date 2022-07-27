#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "SkeletalMeshSocket.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType, MinimalAPI)
class USkeletalMeshSocket : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName BoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector RelativeScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bForceAlwaysAnimated;
    
    USkeletalMeshSocket();
    UFUNCTION(BlueprintCallable)
    void InitializeSocketFromLocation(const USkeletalMeshComponent* SkelComp, FVector WorldLocation, FVector WorldNormal);
    
    UFUNCTION(BlueprintPure)
    FVector GetSocketLocation(const USkeletalMeshComponent* SkelComp) const;
    
};

