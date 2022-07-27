#include "AssetExportTask.h"

UAssetExportTask::UAssetExportTask() {
    this->Object = NULL;
    this->Exporter = NULL;
    this->bSelected = false;
    this->bReplaceIdentical = false;
    this->bPrompt = false;
    this->bAutomated = false;
    this->bUseFileArchive = false;
    this->bWriteEmptyFiles = false;
    this->Options = NULL;
}

