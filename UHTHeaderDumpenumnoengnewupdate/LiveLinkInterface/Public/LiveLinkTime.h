#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=QualifiedFrameTime -FallbackName=QualifiedFrameTime
#include "LiveLinkTime.generated.h"

USTRUCT()
struct LIVELINKINTERFACE_API FLiveLinkTime {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double WorldTime;
    
    UPROPERTY(EditAnywhere)
    FQualifiedFrameTime SceneTime;
    
    FLiveLinkTime();
};

