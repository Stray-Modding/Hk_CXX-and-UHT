#include "Sequence.h"
#include "StreamingComponent.h"
#include "SaveComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent

void ASequence::StartSequence() {
}

void ASequence::SetCheckpoint(FName _name) {
}



FName ASequence::GetCheckpoint() const {
    return NAME_None;
}

void ASequence::_OnStreamedIn(UStreamingComponent* _streamingComponent) {
}

ASequence::ASequence() {
    this->m_saveComponent = CreateDefaultSubobject<USaveComponent>(TEXT("SaveComponent"));
    this->m_streamingComponent = CreateDefaultSubobject<UStreamingComponent>(TEXT("StreamingComponent"));
    this->m_billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->m_autoStartSequence = true;
}

