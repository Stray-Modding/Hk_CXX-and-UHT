#pragma once
#include "CoreMinimal.h"
#include "LocationServicesData.generated.h"

USTRUCT(BlueprintType)
struct FLocationServicesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Longitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Latitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HorizontalAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VerticalAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Altitude;
    
    LOCATIONSERVICESBPLIBRARY_API FLocationServicesData();
};

