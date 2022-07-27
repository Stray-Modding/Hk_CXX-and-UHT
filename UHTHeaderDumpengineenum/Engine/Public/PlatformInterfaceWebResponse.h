#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PlatformInterfaceWebResponse.generated.h"

UCLASS(MinimalAPI, Transient)
class UPlatformInterfaceWebResponse : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString OriginalURL;
    
    UPROPERTY()
    int32 ResponseCode;
    
    UPROPERTY()
    int32 Tag;
    
    UPROPERTY()
    FString StringResponse;
    
    UPROPERTY()
    TArray<uint8> BinaryResponse;
    
    UPlatformInterfaceWebResponse();
    UFUNCTION()
    int32 GetNumHeaders();
    
    UFUNCTION()
    FString GetHeaderValue(const FString& HeaderName);
    
    UFUNCTION()
    void GetHeader(int32 HeaderIndex, FString& Header, FString& Value);
    
};

