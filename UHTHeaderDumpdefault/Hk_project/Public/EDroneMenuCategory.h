#pragma once
#include "CoreMinimal.h"
#include "EDroneMenuCategory.generated.h"

UENUM()
enum EDroneMenuCategory {
    DroneMenuCategory_None,
    DroneMenuCategory_Inventory,
    DroneMenuCategory_PhotoGallery,
    DroneMenuCategory_Memories,
    DroneMenuCategory_MAX UMETA(Hidden),
};

