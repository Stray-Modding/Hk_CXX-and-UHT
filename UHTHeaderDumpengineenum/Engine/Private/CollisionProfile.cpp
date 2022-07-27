#include "CollisionProfile.h"

UCollisionProfile::UCollisionProfile() {
    this->Profiles.AddDefaulted(58);
    this->DefaultChannelResponses.AddDefaulted(16);
    this->EditProfiles.AddDefaulted(16);
    this->ProfileRedirects.AddDefaulted(15);
    this->CollisionChannelRedirects.AddDefaulted(25);
}

