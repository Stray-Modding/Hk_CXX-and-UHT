#include "MagicLeapGraphicsClientPerformanceInfo.h"

FMagicLeapGraphicsClientPerformanceInfo::FMagicLeapGraphicsClientPerformanceInfo() {
    this->FrameStartCPUCompAcquireCPUTimeMs = 0.00f;
    this->FrameStartCPUFrameEndGPUTimeMs = 0.00f;
    this->FrameStartCPUFrameStartCPUTimeMs = 0.00f;
    this->FrameDurationCPUTimeMs = 0.00f;
    this->FrameDurationGPUTimeMs = 0.00f;
    this->FrameInternalDurationCPUTimeMs = 0.00f;
    this->FrameInternalDurationGPUTimeMs = 0.00f;
}

