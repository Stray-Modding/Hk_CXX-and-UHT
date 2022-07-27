#include "LightmassDebugOptions.h"

FLightmassDebugOptions::FLightmassDebugOptions() {
    this->bDebugMode = false;
    this->bStatsEnabled = false;
    this->bGatherBSPSurfacesAcrossComponents = false;
    this->CoplanarTolerance = 0.00f;
    this->bUseImmediateImport = false;
    this->bImmediateProcessMappings = false;
    this->bSortMappings = false;
    this->bDumpBinaryFiles = false;
    this->bDebugMaterials = false;
    this->bPadMappings = false;
    this->bDebugPaddings = false;
    this->bOnlyCalcDebugTexelMappings = false;
    this->bUseRandomColors = false;
    this->bColorBordersGreen = false;
    this->bColorByExecutionTime = false;
    this->ExecutionTimeDivisor = 0.00f;
}

