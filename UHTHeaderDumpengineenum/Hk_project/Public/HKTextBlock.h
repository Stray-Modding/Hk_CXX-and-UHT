#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TextBlock -FallbackName=TextBlock
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "HKTextBlock.generated.h"

UCLASS()
class HK_PROJECT_API UHKTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_selectedColor;
    
public:
    UHKTextBlock();
};

