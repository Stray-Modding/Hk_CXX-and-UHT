#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Border -FallbackName=Border
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "HKBorder.generated.h"

UCLASS()
class HK_PROJECT_API UHKBorder : public UBorder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_selectedColor;
    
public:
    UHKBorder();
};

