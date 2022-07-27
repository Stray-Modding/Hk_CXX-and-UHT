#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MobileInstalledContent.generated.h"

UCLASS(BlueprintType)
class MOBILEPATCHINGUTILS_API UMobileInstalledContent : public UObject {
    GENERATED_BODY()
public:
    UMobileInstalledContent();
    UFUNCTION(BlueprintCallable)
    bool Mount(int32 PakOrder, const FString& MountPoint);
    
    UFUNCTION(BlueprintPure)
    float GetInstalledContentSize();
    
    UFUNCTION(BlueprintPure)
    float GetDiskFreeSpace();
    
};

