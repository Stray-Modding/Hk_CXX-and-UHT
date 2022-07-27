#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "LiveLinkTickDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectRepresentation -FallbackName=LiveLinkSubjectRepresentation
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "LiveLinkComponentController.generated.h"

class ULiveLinkControllerBase;
class ULiveLinkRole;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIVELINKCOMPONENTS_API ULiveLinkComponentController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLiveLinkSubjectRepresentation SubjectRepresentation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, Interp, NoClear)
    TMap<TSubclassOf<ULiveLinkRole>, ULiveLinkControllerBase*> ControllerMap;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUpdateInEditor;
    
    UPROPERTY(BlueprintAssignable)
    FLiveLinkTickDelegate OnLiveLinkUpdated;
    
    UPROPERTY(EditInstanceOnly)
    FComponentReference ComponentToControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableEvaluateLiveLinkWhenSpawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEvaluateLiveLink;
    
    ULiveLinkComponentController();
};

