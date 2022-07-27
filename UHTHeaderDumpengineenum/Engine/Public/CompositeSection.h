#pragma once
#include "CoreMinimal.h"
#include "AnimLinkableElement.h"
#include "CompositeSection.generated.h"

class UAnimMetaData;

USTRUCT(BlueprintType)
struct FCompositeSection : public FAnimLinkableElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SectionName;
    
    UPROPERTY()
    float StartTime;
    
    UPROPERTY(VisibleAnywhere)
    FName NextSectionName;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UAnimMetaData*> MetaData;
    
    ENGINE_API FCompositeSection();
};

