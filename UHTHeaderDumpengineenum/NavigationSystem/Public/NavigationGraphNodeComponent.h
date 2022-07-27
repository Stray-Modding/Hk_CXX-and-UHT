#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "NavGraphNode.h"
#include "NavigationGraphNodeComponent.generated.h"

class UNavigationGraphNodeComponent;

UCLASS(MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNavigationGraphNodeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNavGraphNode Node;
    
    UPROPERTY(Export)
    UNavigationGraphNodeComponent* NextNodeComponent;
    
    UPROPERTY(Export)
    UNavigationGraphNodeComponent* PrevNodeComponent;
    
    UNavigationGraphNodeComponent();
};

