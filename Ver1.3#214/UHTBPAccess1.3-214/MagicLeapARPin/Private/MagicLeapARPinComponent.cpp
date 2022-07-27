#include "MagicLeapARPinComponent.h"
#include "Templates/SubclassOf.h"
#include "MagicLeapARPinSaveGame.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

class USceneComponent;
class AActor;

void UMagicLeapARPinComponent::UnPin() {
}

UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::TryGetPinData(TSubclassOf<UMagicLeapARPinSaveGame> InPinDataClass, bool& OutPinDataValid) {
    return NULL;
}

bool UMagicLeapARPinComponent::PinToRestoredOrSyncedID() {
    return false;
}

bool UMagicLeapARPinComponent::PinToID(const FGuid& PinId) {
    return false;
}

void UMagicLeapARPinComponent::PinToBestFit() {
}

bool UMagicLeapARPinComponent::PinSceneComponent(USceneComponent* ComponentToPin) {
    return false;
}

bool UMagicLeapARPinComponent::PinRestoredOrSynced() const {
    return false;
}

bool UMagicLeapARPinComponent::PinActor(AActor* ActorToPin) {
    return false;
}

bool UMagicLeapARPinComponent::IsPinned() const {
    return false;
}

bool UMagicLeapARPinComponent::GetPinState(FMagicLeapARPinState& State) const {
    return false;
}

bool UMagicLeapARPinComponent::GetPinnedPinID(FGuid& PinId) const {
    return false;
}

UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::GetPinData(TSubclassOf<UMagicLeapARPinSaveGame> NewPinDataClass) {
    return NULL;
}

void UMagicLeapARPinComponent::AttemptPinDataRestorationAsync() {
}

bool UMagicLeapARPinComponent::AttemptPinDataRestoration() {
    return false;
}

UMagicLeapARPinComponent::UMagicLeapARPinComponent() {
    this->UserIndex = 0;
    this->AutoPinType = EMagicLeapAutoPinType::OnlyOnDataRestoration;
    this->bShouldPinActor = false;
    this->PinDataClass = UMagicLeapARPinSaveGame::StaticClass();
    this->SearchVolume = CreateDefaultSubobject<USphereComponent>(TEXT("SearchVolume"));
    this->PinnedSceneComponent = NULL;
    this->PinData = NULL;
}

