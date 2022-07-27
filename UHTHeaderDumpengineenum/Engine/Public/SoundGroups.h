#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundGroup.h"
#include "SoundGroups.generated.h"

UCLASS(Abstract)
class USoundGroups : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    TArray<FSoundGroup> SoundGroupProfiles;
    
public:
    USoundGroups();
};

