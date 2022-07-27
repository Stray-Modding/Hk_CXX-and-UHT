#pragma once
#include "CoreMinimal.h"
#include "AnimCompress_BitwiseCompressOnly.h"
#include "AnimCompress_LeastDestructive.generated.h"

UCLASS(EditInlineNew)
class UAnimCompress_LeastDestructive : public UAnimCompress_BitwiseCompressOnly {
    GENERATED_BODY()
public:
    UAnimCompress_LeastDestructive();
};

