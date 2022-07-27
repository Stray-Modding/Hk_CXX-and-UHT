#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "InterpGroup.generated.h"

class UInterpTrack;

UCLASS(BlueprintType, CollapseCategories, MinimalAPI)
class UInterpGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    TArray<UInterpTrack*> InterpTracks;
    
    UPROPERTY()
    FName GroupName;
    
    UPROPERTY(EditAnywhere)
    FColor GroupColor;
    
    UPROPERTY()
    uint8 bCollapsed: 1;
    
    UPROPERTY(Transient)
    uint8 bVisible: 1;
    
    UPROPERTY()
    uint8 bIsFolder: 1;
    
    UPROPERTY()
    uint8 bIsParented: 1;
    
private:
    UPROPERTY(Transient)
    uint8 bIsSelected: 1;
    
public:
    UInterpGroup();
};

