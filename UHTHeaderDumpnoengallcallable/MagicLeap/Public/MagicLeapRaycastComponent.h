#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MagicLeapRaycastHitResult.h"
#include "MagicLeapRaycastQueryParams.h"
#include "MagicLeapRaycastComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAP_API UMagicLeapRaycastComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FRaycastResultDelegate, FMagicLeapRaycastHitResult, HitResult);
    
    UMagicLeapRaycastComponent();
    UFUNCTION(BlueprintCallable)
    bool RequestRaycast(const FMagicLeapRaycastQueryParams& RequestParams, const UMagicLeapRaycastComponent::FRaycastResultDelegate& ResultDelegate);
    
};

