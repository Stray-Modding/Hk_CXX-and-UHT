#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EMeshInstancingReplacementMethod.h"
#include "MeshInstancingSettings.generated.h"

class AActor;
class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FMeshInstancingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear)
    TSubclassOf<AActor> ActorClassToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InstanceReplacementThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMeshInstancingReplacementMethod MeshReplacementMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSkipMeshesWithVertexColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseHLODVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UInstancedStaticMeshComponent> ISMComponentToUse;
    
    ENGINE_API FMeshInstancingSettings();
};

