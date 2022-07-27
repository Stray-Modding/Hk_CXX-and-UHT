#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MovieSceneSkeletalAnimationParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "MovieSceneSkeletalAnimationSection.generated.h"

class UAnimSequence;
class UAnimSequenceBase;

UCLASS(MinimalAPI)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMovieSceneSkeletalAnimationParams Params;
    
private:
    UPROPERTY()
    UAnimSequence* AnimSequence;
    
    UPROPERTY()
    UAnimSequenceBase* Animation;
    
    UPROPERTY()
    float StartOffset;
    
    UPROPERTY()
    float EndOffset;
    
    UPROPERTY()
    float PlayRate;
    
    UPROPERTY()
    uint8 bReverse: 1;
    
    UPROPERTY()
    FName SlotName;
    
public:
    UPROPERTY(EditAnywhere)
    FVector StartLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator StartRotationOffset;
    
    UPROPERTY()
    bool bMatchWithPrevious;
    
    UPROPERTY()
    FName MatchedBoneName;
    
    UPROPERTY()
    FVector MatchedLocationOffset;
    
    UPROPERTY()
    FRotator MatchedRotationOffset;
    
    UPROPERTY()
    bool bMatchTranslation;
    
    UPROPERTY()
    bool bMatchIncludeZHeight;
    
    UPROPERTY()
    bool bMatchRotationYaw;
    
    UPROPERTY()
    bool bMatchRotationPitch;
    
    UPROPERTY()
    bool bMatchRotationRoll;
    
    UMovieSceneSkeletalAnimationSection();
};

