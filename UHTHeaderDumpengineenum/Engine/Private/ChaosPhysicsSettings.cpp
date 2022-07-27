#include "ChaosPhysicsSettings.h"

FChaosPhysicsSettings::FChaosPhysicsSettings() {
    this->DefaultThreadingModel = EChaosThreadingMode::DedicatedThread;
    this->DedicatedThreadTickMode = EChaosSolverTickMode::Fixed;
    this->DedicatedThreadBufferMode = EChaosBufferMode::Double;
}

