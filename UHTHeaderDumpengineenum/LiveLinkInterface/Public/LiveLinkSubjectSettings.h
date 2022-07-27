#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "LiveLinkSubjectSettings.generated.h"

class ULiveLinkFramePreProcessor;
class ULiveLinkRole;
class ULiveLinkFrameInterpolationProcessor;
class ULiveLinkFrameTranslator;

UCLASS()
class LIVELINKINTERFACE_API ULiveLinkSubjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TArray<ULiveLinkFramePreProcessor*> PreProcessors;
    
    UPROPERTY(EditAnywhere, Instanced)
    ULiveLinkFrameInterpolationProcessor* InterpolationProcessor;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<ULiveLinkFrameTranslator*> Translators;
    
    UPROPERTY()
    TSubclassOf<ULiveLinkRole> Role;
    
    UPROPERTY(VisibleAnywhere)
    FFrameRate FrameRate;
    
    UPROPERTY(EditAnywhere)
    bool bRebroadcastSubject;
    
    ULiveLinkSubjectSettings();
};

