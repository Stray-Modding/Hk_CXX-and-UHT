#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "SubjectMetadata.generated.h"

USTRUCT(BlueprintType)
struct FSubjectMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FString> StringMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimecode SceneTimecode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameRate SceneFramerate;
    
    LIVELINKINTERFACE_API FSubjectMetadata();
};

