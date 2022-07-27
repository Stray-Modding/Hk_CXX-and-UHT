#include "CameraExposureSettings.h"

FCameraExposureSettings::FCameraExposureSettings() {
    this->Method = AEM_Histogram;
    this->LowPercent = 0.00f;
    this->HighPercent = 0.00f;
    this->MinBrightness = 0.00f;
    this->MaxBrightness = 0.00f;
    this->SpeedUp = 0.00f;
    this->SpeedDown = 0.00f;
    this->Bias = 0.00f;
    this->BiasCurve = NULL;
    this->MeterMask = NULL;
    this->HistogramLogMin = 0.00f;
    this->HistogramLogMax = 0.00f;
    this->CalibrationConstant = 0.00f;
    this->ApplyPhysicalCameraExposure = false;
}

