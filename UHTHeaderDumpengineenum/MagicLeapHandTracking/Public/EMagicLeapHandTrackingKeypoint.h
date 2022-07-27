#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapHandTrackingKeypoint.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapHandTrackingKeypoint : uint8 {
    Thumb_Tip,
    Thumb_IP,
    Thumb_MCP,
    Thumb_CMC,
    Index_Tip,
    Index_DIP,
    Index_PIP,
    Index_MCP,
    Middle_Tip,
    Middle_DIP,
    Middle_PIP,
    Middle_MCP,
    Ring_Tip,
    Ring_DIP,
    Ring_PIP,
    Ring_MCP,
    Pinky_Tip,
    Pinky_DIP,
    Pinky_PIP,
    Pinky_MCP,
    Wrist_Center,
    Wrist_Ulnar,
    Wrist_Radial,
    Hand_Center,
};

