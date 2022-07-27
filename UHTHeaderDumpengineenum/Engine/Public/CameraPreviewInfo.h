#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "CameraPreviewInfo.generated.h"

class APawn;
class UAnimSequence;

USTRUCT()
struct FCameraPreviewInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<APawn> PawnClass;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* AnimSeq;
    
    UPROPERTY(VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(VisibleAnywhere)
    FRotator Rotation;
    
    UPROPERTY(Transient)
    APawn* PawnInst;
    
    ENGINE_API FCameraPreviewInfo();
};

