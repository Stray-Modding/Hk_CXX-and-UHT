#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectName -FallbackName=LiveLinkSubjectName
#include "LiveLinkDrivenComponent.generated.h"

UCLASS(Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIVELINK_API UDEPRECATED_LiveLinkDrivenComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLiveLinkSubjectName SubjectName;
    
    UPROPERTY(EditAnywhere)
    FName ActorTransformBone;
    
    UPROPERTY(EditAnywhere)
    bool bModifyActorTransform;
    
    UPROPERTY(EditAnywhere)
    bool bSetRelativeLocation;
    
    UDEPRECATED_LiveLinkDrivenComponent();
};

