#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkSubSectionData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneLiveLinkSubSection.generated.h"

class ULiveLinkRole;

UCLASS(Abstract)
class LIVELINKMOVIESCENE_API UMovieSceneLiveLinkSubSection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FLiveLinkSubSectionData SubSectionData;
    
    UPROPERTY()
    TSubclassOf<ULiveLinkRole> SubjectRole;
    
    UMovieSceneLiveLinkSubSection();
};

