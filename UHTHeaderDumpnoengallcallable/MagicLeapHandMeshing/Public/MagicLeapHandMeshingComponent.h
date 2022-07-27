#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MagicLeapHandMeshingComponent.generated.h"

class UMRMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAPHANDMESHING_API UMagicLeapHandMeshingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMagicLeapHandMeshingComponent();
    UFUNCTION(BlueprintCallable)
    void SetUseWeightedNormals(const bool bInUseWeightedNormals);
    
    UFUNCTION(BlueprintCallable)
    bool DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
    
};

