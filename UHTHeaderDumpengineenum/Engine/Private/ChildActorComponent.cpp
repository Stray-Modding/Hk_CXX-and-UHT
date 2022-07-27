#include "ChildActorComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AActor;

void UChildActorComponent::SetChildActorClass(TSubclassOf<AActor> InClass) {
}

void UChildActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UChildActorComponent, ChildActor);
}

UChildActorComponent::UChildActorComponent() {
    this->ChildActorClass = NULL;
    this->ChildActor = NULL;
    this->ChildActorTemplate = NULL;
}

