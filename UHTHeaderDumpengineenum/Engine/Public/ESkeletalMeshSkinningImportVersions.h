#pragma once
#include "CoreMinimal.h"
#include "ESkeletalMeshSkinningImportVersions.generated.h"

UENUM(BlueprintType)
enum class ESkeletalMeshSkinningImportVersions : uint8 {
    Before_Versionning,
    SkeletalMeshBuildRefactor,
    VersionPlusOne,
    LatestVersion = 0x1,
    ESkeletalMeshSkinningImportVersions_MAX = 0x3,
};

