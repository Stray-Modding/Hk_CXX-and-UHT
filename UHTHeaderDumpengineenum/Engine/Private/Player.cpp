#include "Player.h"

UPlayer::UPlayer() {
    this->PlayerController = NULL;
    this->CurrentNetSpeed = 0;
    this->ConfiguredInternetSpeed = 100000;
    this->ConfiguredLanSpeed = 100000;
}

