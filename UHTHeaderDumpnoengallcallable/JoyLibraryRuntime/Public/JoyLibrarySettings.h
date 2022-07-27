#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "JoyLibrarySettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class JOYLIBRARYRUNTIME_API UJoyLibrarySettings : public UObject {
    GENERATED_BODY()
public:
    UJoyLibrarySettings();
};

