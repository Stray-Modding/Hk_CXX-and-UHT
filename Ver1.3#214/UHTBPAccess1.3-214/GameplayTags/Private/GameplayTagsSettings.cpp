#include "GameplayTagsSettings.h"

UGameplayTagsSettings::UGameplayTagsSettings() {
    this->ImportTagsFromConfig = true;
    this->WarnOnInvalidTags = true;
    this->ClearInvalidTags = false;
    this->FastReplication = false;
    this->InvalidTagCharacters = TEXT("\"',");
    this->NumBitsForContainerSize = 6;
    this->NetIndexFirstBitSegment = 16;
}

