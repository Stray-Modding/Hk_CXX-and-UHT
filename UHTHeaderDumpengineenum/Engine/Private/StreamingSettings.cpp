#include "StreamingSettings.h"

UStreamingSettings::UStreamingSettings() {
    this->AsyncLoadingThreadEnabled = false;
    this->WarnIfTimeLimitExceeded = false;
    this->TimeLimitExceededMultiplier = 1.50f;
    this->TimeLimitExceededMinTime = 0.00f;
    this->MinBulkDataSizeForAsyncLoading = 131072;
    this->UseBackgroundLevelStreaming = true;
    this->AsyncLoadingUseFullTimeLimit = true;
    this->AsyncLoadingTimeLimit = 5.00f;
    this->PriorityAsyncLoadingExtraTime = 15.00f;
    this->LevelStreamingActorsUpdateTimeLimit = 5.00f;
    this->PriorityLevelStreamingActorsUpdateExtraTime = 5.00f;
    this->LevelStreamingComponentsRegistrationGranularity = 10;
    this->LevelStreamingUnregisterComponentsTimeLimit = 1.00f;
    this->LevelStreamingComponentsUnregistrationGranularity = 5;
    this->FlushStreamingOnExit = true;
    this->EventDrivenLoaderEnabled = false;
}

