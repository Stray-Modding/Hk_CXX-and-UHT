#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Border -FallbackName=Border
#include "HKBorder.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKBorder : public UBorder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_selectedColor;
    
public:
    UHKBorder();
};

