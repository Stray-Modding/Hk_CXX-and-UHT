#pragma once
#include "CoreMinimal.h"
#include "LiveLinkSubjectName.h"
#include "LiveLinkSourceDebugInfo.generated.h"

USTRUCT()
struct FLiveLinkSourceDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FLiveLinkSubjectName SubjectName;
    
    UPROPERTY(VisibleAnywhere)
    int32 SnapshotIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumberOfBufferAtSnapshot;
    
    LIVELINKINTERFACE_API FLiveLinkSourceDebugInfo();
};

