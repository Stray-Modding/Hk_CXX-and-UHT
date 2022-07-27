#include "GameViewportClient.h"

void UGameViewportClient::SSSwapControllers() {
}

void UGameViewportClient::ShowTitleSafeArea() {
}

void UGameViewportClient::SetConsoleTarget(int32 PlayerIndex) {
}

UGameViewportClient::UGameViewportClient() {
    this->ViewportConsole = NULL;
    this->MaxSplitscreenPlayers = 4;
    this->World = NULL;
    this->GameInstance = NULL;
}

