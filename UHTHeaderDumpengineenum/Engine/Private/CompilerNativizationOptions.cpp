#include "CompilerNativizationOptions.h"

FCompilerNativizationOptions::FCompilerNativizationOptions() {
    this->ServerOnlyPlatform = false;
    this->ClientOnlyPlatform = false;
    this->bExcludeMonolithicHeaders = false;
}

