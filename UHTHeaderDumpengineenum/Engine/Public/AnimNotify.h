#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimNotify.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, Const)
class ENGINE_API UAnimNotify : public UObject {
    GENERATED_BODY()
public:
    UAnimNotify();
    UFUNCTION(BlueprintImplementableEvent)
    bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FString GetNotifyName() const;
    
};

