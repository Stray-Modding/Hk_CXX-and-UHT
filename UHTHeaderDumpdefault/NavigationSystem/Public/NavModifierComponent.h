#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NavRelevantComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NavModifierComponent.generated.h"

class UNavArea;

UCLASS(DefaultConfig, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NAVIGATIONSYSTEM_API UNavModifierComponent : public UNavRelevantComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(EditAnywhere)
    FVector FailsafeExtent;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bIncludeAgentHeight: 1;
    
    UNavModifierComponent();
    UFUNCTION(BlueprintCallable)
    void SetAreaClass(TSubclassOf<UNavArea> NewAreaClass);
    
};

