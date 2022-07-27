#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkSubjectName.h"
#include "LiveLinkVirtualSubject.generated.h"

class ULiveLinkRole;
class ULiveLinkFrameTranslator;

UCLASS(Abstract)
class LIVELINKINTERFACE_API ULiveLinkVirtualSubject : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSubclassOf<ULiveLinkRole> Role;
    
    UPROPERTY(EditAnywhere)
    TArray<FLiveLinkSubjectName> Subjects;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<ULiveLinkFrameTranslator*> FrameTranslators;
    
    UPROPERTY(EditAnywhere)
    bool bRebroadcastSubject;
    
public:
    ULiveLinkVirtualSubject();
};

