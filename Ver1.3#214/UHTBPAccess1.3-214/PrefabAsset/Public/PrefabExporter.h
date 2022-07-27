#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Exporter -FallbackName=Exporter
#include "PrefabExporter.generated.h"

UCLASS(Blueprintable, NonTransient)
class PREFABASSET_API UPrefabExporter : public UExporter {
    GENERATED_BODY()
public:
    UPrefabExporter();
};

