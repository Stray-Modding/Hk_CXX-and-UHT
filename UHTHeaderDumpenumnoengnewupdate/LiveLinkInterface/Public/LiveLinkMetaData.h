#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=QualifiedFrameTime -FallbackName=QualifiedFrameTime
#include "LiveLinkMetaData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FString> StringMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQualifiedFrameTime SceneTime;
    
    FLiveLinkMetaData();
};

