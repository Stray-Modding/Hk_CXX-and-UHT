#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "LODMappingData.h"
#include "ComponentSync.h"
#include "LODSyncComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API ULODSyncComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumLODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ForcedLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FComponentSync> ComponentsToSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FLODMappingData> CustomLODMapping;
    
private:
    UPROPERTY(Transient)
    int32 CurrentLOD;
    
    UPROPERTY(Transient)
    int32 CurrentNumLODs;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> DriveComponents;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> SubComponents;
    
public:
    ULODSyncComponent();
    UFUNCTION(BlueprintPure)
    FString GetLODSyncDebugText() const;
    
};

