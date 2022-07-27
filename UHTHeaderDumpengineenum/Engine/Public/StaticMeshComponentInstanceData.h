#pragma once
#include "CoreMinimal.h"
#include "StreamingTextureBuildInfo.h"
#include "PrimitiveComponentInstanceData.h"
#include "StaticMeshVertexColorLODData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "StaticMeshComponentInstanceData.generated.h"

class UStaticMesh;

USTRUCT()
struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UStaticMesh* StaticMesh;
    
    UPROPERTY()
    TArray<FStaticMeshVertexColorLODData> VertexColorLODs;
    
    UPROPERTY()
    TArray<FGuid> CachedStaticLighting;
    
    UPROPERTY()
    TArray<FStreamingTextureBuildInfo> StreamingTextureData;
    
    ENGINE_API FStaticMeshComponentInstanceData();
};

