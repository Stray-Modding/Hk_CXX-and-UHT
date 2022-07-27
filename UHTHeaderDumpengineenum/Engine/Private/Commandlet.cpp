#include "Commandlet.h"

UCommandlet::UCommandlet() {
    this->IsServer = true;
    this->IsClient = true;
    this->IsEditor = true;
    this->LogToConsole = false;
    this->ShowErrorCount = true;
    this->ShowProgress = true;
}

