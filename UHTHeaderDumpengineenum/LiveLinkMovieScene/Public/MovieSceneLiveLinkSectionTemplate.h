#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectPreset -FallbackName=LiveLinkSubjectPreset
#include "LiveLinkSubSectionData.h"
#include "MovieSceneLiveLinkSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FLiveLinkSubjectPreset SubjectPreset;
    
    UPROPERTY()
    TArray<bool> ChannelMask;
    
    UPROPERTY()
    TArray<FLiveLinkSubSectionData> SubSectionsData;
    
    LIVELINKMOVIESCENE_API FMovieSceneLiveLinkSectionTemplate();
};

