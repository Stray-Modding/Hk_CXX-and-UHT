#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("BlueTwelve Studio");
    this->CopyrightNotice = TEXT("Fill out your copyright notice in the Description page of Project Settings.");
    this->ProjectName = TEXT("Stray");
    this->ProjectVersion = TEXT("1.0.0.0");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("[Stray]"));
    this->ProjectDebugTitleInfo = FText::FromString(TEXT(" "));
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bAllowWindowResize = false;
    this->bAllowClose = true;
    this->bAllowMaximize = false;
    this->bAllowMinimize = true;
}

