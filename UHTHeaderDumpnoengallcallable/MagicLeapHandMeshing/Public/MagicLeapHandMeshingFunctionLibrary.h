#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MagicLeapHandMeshingFunctionLibrary.generated.h"

class UMRMeshComponent;

UCLASS(Blueprintable)
class MAGICLEAPHANDMESHING_API UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapHandMeshingFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
    
    UFUNCTION(BlueprintCallable)
    static bool DestroyClient();
    
    UFUNCTION(BlueprintCallable)
    static bool CreateClient();
    
    UFUNCTION(BlueprintCallable)
    static bool ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
    
};

