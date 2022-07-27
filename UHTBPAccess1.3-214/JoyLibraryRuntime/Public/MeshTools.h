#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MeshTools.generated.h"

class USkeletalMesh;
class USkeleton;

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UMeshTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMeshTools();
    UFUNCTION(BlueprintCallable)
    static USkeletalMesh* MergeSkeletalMeshes(USkeleton* _skeleton, const TArray<USkeletalMesh*>& _skeletalMeshes);
    
};

