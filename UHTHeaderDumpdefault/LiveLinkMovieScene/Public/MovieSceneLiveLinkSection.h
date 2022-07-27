#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectPreset -FallbackName=LiveLinkSubjectPreset
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkFrameData -FallbackName=LiveLinkFrameData
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkRefSkeleton -FallbackName=LiveLinkRefSkeleton
#include "MovieSceneLiveLinkSection.generated.h"

class UMovieSceneLiveLinkSubSection;

UCLASS()
class LIVELINKMOVIESCENE_API UMovieSceneLiveLinkSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FLiveLinkSubjectPreset SubjectPreset;
    
    UPROPERTY()
    TArray<bool> ChannelMask;
    
    UPROPERTY()
    TArray<UMovieSceneLiveLinkSubSection*> SubSections;
    
    UPROPERTY()
    FName SubjectName;
    
    UPROPERTY()
    FLiveLinkFrameData TemplateToPush;
    
    UPROPERTY()
    FLiveLinkRefSkeleton RefSkeleton;
    
    UPROPERTY()
    TArray<FName> CurveNames;
    
    UPROPERTY()
    TArray<FMovieSceneFloatChannel> PropertyFloatChannels;
    
    UMovieSceneLiveLinkSection();
};

