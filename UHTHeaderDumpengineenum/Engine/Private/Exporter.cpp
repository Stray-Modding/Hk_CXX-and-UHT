#include "Exporter.h"

class UAssetExportTask;


bool UExporter::RunAssetExportTasks(const TArray<UAssetExportTask*>& ExportTasks) {
    return false;
}

bool UExporter::RunAssetExportTask(UAssetExportTask* Task) {
    return false;
}

UExporter::UExporter() {
    this->SupportedClass = NULL;
    this->ExportRootScope = NULL;
    this->PreferredFormatIndex = 0;
    this->TextIndent = 0;
    this->bText = false;
    this->bSelectedOnly = false;
    this->bForceFileOperations = false;
    this->ExportTask = NULL;
}

