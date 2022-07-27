#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SessionServicePong.generated.h"

USTRUCT()
struct FSessionServicePong {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Authorized;
    
    UPROPERTY(EditAnywhere)
    FString BuildDate;
    
    UPROPERTY(EditAnywhere)
    FString DeviceName;
    
    UPROPERTY(EditAnywhere)
    FGuid InstanceId;
    
    UPROPERTY(EditAnywhere)
    FString InstanceName;
    
    UPROPERTY(EditAnywhere)
    FString PlatformName;
    
    UPROPERTY(EditAnywhere)
    FGuid SessionId;
    
    UPROPERTY(EditAnywhere)
    FString SessionName;
    
    UPROPERTY(EditAnywhere)
    FString SessionOwner;
    
    UPROPERTY(EditAnywhere)
    bool Standalone;
    
    SESSIONMESSAGES_API FSessionServicePong();
};

