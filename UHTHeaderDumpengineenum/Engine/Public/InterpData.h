#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterpData.generated.h"

class UInterpGroup;
class UInterpGroupDirector;
class UInterpCurveEdSetup;

UCLASS(BlueprintType, MinimalAPI)
class UInterpData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float InterpLength;
    
    UPROPERTY()
    float PathBuildTime;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TArray<UInterpGroup*> InterpGroups;
    
    UPROPERTY(Export)
    UInterpCurveEdSetup* CurveEdSetup;
    
    UPROPERTY()
    float EdSectionStart;
    
    UPROPERTY()
    float EdSectionEnd;
    
    UPROPERTY(EditAnywhere)
    uint8 bShouldBakeAndPrune: 1;
    
    UPROPERTY(Transient)
    UInterpGroupDirector* CachedDirectorGroup;
    
    UPROPERTY()
    TArray<FName> AllEventNames;
    
    UInterpData();
};

