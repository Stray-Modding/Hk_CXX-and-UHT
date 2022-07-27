#include "AutomationTestSettings.h"

UAutomationTestSettings::UAutomationTestSettings() {
    this->EditorTestModules.AddDefaulted(4);
    this->TestLevelFolders.AddDefaulted(1);
    this->PIETestDuration = 5.00f;
}

