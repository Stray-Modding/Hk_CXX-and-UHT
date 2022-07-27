#pragma once
#include "CoreMinimal.h"
#include "DatasmithMeshSectionInfoMapTemplate.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithMeshBuildSettingsTemplate.h"
#include "DatasmithStaticMaterialTemplate.h"
#include "DatasmithStaticMeshTemplate.generated.h"

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightMapCoordinateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightMapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatasmithStaticMaterialTemplate> StaticMaterials;
    
    UDatasmithStaticMeshTemplate();
};

