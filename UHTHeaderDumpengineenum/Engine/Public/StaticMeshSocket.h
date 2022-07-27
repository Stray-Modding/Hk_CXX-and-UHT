#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "StaticMeshSocket.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UStaticMeshSocket : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Tag;
    
    UStaticMeshSocket();
};

